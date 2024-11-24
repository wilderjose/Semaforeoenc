import requests

# Parámetros de configuración
start_number = 3000  # Número inicial en la URL
num_images = 5000    # Cantidad de imágenes a descargar
base_url = 'https://siga.ac.ulsa.edu.ni/images/photo/'  # URL base

# Descarga de imágenes
for i in range(num_images):
    image_number = start_number + i
    url = f"{base_url}{image_number}.jpg"

    try:
        response = requests.get(url)
        if response.status_code == 200:
            with open(f"image_{image_number}.jpg", 'wb') as file:
                file.write(response.content)
            print(f"Imagen descargada: image_{image_number}.jpg")
        else:
            print(f"No se pudo descargar la imagen: {image_number} (Estado: {response.status_code})")
    except Exception as e:
        print(f"Error al intentar descargar la imagen {image_number}: {e}")

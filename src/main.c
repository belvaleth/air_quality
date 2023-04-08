#include <kernel.h>
#include <device.h>
#include <drivers/gpio.h>
#include <drivers/spi.h>
#include <drivers/i2c.h>

#define SPI_MODE		SPI_OP_MODE_MASTER | SPI_WORD_SET(8) | SPI_TRANSFER_MSB

#define I2C1_NODE       DT_NODELABEL(i2c1)

int main()
{
    // DT_NODELABEL returns the node identifier for a given node label
    // DEVICE_DT_GET returns a pointer to the device for a given node identifier
	const struct device *spi_dev = DEVICE_DT_GET(DT_NODELABEL(spi0));
    /* spi0
        MOSI: p1.15 (D10)
        MISO: p1.14 (D9)
        SCK: p1.13 (D8)
    */

    if (!device_is_ready(spi_dev))
    {
        // Check if the device is ready to use
    }

    /*struct gpio_dt_spec spi_spec = GPIO_DT_SPEC_GET(DT_NODELABEL(spi0), pinctrl_0);


   
 


    //const struct i2c_dt_spec i2c_dev = I2C_DT_SPEC_GET(I2C1_NODE);
    /* i2c1
        SDA: p0.04 (D4)
        SCL: p0.05 (D5)
    */





    return 0;
}

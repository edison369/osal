######################################################################
#
# CMAKE build recipe for PC-RTEMS Board Support Package (BSP)
#
######################################################################

add_library(osal_generic-rtems_impl OBJECT
	src/bsp_start.c
	src/bsp_console.c
)

# Link the RTEMS BSP with the "rtemscpu" system library
#target_link_libraries(osal_public_api INTERFACE
#      rtemscpu
#)

set_property(TARGET osal_generic-rtems_impl PROPERTY OSAL_EXPECTED_OSTYPE "rtems")



const char TSL_STRING[] =
    "{\"schema\":\"https://iot-tsl.oss-cn-shanghai.aliyuncs.com/schema.json\",\"profile\":{\"productKey\":\"b1GadfPW0om\"},\"services\":[{\"outputData\":[],\"identifier\":\"set\",\"inputData\":[{\"identifier\":\"Accelerator\",\"dataType\":{\"specs\":[{\"identifier\":\"x\",\"dataType\":{\"specs\":{\"unit\":\"grav\",\"min\":\"-16\",\"unitName\":\"重力加速度\",\"max\":\"16\"},\"type\":\"float\"},\"name\":\"x轴加速度\"},{\"identifier\":\"y\",\"dataType\":{\"specs\":{\"unit\":\"grav\",\"min\":\"-16\",\"unitName\":\"重力加速度\",\"max\":\"16\"},\"type\":\"float\"},\"name\":\"y轴加速度\"},{\"identifier\":\"z\",\"dataType\":{\"specs\":{\"unit\":\"grav\",\"min\":\"-16\",\"unitName\":\"重力加速度\",\"max\":\"16\"},\"type\":\"float\"},\"name\":\"z轴加速度\"}],\"type\":\"struct\"},\"name\":\"加速度传感器\"},{\"identifier\":\"Magnetometer\",\"dataType\":{\"specs\":[{\"identifier\":\"x_gs\",\"dataType\":{\"specs\":{\"min\":\"-12.0\",\"max\":\"12.0\"},\"type\":\"float\"},\"name\":\"x轴磁场强度\"},{\"identifier\":\"y_gs\",\"dataType\":{\"specs\":{\"min\":\"-12.0\",\"max\":\"12.0\"},\"type\":\"float\"},\"name\":\"y轴磁场强度\"},{\"identifier\":\"z_gs\",\"dataType\":{\"specs\":{\"min\":\"-12.0\",\"max\":\"12.0\"},\"type\":\"float\"},\"name\":\"z轴磁场强度\"}],\"type\":\"struct\"},\"name\":\"三轴磁场强度传感器\"},{\"identifier\":\"Gyroscope\",\"dataType\":{\"specs\":[{\"identifier\":\"x_dps\",\"dataType\":{\"specs\":{\"min\":\"-2000.0\",\"max\":\"2000.0\"},\"type\":\"float\"},\"name\":\"x轴角加速度\"},{\"identifier\":\"y_dps\",\"dataType\":{\"specs\":{\"min\":\"-2000.0\",\"max\":\"2000.0\"},\"type\":\"float\"},\"name\":\"y轴角加速度\"},{\"identifier\":\"z_dps\",\"dataType\":{\"specs\":{\"min\":\"-2000\",\"max\":\"2000\"},\"type\":\"float\"},\"name\":\"z轴角加速度\"}],\"type\":\"struct\"},\"name\":\"陀螺仪传感器\"},{\"identifier\":\"LightLux\",\"dataType\":{\"specs\":{\"unit\":\"Lux\",\"min\":\"0\",\"unitName\":\"照度\",\"max\":\"100000\"},\"type\":\"int\"},\"name\":\"光照强度传感器\"},{\"identifier\":\"Proximity\",\"dataType\":{\"specs\":{\"unit\":\"cm\",\"min\":\"0\",\"unitName\":\"厘米\",\"max\":\"1000\"},\"type\":\"int\"},\"name\":\"光接近传感器\"},{\"identifier\":\"Barometer\",\"dataType\":{\"specs\":{\"unit\":\"Pa\",\"min\":\"0\",\"unitName\":\"帕斯卡\",\"max\":\"110000\"},\"type\":\"int\"},\"name\":\"压力传感器\"},{\"identifier\":\"CurrentTemperature\",\"dataType\":{\"specs\":{\"unit\":\"°C\",\"min\":\"-40.0\",\"unitName\":\"摄氏度\",\"max\":\"85.0\"},\"type\":\"float\"},\"name\":\"温度传感器\"},{\"identifier\":\"Ultraviolet\",\"dataType\":{\"specs\":{\"min\":\"0\",\"max\":\"15\"},\"type\":\"int\"},\"name\":\"紫外线强度传感器\"},{\"identifier\":\"CurrentHumidity\",\"dataType\":{\"specs\":{\"unit\":\"%\",\"min\":\"0\",\"unitName\":\"百分比\",\"max\":\"100.0\"},\"type\":\"float\"},\"name\":\"湿度传感器\"},{\"identifier\":\"Hall_level\",\"dataType\":{\"specs\":{\"min\":\"0\",\"max\":\"100\"},\"type\":\"int\"},\"name\":\"霍尔传感器\"},{\"identifier\":\"Heart_rate\",\"dataType\":{\"specs\":{\"min\":\"0\",\"max\":\"200\"},\"type\":\"int\"},\"name\":\"心跳计数传感器\"},{\"identifier\":\"Gps\",\"dataType\":{\"specs\":[{\"identifier\":\"Latitude\",\"dataType\":{\"specs\":{\"unit\":\"°\",\"min\":\"-90\",\"unitName\":\"度\",\"max\":\"90\"},\"type\":\"float\"},\"name\":\"纬度\"},{\"identifier\":\"Longitude\",\"dataType\":{\"specs\":{\"unit\":\"°\",\"min\":\"-180\",\"unitName\":\"度\",\"max\":\"180\"},\"type\":\"float\"},\"name\":\"经度\"},{\"identifier\":\"Elevation\",\"dataType\":{\"specs\":{\"unit\":\"m\",\"min\":\"-500\",\"unitName\":\"米\",\"max\":\"10000\"},\"type\":\"float\"},\"name\":\"高度\"}],\"type\":\"struct\"},\"name\":\"Gps\"}],\"method\":\"thing.service.property.set\",\"name\":\"set\",\"required\":true,\"callType\":\"sync\",\"desc\":\"属性设置\"},{\"outputData\":[{\"identifier\":\"Accelerator\",\"dataType\":{\"specs\":[{\"identifier\":\"x\",\"dataType\":{\"specs\":{\"unit\":\"grav\",\"min\":\"-16\",\"unitName\":\"重力加速度\",\"max\":\"16\"},\"type\":\"float\"},\"name\":\"x轴加速度\"},{\"identifier\":\"y\",\"dataType\":{\"specs\":{\"unit\":\"grav\",\"min\":\"-16\",\"unitName\":\"重力加速度\",\"max\":\"16\"},\"type\":\"float\"},\"name\":\"y轴加速度\"},{\"identifier\":\"z\",\"dataType\":{\"specs\":{\"unit\":\"grav\",\"min\":\"-16\",\"unitName\":\"重力加速度\",\"max\":\"16\"},\"type\":\"float\"},\"name\":\"z轴加速度\"}],\"type\":\"struct\"},\"name\":\"加速度传感器\"},{\"identifier\":\"Magnetometer\",\"dataType\":{\"specs\":[{\"identifier\":\"x_gs\",\"dataType\":{\"specs\":{\"min\":\"-12.0\",\"max\":\"12.0\"},\"type\":\"float\"},\"name\":\"x轴磁场强度\"},{\"identifier\":\"y_gs\",\"dataType\":{\"specs\":{\"min\":\"-12.0\",\"max\":\"12.0\"},\"type\":\"float\"},\"name\":\"y轴磁场强度\"},{\"identifier\":\"z_gs\",\"dataType\":{\"specs\":{\"min\":\"-12.0\",\"max\":\"12.0\"},\"type\":\"float\"},\"name\":\"z轴磁场强度\"}],\"type\":\"struct\"},\"name\":\"三轴磁场强度传感器\"},{\"identifier\":\"Gyroscope\",\"dataType\":{\"specs\":[{\"identifier\":\"x_dps\",\"dataType\":{\"specs\":{\"min\":\"-2000.0\",\"max\":\"2000.0\"},\"type\":\"float\"},\"name\":\"x轴角加速度\"},{\"identifier\":\"y_dps\",\"dataType\":{\"specs\":{\"min\":\"-2000.0\",\"max\":\"2000.0\"},\"type\":\"float\"},\"name\":\"y轴角加速度\"},{\"identifier\":\"z_dps\",\"dataType\":{\"specs\":{\"min\":\"-2000\",\"max\":\"2000\"},\"type\":\"float\"},\"name\":\"z轴角加速度\"}],\"type\":\"struct\"},\"name\":\"陀螺仪传感器\"},{\"identifier\":\"LightLux\",\"dataType\":{\"specs\":{\"unit\":\"Lux\",\"min\":\"0\",\"unitName\":\"照度\",\"max\":\"100000\"},\"type\":\"int\"},\"name\":\"光照强度传感器\"},{\"identifier\":\"Proximity\",\"dataType\":{\"specs\":{\"unit\":\"cm\",\"min\":\"0\",\"unitName\":\"厘米\",\"max\":\"1000\"},\"type\":\"int\"},\"name\":\"光接近传感器\"},{\"identifier\":\"Barometer\",\"dataType\":{\"specs\":{\"unit\":\"Pa\",\"min\":\"0\",\"unitName\":\"帕斯卡\",\"max\":\"110000\"},\"type\":\"int\"},\"name\":\"压力传感器\"},{\"identifier\":\"CurrentTemperature\",\"dataType\":{\"specs\":{\"unit\":\"°C\",\"min\":\"-40.0\",\"unitName\":\"摄氏度\",\"max\":\"85.0\"},\"type\":\"float\"},\"name\":\"温度传感器\"},{\"identifier\":\"Ultraviolet\",\"dataType\":{\"specs\":{\"min\":\"0\",\"max\":\"15\"},\"type\":\"int\"},\"name\":\"紫外线强度传感器\"},{\"identifier\":\"CurrentHumidity\",\"dataType\":{\"specs\":{\"unit\":\"%\",\"min\":\"0\",\"unitName\":\"百分比\",\"max\":\"100.0\"},\"type\":\"float\"},\"name\":\"湿度传感器\"},{\"identifier\":\"Hall_level\",\"dataType\":{\"specs\":{\"min\":\"0\",\"max\":\"100\"},\"type\":\"int\"},\"name\":\"霍尔传感器\"},{\"identifier\":\"Heart_rate\",\"dataType\":{\"specs\":{\"min\":\"0\",\"max\":\"200\"},\"type\":\"int\"},\"name\":\"心跳计数传感器\"},{\"identifier\":\"Gps\",\"dataType\":{\"specs\":[{\"identifier\":\"Latitude\",\"dataType\":{\"specs\":{\"unit\":\"°\",\"min\":\"-90\",\"unitName\":\"度\",\"max\":\"90\"},\"type\":\"float\"},\"name\":\"纬度\"},{\"identifier\":\"Longitude\",\"dataType\":{\"specs\":{\"unit\":\"°\",\"min\":\"-180\",\"unitName\":\"度\",\"max\":\"180\"},\"type\":\"float\"},\"name\":\"经度\"},{\"identifier\":\"Elevation\",\"dataType\":{\"specs\":{\"unit\":\"m\",\"min\":\"-500\",\"unitName\":\"米\",\"max\":\"10000\"},\"type\":\"float\"},\"name\":\"高度\"}],\"type\":\"struct\"},\"name\":\"Gps\"}],\"identifier\":\"get\",\"inputData\":[\"Accelerator\",\"Magnetometer\",\"Gyroscope\",\"LightLux\",\"Proximity\",\"Barometer\",\"CurrentTemperature\",\"Ultraviolet\",\"CurrentHumidity\",\"Hall_level\",\"Heart_rate\",\"Gps\"],\"method\":\"thing.service.property.get\",\"name\":\"get\",\"required\":true,\"callType\":\"sync\",\"desc\":\"属性获取\"}],\"properties\":[{\"identifier\":\"Accelerator\",\"dataType\":{\"specs\":[{\"identifier\":\"x\",\"dataType\":{\"specs\":{\"unit\":\"grav\",\"min\":\"-16\",\"unitName\":\"重力加速度\",\"max\":\"16\"},\"type\":\"float\"},\"name\":\"x轴加速度\"},{\"identifier\":\"y\",\"dataType\":{\"specs\":{\"unit\":\"grav\",\"min\":\"-16\",\"unitName\":\"重力加速度\",\"max\":\"16\"},\"type\":\"float\"},\"name\":\"y轴加速度\"},{\"identifier\":\"z\",\"dataType\":{\"specs\":{\"unit\":\"grav\",\"min\":\"-16\",\"unitName\":\"重力加速度\",\"max\":\"16\"},\"type\":\"float\"},\"name\":\"z轴加速度\"}],\"type\":\"struct\"},\"name\":\"加速度传感器\",\"accessMode\":\"rw\",\"required\":false},{\"identifier\":\"Magnetometer\",\"dataType\":{\"specs\":[{\"identifier\":\"x_gs\",\"dataType\":{\"specs\":{\"min\":\"-12.0\",\"max\":\"12.0\"},\"type\":\"float\"},\"name\":\"x轴磁场强度\"},{\"identifier\":\"y_gs\",\"dataType\":{\"specs\":{\"min\":\"-12.0\",\"max\":\"12.0\"},\"type\":\"float\"},\"name\":\"y轴磁场强度\"},{\"identifier\":\"z_gs\",\"dataType\":{\"specs\":{\"min\":\"-12.0\",\"max\":\"12.0\"},\"type\":\"float\"},\"name\":\"z轴磁场强度\"}],\"type\":\"struct\"},\"name\":\"三轴磁场强度传感器\",\"accessMode\":\"rw\",\"required\":false},{\"identifier\":\"Gyroscope\",\"dataType\":{\"specs\":[{\"identifier\":\"x_dps\",\"dataType\":{\"specs\":{\"min\":\"-2000.0\",\"max\":\"2000.0\"},\"type\":\"float\"},\"name\":\"x轴角加速度\"},{\"identifier\":\"y_dps\",\"dataType\":{\"specs\":{\"min\":\"-2000.0\",\"max\":\"2000.0\"},\"type\":\"float\"},\"name\":\"y轴角加速度\"},{\"identifier\":\"z_dps\",\"dataType\":{\"specs\":{\"min\":\"-2000\",\"max\":\"2000\"},\"type\":\"float\"},\"name\":\"z轴角加速度\"}],\"type\":\"struct\"},\"name\":\"陀螺仪传感器\",\"accessMode\":\"rw\",\"required\":false},{\"identifier\":\"LightLux\",\"dataType\":{\"specs\":{\"unit\":\"Lux\",\"min\":\"0\",\"unitName\":\"照度\",\"max\":\"100000\"},\"type\":\"int\"},\"name\":\"光照强度传感器\",\"accessMode\":\"rw\",\"required\":true},{\"identifier\":\"Proximity\",\"dataType\":{\"specs\":{\"unit\":\"cm\",\"min\":\"0\",\"unitName\":\"厘米\",\"max\":\"1000\"},\"type\":\"int\"},\"name\":\"光接近传感器\",\"accessMode\":\"rw\",\"required\":false},{\"identifier\":\"Barometer\",\"dataType\":{\"specs\":{\"unit\":\"Pa\",\"min\":\"0\",\"unitName\":\"帕斯卡\",\"max\":\"110000\"},\"type\":\"int\"},\"name\":\"压力传感器\",\"accessMode\":\"rw\",\"required\":false},{\"identifier\":\"CurrentTemperature\",\"dataType\":{\"specs\":{\"unit\":\"°C\",\"min\":\"-40.0\",\"unitName\":\"摄氏度\",\"max\":\"85.0\"},\"type\":\"float\"},\"name\":\"温度传感器\",\"accessMode\":\"rw\",\"required\":false},{\"identifier\":\"Ultraviolet\",\"dataType\":{\"specs\":{\"min\":\"0\",\"max\":\"15\"},\"type\":\"int\"},\"name\":\"紫外线强度传感器\",\"accessMode\":\"rw\",\"required\":false},{\"identifier\":\"CurrentHumidity\",\"dataType\":{\"specs\":{\"unit\":\"%\",\"min\":\"0\",\"unitName\":\"百分比\",\"max\":\"100.0\"},\"type\":\"float\"},\"name\":\"湿度传感器\",\"accessMode\":\"rw\",\"required\":false},{\"identifier\":\"Hall_level\",\"dataType\":{\"specs\":{\"min\":\"0\",\"max\":\"100\"},\"type\":\"int\"},\"name\":\"霍尔传感器\",\"accessMode\":\"rw\",\"required\":false},{\"identifier\":\"Heart_rate\",\"dataType\":{\"specs\":{\"min\":\"0\",\"max\":\"200\"},\"type\":\"int\"},\"name\":\"心跳计数传感器\",\"accessMode\":\"rw\",\"required\":false},{\"identifier\":\"Gps\",\"dataType\":{\"specs\":[{\"identifier\":\"Latitude\",\"dataType\":{\"specs\":{\"unit\":\"°\",\"min\":\"-90\",\"unitName\":\"度\",\"max\":\"90\"},\"type\":\"float\"},\"name\":\"纬度\"},{\"identifier\":\"Longitude\",\"dataType\":{\"specs\":{\"unit\":\"°\",\"min\":\"-180\",\"unitName\":\"度\",\"max\":\"180\"},\"type\":\"float\"},\"name\":\"经度\"},{\"identifier\":\"Elevation\",\"dataType\":{\"specs\":{\"unit\":\"m\",\"min\":\"-500\",\"unitName\":\"米\",\"max\":\"10000\"},\"type\":\"float\"},\"name\":\"高度\"}],\"type\":\"struct\"},\"name\":\"Gps\",\"accessMode\":\"rw\",\"required\":false}],\"events\":[{\"outputData\":[{\"identifier\":\"Accelerator\",\"dataType\":{\"specs\":[{\"identifier\":\"x\",\"dataType\":{\"specs\":{\"unit\":\"grav\",\"min\":\"-16\",\"unitName\":\"重力加速度\",\"max\":\"16\"},\"type\":\"float\"},\"name\":\"x轴加速度\"},{\"identifier\":\"y\",\"dataType\":{\"specs\":{\"unit\":\"grav\",\"min\":\"-16\",\"unitName\":\"重力加速度\",\"max\":\"16\"},\"type\":\"float\"},\"name\":\"y轴加速度\"},{\"identifier\":\"z\",\"dataType\":{\"specs\":{\"unit\":\"grav\",\"min\":\"-16\",\"unitName\":\"重力加速度\",\"max\":\"16\"},\"type\":\"float\"},\"name\":\"z轴加速度\"}],\"type\":\"struct\"},\"name\":\"加速度传感器\"},{\"identifier\":\"Magnetometer\",\"dataType\":{\"specs\":[{\"identifier\":\"x_gs\",\"dataType\":{\"specs\":{\"min\":\"-12.0\",\"max\":\"12.0\"},\"type\":\"float\"},\"name\":\"x轴磁场强度\"},{\"identifier\":\"y_gs\",\"dataType\":{\"specs\":{\"min\":\"-12.0\",\"max\":\"12.0\"},\"type\":\"float\"},\"name\":\"y轴磁场强度\"},{\"identifier\":\"z_gs\",\"dataType\":{\"specs\":{\"min\":\"-12.0\",\"max\":\"12.0\"},\"type\":\"float\"},\"name\":\"z轴磁场强度\"}],\"type\":\"struct\"},\"name\":\"三轴磁场强度传感器\"},{\"identifier\":\"Gyroscope\",\"dataType\":{\"specs\":[{\"identifier\":\"x_dps\",\"dataType\":{\"specs\":{\"min\":\"-2000.0\",\"max\":\"2000.0\"},\"type\":\"float\"},\"name\":\"x轴角加速度\"},{\"identifier\":\"y_dps\",\"dataType\":{\"specs\":{\"min\":\"-2000.0\",\"max\":\"2000.0\"},\"type\":\"float\"},\"name\":\"y轴角加速度\"},{\"identifier\":\"z_dps\",\"dataType\":{\"specs\":{\"min\":\"-2000\",\"max\":\"2000\"},\"type\":\"float\"},\"name\":\"z轴角加速度\"}],\"type\":\"struct\"},\"name\":\"陀螺仪传感器\"},{\"identifier\":\"LightLux\",\"dataType\":{\"specs\":{\"unit\":\"Lux\",\"min\":\"0\",\"unitName\":\"照度\",\"max\":\"100000\"},\"type\":\"int\"},\"name\":\"光照强度传感器\"},{\"identifier\":\"Proximity\",\"dataType\":{\"specs\":{\"unit\":\"cm\",\"min\":\"0\",\"unitName\":\"厘米\",\"max\":\"1000\"},\"type\":\"int\"},\"name\":\"光接近传感器\"},{\"identifier\":\"Barometer\",\"dataType\":{\"specs\":{\"unit\":\"Pa\",\"min\":\"0\",\"unitName\":\"帕斯卡\",\"max\":\"110000\"},\"type\":\"int\"},\"name\":\"压力传感器\"},{\"identifier\":\"CurrentTemperature\",\"dataType\":{\"specs\":{\"unit\":\"°C\",\"min\":\"-40.0\",\"unitName\":\"摄氏度\",\"max\":\"85.0\"},\"type\":\"float\"},\"name\":\"温度传感器\"},{\"identifier\":\"Ultraviolet\",\"dataType\":{\"specs\":{\"min\":\"0\",\"max\":\"15\"},\"type\":\"int\"},\"name\":\"紫外线强度传感器\"},{\"identifier\":\"CurrentHumidity\",\"dataType\":{\"specs\":{\"unit\":\"%\",\"min\":\"0\",\"unitName\":\"百分比\",\"max\":\"100.0\"},\"type\":\"float\"},\"name\":\"湿度传感器\"},{\"identifier\":\"Hall_level\",\"dataType\":{\"specs\":{\"min\":\"0\",\"max\":\"100\"},\"type\":\"int\"},\"name\":\"霍尔传感器\"},{\"identifier\":\"Heart_rate\",\"dataType\":{\"specs\":{\"min\":\"0\",\"max\":\"200\"},\"type\":\"int\"},\"name\":\"心跳计数传感器\"},{\"identifier\":\"Gps\",\"dataType\":{\"specs\":[{\"identifier\":\"Latitude\",\"dataType\":{\"specs\":{\"unit\":\"°\",\"min\":\"-90\",\"unitName\":\"度\",\"max\":\"90\"},\"type\":\"float\"},\"name\":\"纬度\"},{\"identifier\":\"Longitude\",\"dataType\":{\"specs\":{\"unit\":\"°\",\"min\":\"-180\",\"unitName\":\"度\",\"max\":\"180\"},\"type\":\"float\"},\"name\":\"经度\"},{\"identifier\":\"Elevation\",\"dataType\":{\"specs\":{\"unit\":\"m\",\"min\":\"-500\",\"unitName\":\"米\",\"max\":\"10000\"},\"type\":\"float\"},\"name\":\"高度\"}],\"type\":\"struct\"},\"name\":\"Gps\"}],\"identifier\":\"post\",\"method\":\"thing.event.property.post\",\"name\":\"post\",\"type\":\"info\",\"required\":true,\"desc\":\"属性上报\"}]}";


#ifdef SUBDEV_ENABLE

const char SUBDEV1_TSL_STRING[] =
    "{\"schema\":\"https://iot-tsl.oss-cn-shanghai.aliyuncs.com/schema.json\",\"profile\":{\"productKey\":\"a1jwrlrp3f5\"},\"services\":[{\"outputData\":[],\"identifier\":\"set\",\"inputData\":[{\"identifier\":\"LightSwitch\",\"dataType\":{\"specs\":{\"0\":\"关闭\",\"1\":\"开启\"},\"type\":\"bool\"},\"name\":\"主灯开关\"},{\"identifier\":\"WorkMode\",\"dataType\":{\"specs\":{\"0\":\"手动\",\"1\":\"阅读\",\"2\":\"影院\",\"3\":\"夜灯\",\"4\":\"生活\",\"5\":\"柔和\"},\"type\":\"enum\"},\"name\":\"工作模式\"}],\"method\":\"thing.service.property.set\",\"name\":\"set\",\"required\":true,\"callType\":\"sync\",\"desc\":\"属性设置\"},{\"outputData\":[{\"identifier\":\"LightSwitch\",\"dataType\":{\"specs\":{\"0\":\"关闭\",\"1\":\"开启\"},\"type\":\"bool\"},\"name\":\"主灯开关\"},{\"identifier\":\"WorkMode\",\"dataType\":{\"specs\":{\"0\":\"手动\",\"1\":\"阅读\",\"2\":\"影院\",\"3\":\"夜灯\",\"4\":\"生活\",\"5\":\"柔和\"},\"type\":\"enum\"},\"name\":\"工作模式\"}],\"identifier\":\"get\",\"inputData\":[\"LightSwitch\",\"WorkMode\"],\"method\":\"thing.service.property.get\",\"name\":\"get\",\"required\":true,\"callType\":\"sync\",\"desc\":\"属性获取\"},{\"outputData\":[],\"identifier\":\"SetLightSwitchTimer\",\"inputData\":[{\"identifier\":\"Timer\",\"dataType\":{\"specs\":{\"unit\":\"min\",\"min\":\"0\",\"unitName\":\"分钟\",\"max\":\"1440\"},\"type\":\"int\"},\"name\":\"计时器\"},{\"identifier\":\"LightSwitch\",\"dataType\":{\"specs\":{\"0\":\"关闭\",\"1\":\"开启\"},\"type\":\"bool\"},\"name\":\"主灯开关\"}],\"method\":\"thing.service.SetLightSwitchTimer\",\"name\":\"设置主灯开关倒计时\",\"required\":true,\"callType\":\"async\"},{\"outputData\":[],\"identifier\":\"StopCountdown\",\"inputData\":[],\"method\":\"thing.service.StopCountdown\",\"name\":\"停止倒计时\",\"required\":true,\"callType\":\"async\"},{\"outputData\":[],\"identifier\":\"FlipLightSwitch\",\"inputData\":[],\"method\":\"thing.service.FlipLightSwitch\",\"name\":\"翻转主灯开关\",\"required\":true,\"callType\":\"async\"}],\"properties\":[{\"identifier\":\"LightSwitch\",\"dataType\":{\"specs\":{\"0\":\"关闭\",\"1\":\"开启\"},\"type\":\"bool\"},\"name\":\"主灯开关\",\"accessMode\":\"rw\",\"required\":true},{\"identifier\":\"WorkMode\",\"dataType\":{\"specs\":{\"0\":\"手动\",\"1\":\"阅读\",\"2\":\"影院\",\"3\":\"夜灯\",\"4\":\"生活\",\"5\":\"柔和\"},\"type\":\"enum\"},\"name\":\"工作模式\",\"accessMode\":\"rw\",\"required\":true}],\"events\":[{\"outputData\":[{\"identifier\":\"LightSwitch\",\"dataType\":{\"specs\":{\"0\":\"关闭\",\"1\":\"开启\"},\"type\":\"bool\"},\"name\":\"主灯开关\"},{\"identifier\":\"WorkMode\",\"dataType\":{\"specs\":{\"0\":\"手动\",\"1\":\"阅读\",\"2\":\"影院\",\"3\":\"夜灯\",\"4\":\"生活\",\"5\":\"柔和\"},\"type\":\"enum\"},\"name\":\"工作模式\"}],\"identifier\":\"post\",\"method\":\"thing.event.property.post\",\"name\":\"post\",\"type\":\"info\",\"required\":true,\"desc\":\"属性上报\"},{\"outputData\":[{\"identifier\":\"errorCode\",\"dataType\":{\"specs\":{\"0\":\"正常\"},\"type\":\"enum\"},\"name\":\"故障代码\"}],\"identifier\":\"Error\",\"method\":\"thing.event.Error.post\",\"name\":\"故障上报\",\"type\":\"info\",\"required\":true}]}";

#endif
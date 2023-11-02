
@interface HDBatteryService : HDHealthService {
    CBCharacteristic * _batteryCharacteristic;
}

+ (id)implementedProperties;
+ (long long)serviceType;
+ (id)serviceUUID;

- (void).cxx_destruct;
- (void)peripheral:(id)arg1 didDiscoverCharacteristic:(id)arg2;
- (void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 updateTime:(id)arg3 error:(id)arg4;
- (void)readProperty:(id)arg1;

@end

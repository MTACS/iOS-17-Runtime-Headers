
@interface HDBodySensorLocation : HDHealthServiceCharacteristic {
    long long  _sensorLocation;
}

@property (nonatomic) long long sensorLocation;

+ (id)_buildWithBinaryValue:(id)arg1 error:(id*)arg2;
+ (id)uuid;

- (id)description;
- (long long)sensorLocation;
- (void)setSensorLocation:(long long)arg1;

@end

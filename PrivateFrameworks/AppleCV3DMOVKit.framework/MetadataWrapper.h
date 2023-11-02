
@interface MetadataWrapper : NSObject

+ (id)decodeAccel:(id)arg1;
+ (id)decodeCLLocation:(id)arg1;
+ (id)decodeCLLocation:(id)arg1 timestamp:(double*)arg2;
+ (id)decodeCMDeviceMotion:(id)arg1;
+ (id)decodeCompass:(id)arg1;
+ (id)decodeGyro:(id)arg1;
+ (id)encodeAccelerometerData:(id)arg1 andAdditionalData:(id)arg2;
+ (id)encodeCompassData:(id)arg1;
+ (id)encodeCoreLocationData:(id)arg1 timestamp:(double)arg2 andAdditionalData:(id)arg3;
+ (id)encodeDeviceMotionData:(id)arg1 andAdditionalData:(id)arg2;
+ (id)encodeGyroscopeData:(id)arg1 andAdditionalData:(id)arg2;

@end

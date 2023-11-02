
@interface PRProximityDatabase : NSObject

+ (BOOL)getDeviceBtRxOffsetFromModel:(long long)arg1;
+ (BOOL)getDeviceBtTxPowerFromModel:(long long)arg1;
+ (id)getDeviceData;
+ (long long)getPRDeviceModelFromModelId:(id)arg1;
+ (bool)getProximityDeviceParameters:(id*)arg1 forDeviceModel:(id)arg2 withError:(id*)arg3;
+ (long long)getScannerDeviceModel;

- (id)init;

@end

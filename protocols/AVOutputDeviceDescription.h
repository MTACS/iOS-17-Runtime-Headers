
@protocol AVOutputDeviceDescription <NSObject>

@required

- (NSString *)deviceID;
- (NSString *)deviceName;

@optional

- (long long)deviceSubType;
- (long long)deviceType;
- (bool)isClusterLeader;
- (NSString *)modelID;

@end


@interface BMNowPlayingOutputDevice : NSObject {
    NSString * _deviceId;
    unsigned long long  _deviceSubType;
    unsigned long long  _deviceType;
}

@property (nonatomic, readonly) NSString *deviceId;
@property (nonatomic, readonly) unsigned long long deviceSubType;
@property (nonatomic, readonly) unsigned long long deviceType;

- (void).cxx_destruct;
- (id)deviceId;
- (unsigned long long)deviceSubType;
- (unsigned long long)deviceType;
- (unsigned long long)hash;
- (id)initWithDeviceType:(unsigned long long)arg1 deviceSubType:(unsigned long long)arg2 deviceId:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)proto;

@end

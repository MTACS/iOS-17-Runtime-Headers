
@interface HMDDeviceSetupTrackingInfo : HMFObject <HMDDeviceSetupTrackingInfo> {
    NSString * _accessoryIDSIdentifier;
    NSUUID * _accessoryUUID;
    unsigned long long  _endTime;
    NSUUID * _identifier;
    long long  _role;
    NSError * _sessionError;
    NSString * _setupClientBundleID;
    unsigned long long  _startTime;
}

@property (copy) NSString *accessoryIDSIdentifier;
@property (copy) NSUUID *accessoryUUID;
@property (readonly) unsigned long long endTime;
@property (readonly, copy) NSUUID *identifier;
@property (readonly) long long role;
@property (readonly, copy) NSError *sessionError;
@property (copy) NSString *setupClientBundleID;
@property (readonly) unsigned long long startTime;

- (void).cxx_destruct;
- (id)accessoryIDSIdentifier;
- (id)accessoryUUID;
- (unsigned long long)endTime;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 startTime:(unsigned long long)arg2 endTime:(unsigned long long)arg3 role:(long long)arg4 accessoryUUID:(id)arg5 accessoryIDSIdentifier:(id)arg6 setupClientBundleID:(id)arg7;
- (long long)role;
- (id)sessionError;
- (void)setAccessoryIDSIdentifier:(id)arg1;
- (void)setAccessoryUUID:(id)arg1;
- (void)setSetupClientBundleID:(id)arg1;
- (id)setupClientBundleID;
- (unsigned long long)startTime;

@end

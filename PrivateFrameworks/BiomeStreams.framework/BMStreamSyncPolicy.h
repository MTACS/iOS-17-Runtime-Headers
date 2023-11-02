
@interface BMStreamSyncPolicy : NSObject {
    long long  _currentPlatform;
    NSString * _legacyDescriptor;
    NSDictionary * _platformPolicies;
    bool  _supportsSharedDeviceSync;
}

@property (nonatomic, readonly) NSString *legacyDescriptor;
@property (nonatomic, readonly) NSDictionary *platformPolicies;
@property (nonatomic) bool supportsSharedDeviceSync;

+ (id)syncableStreamConfigurations;
+ (id)syncableStreams;

- (void).cxx_destruct;
- (unsigned long long)directionsSupportedForTransport:(unsigned long long)arg1;
- (unsigned long long)directionsSupportedForTransport:(unsigned long long)arg1 fromPlatform:(long long)arg2;
- (id)init;
- (id)initWithLegacyDescriptor:(id)arg1 platformPolicies:(id)arg2;
- (id)initWithPolicyDictionary:(id)arg1 syncUUID:(id)arg2 legacySyncID:(id)arg3 eventClass:(Class)arg4;
- (id)legacyDescriptor;
- (id)platformPolicies;
- (void)setSupportsSharedDeviceSync:(bool)arg1;
- (bool)supportsSharedDeviceSync;
- (bool)supportsSyncingWithPlatform:(long long)arg1 overTransport:(unsigned long long)arg2 inDirection:(unsigned long long)arg3;
- (bool)supportsSyncingWithPlatform:(long long)arg1 overTransport:(unsigned long long)arg2 inDirection:(unsigned long long)arg3 fromPlatform:(long long)arg4;
- (bool)supportsTransport:(unsigned long long)arg1 direction:(unsigned long long)arg2;
- (bool)supportsTransport:(unsigned long long)arg1 direction:(unsigned long long)arg2 fromPlatform:(long long)arg3;

@end

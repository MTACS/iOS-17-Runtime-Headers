
@interface HMDAccessorySettingsEventHelper : NSObject {
    NSDictionary * _keyPathMap;
    NSArray * _keyPaths;
}

- (void).cxx_destruct;
- (id)allTopicsForHome:(id)arg1 accessory:(id)arg2;
- (id)init;
- (id)initWithKeyPathMap:(id)arg1 keyPathList:(id)arg2;
- (unsigned long long)remoteDeviceAccessControlForTopic:(id)arg1;
- (bool)remoteEventAllowedForKeyPath:(id)arg1 deviceType:(unsigned long long)arg2 userType:(unsigned long long)arg3;
- (unsigned long long)remoteUserAccessControlForTopic:(id)arg1;

@end

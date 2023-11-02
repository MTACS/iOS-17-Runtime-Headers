
@interface MTFrameworkEnvironment : NSObject {
    MTIDCache * _idCache;
    NSString * _localDataPath;
    <MTIDSecretStore> * _secretStore;
}

@property (nonatomic, copy) NSString *localDataPath;

+ (void)initialize;
+ (void)setSharedEnvironment:(id)arg1;
+ (id)sharedEnvironment;
+ (void)withEnvironment:(id)arg1 execute:(id /* block */)arg2;

- (void).cxx_destruct;
- (id)date;
- (id)dateOfBirthComponents;
- (id)hostProcessBundleIdentifier;
- (id)idCache;
- (bool)isInternalBuild;
- (id)localDataPath;
- (id)metricsKitBundleIdentifier;
- (id)secretStore;
- (void)setLocalDataPath:(id)arg1;
- (bool)useCloudKitSandbox;
- (id)valueForEntitlement:(id)arg1;

@end

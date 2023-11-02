
@interface SBFBacklightSceneHostEnvironmentProviderEntry : NSObject {
    NSString * _bundleIdentifier;
    <BLSHBacklightSceneHostEnvironment> * _environment;
}

@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic, readonly) <BLSHBacklightSceneHostEnvironment> *environment;

+ (id)entryWithSceneHostEnvironment:(id)arg1 bundleIdentifier:(id)arg2;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)environment;
- (id)initWithSceneHostEnvironment:(id)arg1 bundleIdentifier:(id)arg2;

@end


@interface VSFeatureManager : NSObject {
    VSPreferences * _preferences;
}

@property (nonatomic, retain) VSPreferences *preferences;

+ (id)sharedFeatureManager;

- (void).cxx_destruct;
- (void)disableFeature:(id)arg1;
- (void)enableFeature:(id)arg1;
- (bool)featureIsEnabled:(id)arg1;
- (id)init;
- (id)preferences;
- (void)resetFeature:(id)arg1;
- (void)setPreferences:(id)arg1;

@end

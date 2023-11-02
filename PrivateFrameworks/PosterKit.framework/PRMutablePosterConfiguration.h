
@interface PRMutablePosterConfiguration : PRPosterConfiguration

@property (nonatomic, copy) NSString *displayNameLocalizationKey;

+ (id)mutableConfiguration;
+ (id)mutableConfigurationWithRole:(id)arg1;

- (bool)copyContentsOfConfiguration:(id)arg1 error:(out id*)arg2;
- (bool)copyContentsOfPath:(id)arg1 error:(out id*)arg2;
- (void)setDisplayNameLocalizationKey:(id)arg1;
- (bool)setObject:(id)arg1 forUserInfoKey:(id)arg2;
- (bool)storeAmbientConfiguration:(id)arg1 error:(out id*)arg2;
- (bool)storeComplicationLayout:(id)arg1 error:(out id*)arg2;
- (bool)storeConfigurableOptions:(id)arg1 error:(out id*)arg2;
- (bool)storeConfiguredProperties:(id)arg1 error:(out id*)arg2;
- (bool)storeFocusConfiguration:(id)arg1 error:(out id*)arg2;
- (bool)storeHomeScreenConfiguration:(id)arg1 error:(out id*)arg2;
- (bool)storeOtherMetadata:(id)arg1 error:(out id*)arg2;
- (bool)storeSuggestionMetadata:(id)arg1 error:(out id*)arg2;
- (bool)storeTitleStyleConfiguration:(id)arg1 error:(out id*)arg2;
- (bool)storeUserInfo:(id)arg1 error:(out id*)arg2;

@end


@interface SAFetchLanguageSettings : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *idiom;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *systemBuildPrefix;

+ (id)fetchLanguageSettings;
+ (id)fetchLanguageSettingsWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)idiom;
- (bool)requiresResponse;
- (void)setIdiom:(id)arg1;
- (void)setSystemBuildPrefix:(id)arg1;
- (id)systemBuildPrefix;

@end

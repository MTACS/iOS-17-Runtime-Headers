
@interface SASettingSetNoiseManagement : SASettingSetValue

@property (nonatomic, copy) NSString *noiseManagementOption;

+ (id)setNoiseManagement;
+ (id)setNoiseManagementWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)mutatingCommand;
- (id)noiseManagementOption;
- (bool)requiresResponse;
- (void)setNoiseManagementOption:(id)arg1;

@end

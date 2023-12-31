
@interface SASettingSetAppearance : SASettingSetValue

@property (nonatomic, copy) NSString *appearance;

+ (id)setAppearance;
+ (id)setAppearanceWithDictionary:(id)arg1 context:(id)arg2;

- (id)appearance;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)mutatingCommand;
- (bool)requiresResponse;
- (void)setAppearance:(id)arg1;

@end

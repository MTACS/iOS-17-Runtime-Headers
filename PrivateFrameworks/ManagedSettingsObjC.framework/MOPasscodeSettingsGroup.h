
@interface MOPasscodeSettingsGroup : MOSettingsGroup

@property (nonatomic, retain) NSNumber *lockPasscode;

+ (id)groupName;
+ (id)lockPasscodeMetadata;

- (id)lockPasscode;
- (void)setLockPasscode:(id)arg1;

@end

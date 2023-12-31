
@interface SASettingSetNumber : SASettingSetValue

@property (nonatomic) bool increment;

+ (id)setNumber;
+ (id)setNumberWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)increment;
- (bool)requiresResponse;
- (void)setIncrement:(bool)arg1;

@end

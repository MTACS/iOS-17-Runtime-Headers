
@interface SASettingSetFloat : SASettingSetNumber

@property (nonatomic) float value;

+ (id)setFloat;
+ (id)setFloatWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setValue:(float)arg1;
- (float)value;

@end

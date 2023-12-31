
@interface SASettingBooleanEntity : SASettingEntity

@property (nonatomic, copy) NSNumber *previousValue;
@property (nonatomic) bool value;

+ (id)booleanEntity;
+ (id)booleanEntityWithDictionary:(id)arg1 context:(id)arg2;
+ (id)booleanEntityWithValue:(bool)arg1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)initWithValue:(bool)arg1;
- (id)previousValue;
- (void)setPreviousValue:(id)arg1;
- (void)setValue:(bool)arg1;
- (bool)value;

@end

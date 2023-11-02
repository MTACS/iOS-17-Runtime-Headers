
@interface SASettingFloatEntity : SASettingNumericEntity

@property (nonatomic, copy) NSNumber *previousValue;
@property (nonatomic) float value;

+ (id)floatEntity;
+ (id)floatEntityWithDictionary:(id)arg1 context:(id)arg2;
+ (id)floatEntityWithValue:(float)arg1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)initWithValue:(float)arg1;
- (id)previousValue;
- (void)setPreviousValue:(id)arg1;
- (void)setValue:(float)arg1;
- (float)value;

@end


@interface SASettingNoiseManagementEntity : SASettingEntity

@property (nonatomic, copy) NSString *previousValue;
@property (nonatomic, copy) NSString *value;

+ (id)noiseManagementEntity;
+ (id)noiseManagementEntityWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)previousValue;
- (void)setPreviousValue:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end

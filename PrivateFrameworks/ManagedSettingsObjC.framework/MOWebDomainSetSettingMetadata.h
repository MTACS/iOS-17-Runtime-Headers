
@interface MOWebDomainSetSettingMetadata : MOSetSettingMetadata

@property (nonatomic, readonly) NSSet *defaultValue;

- (id)defaultValue;
- (id)persistableValueFromValue:(id)arg1;
- (id)sanitizePersistableValue:(id)arg1;
- (id)valueFromPersistableValue:(id)arg1;

@end


@interface SAPropertyOverride : SADomainObject

@property (nonatomic, copy) NSString *property;
@property (nonatomic, copy) NSString *value;

+ (id)propertyOverride;
+ (id)propertyOverrideWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)property;
- (void)setProperty:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end

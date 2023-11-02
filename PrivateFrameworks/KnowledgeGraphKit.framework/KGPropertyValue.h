
@interface KGPropertyValue : NSObject

@property (nonatomic, readonly) unsigned long long dataType;
@property (nonatomic, readonly) <KGPropertyTypeProtocol> *kgPropertyValue;

+ (id)kgPropertiesWithMAProperties:(id)arg1;
+ (id)kgPropertyValueWithMAPropertyValue:(id)arg1;

- (unsigned long long)dataType;
- (id)description;
- (id)initForSubclasses;
- (id)kgPropertyValue;

@end

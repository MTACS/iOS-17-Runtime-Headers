
@interface IKJSRWIDependencyDomainProperty : NSObject {
    IKJSRWIDependencyDomain * _domain;
    IKJSRWIDependencyDomainType * _domainType;
    NSArray * _enumOptions;
    NSString * _name;
    NSString * _propertyType;
    NSString * _purpose;
    NSString * _reference;
    bool  _required;
}

@property (nonatomic, readonly) IKJSRWIDependencyDomain *domain;
@property (nonatomic, readonly) IKJSRWIDependencyDomainType *domainType;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *propertyType;
@property (nonatomic, readonly) NSString *purpose;
@property (getter=isRequired, nonatomic, readonly) bool required;

+ (id)propertyNameMapping;
+ (id)typeMapping;

- (void).cxx_destruct;
- (id)domain;
- (id)domainType;
- (id)initWithPropertyDictionary:(id)arg1;
- (id)initWithPropertyDictionary:(id)arg1 forDomain:(id)arg2;
- (id)initWithPropertyDictionary:(id)arg1 forType:(id)arg2;
- (bool)isRequired;
- (id)methodParameterString;
- (id)name;
- (id)propertyDefinitionString;
- (id)propertyType;
- (id)purpose;

@end

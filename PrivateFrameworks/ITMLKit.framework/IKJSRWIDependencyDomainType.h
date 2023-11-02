
@interface IKJSRWIDependencyDomainType : NSObject {
    IKJSRWIDependencyDomain * _domain;
    NSString * _domainType;
    NSString * _identifier;
    NSArray * _initializationParameters;
    NSString * _name;
    NSDictionary * _properties;
    NSString * _purpose;
}

@property (nonatomic, readonly) IKJSRWIDependencyDomain *domain;
@property (nonatomic, readonly) NSString *domainType;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSArray *initializationParameters;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSDictionary *properties;
@property (nonatomic, readonly) NSString *purpose;

- (void).cxx_destruct;
- (id)domain;
- (id)domainType;
- (id)identifier;
- (id)initWithTypeDictionary:(id)arg1 forDomain:(id)arg2;
- (id)initializationParameters;
- (id)initializationSelectorString;
- (id)initializationString;
- (id)invalidProperties;
- (bool)isInitializerValid;
- (bool)isValidWithError:(id*)arg1;
- (id)name;
- (id)properties;
- (id)purpose;
- (id)typeImplementationStringWithSoftLinking:(bool)arg1;
- (id)typeInterfaceString;

@end

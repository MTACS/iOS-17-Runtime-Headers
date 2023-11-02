
@interface IKJSRWIDependencyDomainCommand : NSObject {
    IKJSRWIDependencyDomain * _domain;
    NSString * _name;
    NSArray * _params;
    NSString * _purpose;
    NSArray * _returns;
}

@property (nonatomic, readonly) IKJSRWIDependencyDomain *domain;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSArray *params;
@property (nonatomic, readonly) NSString *purpose;
@property (nonatomic, readonly) NSArray *returns;

- (void).cxx_destruct;
- (id)domain;
- (id)initWithCommandDictionary:(id)arg1 forDomain:(id)arg2;
- (bool)isValidWithError:(id*)arg1;
- (id)name;
- (id)params;
- (id)purpose;
- (id)returns;
- (id)selectorString;

@end

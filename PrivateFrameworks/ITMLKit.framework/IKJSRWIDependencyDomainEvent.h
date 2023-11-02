
@interface IKJSRWIDependencyDomainEvent : NSObject {
    IKJSRWIDependencyDomain * _domain;
    NSString * _name;
    NSArray * _params;
    NSString * _purpose;
}

@property (nonatomic, readonly) IKJSRWIDependencyDomain *domain;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSArray *params;
@property (nonatomic, readonly) NSString *purpose;

- (void).cxx_destruct;
- (id)_eventInterfaceStringForImplementation:(bool)arg1;
- (id)domain;
- (id)eventImplementationStringWithSoftLinking:(bool)arg1;
- (id)eventInterfaceString;
- (id)initWithEventDictionary:(id)arg1 forDomain:(id)arg2;
- (bool)isValidWithError:(id*)arg1;
- (id)name;
- (id)params;
- (id)purpose;
- (id)selectorString;

@end

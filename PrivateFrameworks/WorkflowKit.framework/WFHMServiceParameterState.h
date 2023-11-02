
@interface WFHMServiceParameterState : NSObject <WFParameterState> {
    NSString * _homeIdentifier;
    NSDictionary * _serializedService;
    HMService * _service;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *homeIdentifier;
@property (nonatomic, retain) NSDictionary *serializedService;
@property (nonatomic, readonly) HMService *service;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)containedVariables;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)homeIdentifier;
- (id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;
- (id)initWithService:(id)arg1 homeIdentifier:(id)arg2;
- (bool)isEqual:(id)arg1;
- (void)processWithContext:(id)arg1 userInputRequiredHandler:(id /* block */)arg2 valueHandler:(id /* block */)arg3;
- (id)serializedRepresentation;
- (id)serializedService;
- (id)service;
- (void)setSerializedService:(id)arg1;

@end


@interface WFVariableEditingAnchor : NSObject {
    WFParameter * _parameter;
    WFVariable * _variable;
    <WFVariableProvider> * _variableProvider;
}

@property (nonatomic, readonly) WFParameter *parameter;
@property (nonatomic, readonly) WFVariable *variable;
@property (nonatomic, readonly) <WFVariableProvider> *variableProvider;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithVariable:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)parameter;
- (id)variable;
- (id)variableProvider;

@end

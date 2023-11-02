
@protocol WFVariableSupportingParameterState <WFParameterState>

@required

- (id)initWithVariable:(WFVariable *)arg1;

@optional

- (id)stateByReplacingVariable:(WFVariable *)arg1 withVariable:(WFVariable *)arg2;
- (WFVariable *)variable;

@end

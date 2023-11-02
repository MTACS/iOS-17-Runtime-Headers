
@interface WFHarnessActionConditionContext : NSObject {
    <WFVariableDataSource> * _variableDataSource;
}

@property (nonatomic, readonly) <WFVariableDataSource> *variableDataSource;

- (void).cxx_destruct;
- (id)initWithVariableDataSource:(id)arg1;
- (id)variableDataSource;

@end

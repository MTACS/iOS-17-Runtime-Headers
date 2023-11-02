
@interface MLProgramContext : NSObject {
    <MLFeatureProvider> * _executionState;
    NSString * _forwardFunctionLossName;
    NSDictionary * _functionNameToInputLayersNames;
    NSDictionary * _functionNameToOutputLayersNames;
    NSDictionary * _functionNameToStateMap;
    NSString * _trainFunctionLossName;
}

@property (nonatomic, retain) <MLFeatureProvider> *executionState;
@property (nonatomic, retain) NSString *forwardFunctionLossName;
@property (nonatomic, retain) NSDictionary *functionNameToInputLayersNames;
@property (nonatomic, retain) NSDictionary *functionNameToOutputLayersNames;
@property (nonatomic, retain) NSDictionary *functionNameToStateMap;
@property (nonatomic, retain) NSString *trainFunctionLossName;

- (void).cxx_destruct;
- (id)executionState;
- (id)forwardFunctionLossName;
- (id)functionNameToInputLayersNames;
- (id)functionNameToOutputLayersNames;
- (id)functionNameToStateMap;
- (id)initWithExecutionState:(id)arg1 functionNameToStateMap:(id)arg2;
- (void)setExecutionState:(id)arg1;
- (void)setForwardFunctionLossName:(id)arg1;
- (void)setFunctionNameToInputLayersNames:(id)arg1;
- (void)setFunctionNameToOutputLayersNames:(id)arg1;
- (void)setFunctionNameToStateMap:(id)arg1;
- (void)setTrainFunctionLossName:(id)arg1;
- (id)trainFunctionLossName;

@end

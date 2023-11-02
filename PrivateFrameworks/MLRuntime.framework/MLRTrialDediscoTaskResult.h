
@interface MLRTrialDediscoTaskResult : MLRTrialTaskResult {
    NSDictionary * _additionalKeyVariables;
    NSString * _namespaceName;
    NSString * _recipeFactorName;
}

@property (nonatomic, readonly, copy) NSDictionary *additionalKeyVariables;
@property (nonatomic, readonly, copy) NSString *namespaceName;
@property (nonatomic, readonly, copy) NSString *recipeFactorName;

+ (id)baseKeyFromFormat:(id)arg1 variables:(id)arg2;

- (void).cxx_destruct;
- (id)additionalKeyVariables;
- (id)description;
- (id)initWithJSONResult:(id)arg1 identifier:(id)arg2;
- (id)initWithJSONResult:(id)arg1 namespaceName:(id)arg2 factorName:(id)arg3 additionalKeyVariables:(id)arg4;
- (id)namespaceName;
- (id)recipeFactorName;
- (bool)record:(id)arg1 data:(id)arg2 encodingSchema:(id)arg3 metadata:(id)arg4 errorOut:(id*)arg5;
- (bool)submitForTask:(id)arg1 error:(id*)arg2;
- (bool)submitWithTRIClient:(id)arg1 error:(id*)arg2;
- (id)variablesFromTrialClient:(id)arg1;

@end

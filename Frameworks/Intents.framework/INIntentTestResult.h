
@interface INIntentTestResult : NSObject {
    INIntentResponse * _confirmResponse;
    INIntentResponse * _handleResponse;
    bool  _resolvedAllParametersSuccesfully;
    INIntent * _resolvedIntent;
    NSDictionary * _resolvedParameters;
}

@property (nonatomic, readonly) INIntentResponse *confirmResponse;
@property (nonatomic, readonly) INIntentResponse *handleResponse;
@property (nonatomic, readonly) bool resolvedAllParametersSuccesfully;
@property (nonatomic, readonly) INIntent *resolvedIntent;
@property (nonatomic, readonly, copy) NSDictionary *resolvedParameters;

- (void).cxx_destruct;
- (id)confirmResponse;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)dictionaryRepresentation;
- (id)handleResponse;
- (id)initWithResolvedIntent:(id)arg1 resolvedParameters:(id)arg2 resolvedAllParametersSuccesfully:(bool)arg3 confirmResponse:(id)arg4 handleResponse:(id)arg5;
- (bool)resolvedAllParametersSuccesfully;
- (id)resolvedIntent;
- (id)resolvedParameters;

@end

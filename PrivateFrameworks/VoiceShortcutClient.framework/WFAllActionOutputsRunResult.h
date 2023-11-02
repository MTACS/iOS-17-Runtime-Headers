
@interface WFAllActionOutputsRunResult : WFWorkflowRunResult {
    NSData * _archivedOutputs;
    NSDictionary * _cachedOutputs;
}

@property (nonatomic, readonly) NSData *archivedOutputs;
@property (nonatomic, copy) NSDictionary *cachedOutputs;
@property (nonatomic, readonly) bool hasOutputs;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)archivedOutputs;
- (id)cachedOutputs;
- (void)encodeWithCoder:(id)arg1;
- (void)generateOutputsFromRepresentation:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)getActionOutputsWithCompletionHandler:(id /* block */)arg1;
- (bool)hasOutputs;
- (id)initWithActionOutputs:(id)arg1 runError:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)setCachedOutputs:(id)arg1;
- (id)unableToDecodeError;

@end

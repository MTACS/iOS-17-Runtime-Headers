
@interface WFWorkflowOutputRunResult : WFWorkflowRunResult {
    NSData * _archivedOutput;
    WFContentCollection * _cachedOutput;
}

@property (nonatomic, readonly) NSData *archivedOutput;
@property (nonatomic, retain) WFContentCollection *cachedOutput;
@property (nonatomic, readonly) bool hasOutput;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)archivedOutput;
- (id)cachedOutput;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)generateOutputFromRepresentation:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)generateRepresentationFromOutput:(id)arg1;
- (void)getOutputWithCompletionHandler:(id /* block */)arg1;
- (bool)hasOutput;
- (id)initWithCoder:(id)arg1;
- (id)initWithOutput:(id)arg1;
- (id)initWithOutput:(id)arg1 runError:(id)arg2;
- (id)resultBySettingError:(id)arg1;
- (void)setCachedOutput:(id)arg1;
- (id)unableToDecodeError;

@end

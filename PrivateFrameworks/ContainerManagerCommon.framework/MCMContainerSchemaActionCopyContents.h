
@interface MCMContainerSchemaActionCopyContents : MCMContainerSchemaActionBase <MCMContainerSchemaActionHasSourceAndDestination> {
    NSURL * _destURL;
    NSURL * _sourceURL;
}

+ (id)actionIdentifier;

- (void).cxx_destruct;
- (id)description;
- (id)initWithSourcePathArgument:(id)arg1 destinationPathArgument:(id)arg2 context:(id)arg3;
- (bool)performWithError:(id*)arg1;

@end

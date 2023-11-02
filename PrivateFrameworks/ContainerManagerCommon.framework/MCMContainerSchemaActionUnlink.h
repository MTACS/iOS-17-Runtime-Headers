
@interface MCMContainerSchemaActionUnlink : MCMContainerSchemaActionBase <MCMContainerSchemaActionHasSinglePath> {
    NSURL * _url;
}

+ (id)actionIdentifier;

- (void).cxx_destruct;
- (id)description;
- (id)initWithPathArgument:(id)arg1 context:(id)arg2;
- (bool)performWithError:(id*)arg1;

@end


@interface CDMMentionResolverResponseCommand : CDMBaseCommand {
    SIRINLUINTERNALMENTION_RESOLVERMentionResolverResponse * _response;
}

@property (nonatomic, readonly) SIRINLUINTERNALMENTION_RESOLVERMentionResolverResponse *response;

- (void).cxx_destruct;
- (id)initWithMentions:(id)arg1;
- (id)initWithResponse:(id)arg1;
- (id)response;

@end

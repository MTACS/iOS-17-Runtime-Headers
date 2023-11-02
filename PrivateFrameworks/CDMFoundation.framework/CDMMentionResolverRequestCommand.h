
@interface CDMMentionResolverRequestCommand : CDMBaseCommand {
    SIRINLUINTERNALMENTION_RESOLVERMentionResolverRequest * _mrRequest;
}

@property (nonatomic, readonly) SIRINLUINTERNALMENTION_RESOLVERMentionResolverRequest *mrRequest;

- (void).cxx_destruct;
- (id)description;
- (id)initWithMRRequest:(id)arg1;
- (id)mrRequest;

@end

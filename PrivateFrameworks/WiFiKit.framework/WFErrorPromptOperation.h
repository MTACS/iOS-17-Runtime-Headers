
@interface WFErrorPromptOperation : WFUserPromptOperation <WFNetworkView> {
    <WFErrorProviderContext> * _context;
}

@property (nonatomic, retain) <WFErrorProviderContext> *context;
@property (nonatomic, readonly) bool wantsModalPresentation;

+ (id)errorPromptOperationWithContext:(id)arg1;

- (void).cxx_destruct;
- (id)context;
- (void)setContext:(id)arg1;

@end

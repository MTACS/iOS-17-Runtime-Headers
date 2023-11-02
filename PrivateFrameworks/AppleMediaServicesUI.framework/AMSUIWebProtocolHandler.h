
@interface AMSUIWebProtocolHandler : AMSURLProtocolHandler {
    <AMSUIWebProtocolDelegate> * _delegate;
}

@property (nonatomic) <AMSUIWebProtocolDelegate> *delegate;

- (void).cxx_destruct;
- (id)delegate;
- (void)reconfigureNewRequest:(id)arg1 originalTask:(id)arg2 redirect:(bool)arg3 error:(id*)arg4;
- (void)setDelegate:(id)arg1;

@end

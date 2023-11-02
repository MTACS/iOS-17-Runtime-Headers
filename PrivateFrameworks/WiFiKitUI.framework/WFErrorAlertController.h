
@interface WFErrorAlertController : UIAlertController <WFNetworkView> {
    <WFErrorProviderContext> * _context;
}

@property (nonatomic, retain) <WFErrorProviderContext> *context;
@property (nonatomic, readonly) bool wantsModalPresentation;

+ (id)errorAlertControllerWithContext:(id)arg1;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)context;
- (void)setContext:(id)arg1;

@end


@interface _SBUIPopoverExtensionContext : NSExtensionContext {
    <_SBUIPopoverExtensionHostInterface> * _hostService;
}

@property (nonatomic) <_SBUIPopoverExtensionHostInterface> *hostService;

- (void).cxx_destruct;
- (id)hostService;
- (void)requestDismiss;
- (void)setHostService:(id)arg1;

@end


@interface _SBLegacyRemoteAlertContentHostViewController : _UIRemoteViewController <SBSUIRemoteAlertItemContentHostInterface> {
    id  _delegate;
    NSString * _serviceClassName;
    bool  _serviceHasSetPreferredContentSize;
}

@property (nonatomic) id delegate;
@property (nonatomic, copy) NSString *serviceClassName;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)_getPreferredContentSizeWithReplyBlock:(id /* block */)arg1;
- (id)delegate;
- (id)description;
- (id)serviceClassName;
- (void)setDelegate:(id)arg1;
- (void)setServiceClassName:(id)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end

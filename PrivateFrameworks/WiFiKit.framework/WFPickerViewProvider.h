
@interface WFPickerViewProvider : NSObject <WFNetworkView, WFNetworkViewProvider> {
    <WFPickerViewProviderDelegate> * _delegate;
    UIViewController * _rootViewController;
    bool  wantsModalPresentation;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WFPickerViewProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIViewController *rootViewController;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool wantsModalPresentation;

- (void).cxx_destruct;
- (bool)_canHandleCredentialsContext:(id)arg1;
- (id)_promptForEnterpriseJoin:(id)arg1;
- (id)certificateViewControllerWithContext:(id)arg1;
- (id)credentialsViewControllerWithContext:(id)arg1;
- (id)delegate;
- (void)didDismissNetworkViewController:(id)arg1 forContext:(id)arg2;
- (id)initWithRootViewController:(id)arg1;
- (id)networkDetailsViewControllerWithContext:(id)arg1;
- (id)networkErrorViewControllerWithContext:(id)arg1;
- (id)otherNetworkViewControllerWithContext:(id)arg1;
- (void)presentNetworkViewController:(id)arg1 forContext:(id)arg2;
- (id)rootViewController;
- (void)setDelegate:(id)arg1;
- (void)setRootViewController:(id)arg1;
- (bool)wantsModalPresentation;

@end

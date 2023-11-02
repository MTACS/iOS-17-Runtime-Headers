
@interface CKSendMenuPopoverTransitioningDelegate : NSObject <UIViewControllerTransitioningDelegate> {
    CKSendMenuPopoverPresentationConfiguration * _configuration;
    CKSendMenuPopoverPresentationController * _presentationController;
}

@property (nonatomic, retain) CKSendMenuPopoverPresentationConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CKSendMenuPopoverPresentationController *presentationController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)configuration;
- (id)init;
- (id)presentationController;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (void)setConfiguration:(id)arg1;
- (void)setPresentationController:(id)arg1;

@end

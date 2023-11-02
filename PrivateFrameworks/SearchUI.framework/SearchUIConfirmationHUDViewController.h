
@interface SearchUIConfirmationHUDViewController : UIViewController <UIViewControllerTransitioningDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) SearchUIConfirmationHUDView *view;

- (bool)_canShowWhileLocked;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)init;
- (long long)preferredUserInterfaceStyle;
- (void)setTitle:(id)arg1;
- (id)view;
- (void)viewDidAppear:(bool)arg1;

@end

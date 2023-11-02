
@interface _UIPopoverHostManagerPopoverCloseConfiguration : NSObject {
    UIWindow * _parentWindow;
    UIWindow * _popoverWindow;
    <UIViewControllerTransitionCoordinator> * _transitionCoordinator;
}

@property (nonatomic, retain) UIWindow *parentWindow;
@property (nonatomic, retain) UIWindow *popoverWindow;
@property (nonatomic, retain) <UIViewControllerTransitionCoordinator> *transitionCoordinator;

- (void).cxx_destruct;
- (id)parentWindow;
- (id)popoverWindow;
- (void)setParentWindow:(id)arg1;
- (void)setPopoverWindow:(id)arg1;
- (void)setTransitionCoordinator:(id)arg1;
- (id)transitionCoordinator;

@end

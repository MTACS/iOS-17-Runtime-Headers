
@interface SBUISystemApertureElementTransitionContext : NSObject {
    long long  _fromLayoutMode;
    <UIViewControllerTransitionCoordinator> * _transitionCoordinator;
    bool  _userInitiated;
}

@property (nonatomic) long long fromLayoutMode;
@property (nonatomic, retain) <UIViewControllerTransitionCoordinator> *transitionCoordinator;
@property (getter=isUserInitiated, nonatomic) bool userInitiated;

- (void).cxx_destruct;
- (long long)fromLayoutMode;
- (bool)isUserInitiated;
- (void)setFromLayoutMode:(long long)arg1;
- (void)setTransitionCoordinator:(id)arg1;
- (void)setUserInitiated:(bool)arg1;
- (id)transitionCoordinator;

@end

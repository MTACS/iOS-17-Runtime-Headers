
@interface CNUIEditAuthorizationController : NSObject {
    bool  _animated;
    <CNUIEditAuthorizationControllerDelegate> * _delegate;
    UIViewController * _guardedViewController;
    id  _sender;
}

@property (nonatomic) bool animated;
@property (nonatomic) <CNUIEditAuthorizationControllerDelegate> *delegate;
@property (nonatomic) UIViewController *guardedViewController;
@property (nonatomic) id sender;

- (void).cxx_destruct;
- (bool)animated;
- (void)dealloc;
- (id)delegate;
- (void)didAutorize;
- (void)didNotAuthorize;
- (id)guardedViewController;
- (void)lockoutRestrictionsPINControllerDidFinish:(id)arg1;
- (void)presentAuthorizationUI;
- (id)sender;
- (void)setAnimated:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setGuardedViewController:(id)arg1;
- (void)setSender:(id)arg1;
- (void)userDidEnterPasswordCorrectly:(bool)arg1;

@end

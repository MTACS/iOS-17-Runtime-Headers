
@interface SUOverlayAction : NSObject {
    long long  _animationCount;
    UIViewController * _otherViewController;
    SUOverlayTransition * _transition;
    int  _type;
    UIViewController * _viewController;
}

@property (nonatomic) int actionType;
@property (nonatomic) long long animationCount;
@property (nonatomic, retain) UIViewController *otherViewController;
@property (nonatomic, retain) SUOverlayTransition *transition;
@property (nonatomic, retain) UIViewController *viewController;

- (int)actionType;
- (long long)animationCount;
- (void)dealloc;
- (id)otherViewController;
- (void)setActionType:(int)arg1;
- (void)setAnimationCount:(long long)arg1;
- (void)setOtherViewController:(id)arg1;
- (void)setTransition:(id)arg1;
- (void)setViewController:(id)arg1;
- (id)transition;
- (id)viewController;

@end

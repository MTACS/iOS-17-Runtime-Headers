
@interface SBFolderControllerAnimationContext : NSObject {
    UIWindow * _animationWindow;
    UIView * _fallbackIconContainer;
    UIScreen * _screen;
}

@property (nonatomic, readonly) UIWindow *animationWindow;
@property (nonatomic, readonly) UIView *fallbackIconContainer;
@property (nonatomic, readonly) UIScreen *screen;

+ (id)contextWithScreen:(id)arg1 animationWindow:(id)arg2 fallbackIconContainer:(id)arg3;

- (void).cxx_destruct;
- (id)animationWindow;
- (id)fallbackIconContainer;
- (id)initWithScreen:(id)arg1 animationWindow:(id)arg2 fallbackIconContainer:(id)arg3;
- (id)screen;

@end

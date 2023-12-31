
@interface VUIStorePlaybackLaunchShroud : NSObject {
    bool  _hidden;
    UIWindow * _window;
}

@property (getter=isHidden, nonatomic) bool hidden;
@property (nonatomic, retain) UIWindow *window;

+ (id)sharedShroud;

- (void).cxx_destruct;
- (void)_hideWithFadeAnimation:(bool)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)_showWithFadeAnimation:(bool)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)fadeOut;
- (id)init;
- (bool)isHidden;
- (void)setHidden:(bool)arg1;
- (void)setHidden:(bool)arg1 animated:(bool)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)setWindow:(id)arg1;
- (id)window;

@end


@interface SBAssistantWindow : SBSecureWindow <SBAssistantWindowProtocol> {
    bool  _touchesPassThroughToSpringBoard;
}

@property (nonatomic, readonly) SBAssistantRootViewController *assistantRootViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) bool touchesPassThroughToSpringBoard;

+ (id)defaultLayoutStrategy;
+ (bool)sb_autorotates;

- (bool)_canBecomeKeyWindow;
- (id)_hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2 windowServerHitTestWindow:(id)arg3;
- (id)assistantRootViewController;
- (void)dealloc;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)hostedSceneIdentityTokens;
- (id)initWithWindowScene:(id)arg1 role:(id)arg2 debugName:(id)arg3;
- (bool)isOpaque;
- (void)setRootViewController:(id)arg1;
- (void)setTouchesPassThroughToSpringBoard:(bool)arg1;
- (bool)touchesPassThroughToSpringBoard;

@end

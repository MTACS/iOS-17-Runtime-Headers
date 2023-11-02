
@protocol _UIViewServiceTextEffectsOperator_RemoteViewControllerInterface <_UIViewServiceDeputy_UIViewServiceInterface, _UIViewServiceUIBehaviorInterface>

@required

- (void)__createHostedTextEffectsWithReplyHandler:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, _UIHostedWindowHostingHandle *, _UIHostedWindowHostingHandle *, _UIHostedWindowHostingHandle *, void*
- (void)__hostDidEnterBackground;
- (void)__hostDidReceiveGestureDirection:(long long)arg1 authenticationMessage:(BKSHIDEventAuthenticationMessage *)arg2;
- (void)__hostViewDidMoveToScreenWithNewHostingHandleReplyHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, _UIHostedWindowHostingHandle *, _UIHostedWindowHostingHandle *, void*
- (void)__hostViewWillAppear:(bool)arg1;
- (void)__hostViewWillDisappear:(bool)arg1;
- (void)__hostWillEnterForeground;
- (void)__setHostAllowedNotifications:(NSArray *)arg1;
- (void)__setHostedViewReference:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)__setHostedViewSize:(struct CGSize { double x1; double x2; })arg1;
- (void)__setNextAutomaticOrderOutDirection:(int)arg1 duration:(double)arg2;
- (void)__setRemoteTextEffectsWindowMatchesLayerWithContextId:(unsigned int)arg1 renderId:(unsigned long long)arg2;
- (void)__setSafeAreaInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)__setWindowOffset:(struct CGPoint { double x1; double x2; })arg1;

@end

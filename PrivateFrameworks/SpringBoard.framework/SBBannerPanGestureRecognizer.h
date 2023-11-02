
@interface SBBannerPanGestureRecognizer : UIPanGestureRecognizer {
    bool  _clientWantsCancelsTouchesInView;
    NSMutableSet * _identifiersForTouchesDisablingTouchCancellation;
    <SBBannerPanGestureSystemDragCancellingDelegate> * _systemDragCancellingDelegate;
    bool  _wantsCancelsTouchesInView;
    SBWindowScene * _windowScene;
}

@property (nonatomic) bool clientWantsCancelsTouchesInView;
@property (nonatomic, readonly) NSMutableSet *identifiersForTouchesDisablingTouchCancellation;
@property (nonatomic) <SBBannerPanGestureSystemDragCancellingDelegate> *systemDragCancellingDelegate;
@property (nonatomic) SBWindowScene *windowScene;

- (void).cxx_destruct;
- (void)_actuallySetCancelsTouchesInView:(bool)arg1;
- (void)_addTouchDisablingTouchCancellation:(id)arg1;
- (void)_removeTouchDisablingTouchCancellation:(id)arg1;
- (void)_removeTouchesDisablingTouchCancellation:(id)arg1;
- (bool)_shouldReceiveTouch:(id)arg1 withEvent:(id)arg2;
- (void)_updateCancelsTouchesInView;
- (bool)clientWantsCancelsTouchesInView;
- (id)identifiersForTouchesDisablingTouchCancellation;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)setCancelsTouchesInView:(bool)arg1;
- (void)setClientWantsCancelsTouchesInView:(bool)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setSystemDragCancellingDelegate:(id)arg1;
- (void)setWindowScene:(id)arg1;
- (id)systemDragCancellingDelegate;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)windowScene;

@end

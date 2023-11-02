
@interface _BNPanGestureServiceProxy : NSObject <BNPanGestureProxyPrivate> {
    id /* block */  _actionHandler;
    BNPanGestureProxyAction * _activePanGestureProxyAction;
    <BNPanGestureProxyDelegate> * _delegate;
}

@property (nonatomic, copy) id /* block */ actionHandler;
@property (getter=_activePanGestureProxyAction, setter=_setActivePanGestureProxyAction:, nonatomic, retain) BNPanGestureProxyAction *activePanGestureProxyAction;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <BNPanGestureProxyDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool didCrossDefaultThreshold;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long state;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_activePanGestureProxyAction;
- (void)_setActivePanGestureProxyAction:(id)arg1;
- (id /* block */)actionHandler;
- (id)delegate;
- (bool)didCrossDefaultThreshold;
- (struct CGPoint { double x1; double x2; })locationInCoordinateSpace:(id)arg1;
- (void)sendAction;
- (void)setActionHandler:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (long long)state;
- (struct CGPoint { double x1; double x2; })translationInCoordinateSpace:(id)arg1;
- (struct CGPoint { double x1; double x2; })velocityInCoordinateSpace:(id)arg1;
- (struct CGPoint { double x1; double x2; })visualTranslationInCoordinateSpace:(id)arg1;

@end

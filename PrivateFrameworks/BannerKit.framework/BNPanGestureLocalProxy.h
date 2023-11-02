
@interface BNPanGestureLocalProxy : NSObject <BNPanGestureProxyPrivate> {
    id /* block */  _actionHandler;
    UIView * _containerView;
    <BNPanGestureProxyDelegate> * _delegate;
    bool  _didCrossDefaultThreshold;
    UIPanGestureRecognizer * _panGesture;
    long long  _state;
}

@property (nonatomic, copy) id /* block */ actionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <BNPanGestureProxyDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool didCrossDefaultThreshold;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long state;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handlePan:(id)arg1;
- (id /* block */)actionHandler;
- (id)delegate;
- (bool)didCrossDefaultThreshold;
- (id)initWithPanGestureRecognizer:(id)arg1 containerView:(id)arg2;
- (struct CGPoint { double x1; double x2; })locationInCoordinateSpace:(id)arg1;
- (void)sendAction;
- (void)setActionHandler:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (long long)state;
- (struct CGPoint { double x1; double x2; })translationInCoordinateSpace:(id)arg1;
- (struct CGPoint { double x1; double x2; })velocityInCoordinateSpace:(id)arg1;
- (struct CGPoint { double x1; double x2; })visualTranslationInCoordinateSpace:(id)arg1;

@end


@interface BNPanGestureProxyAction : BSAction <BNPanGestureProxy> {
    UIWindow * _serviceSideWindow;
}

@property (nonatomic, copy) id /* block */ actionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool didCrossDefaultThreshold;
@property (readonly) unsigned long long hash;
@property (nonatomic) UIWindow *serviceSideWindow;
@property (nonatomic, readonly) long long state;
@property (readonly) Class superclass;

+ (id)_infoFromPanGestureProxy:(id)arg1 window:(id)arg2;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })_convertPointInSceneReferenceSpace:(struct CGPoint { double x1; double x2; })arg1 toCoordinateSpace:(id)arg2;
- (id /* block */)actionHandler;
- (bool)didCrossDefaultThreshold;
- (id)initWithPanGestureProxy:(id)arg1 hostSideWindow:(id)arg2;
- (struct CGPoint { double x1; double x2; })locationInCoordinateSpace:(id)arg1;
- (id)serviceSideWindow;
- (void)setActionHandler:(id /* block */)arg1;
- (void)setServiceSideWindow:(id)arg1;
- (long long)state;
- (struct CGPoint { double x1; double x2; })translationInCoordinateSpace:(id)arg1;
- (struct CGPoint { double x1; double x2; })velocityInCoordinateSpace:(id)arg1;
- (struct CGPoint { double x1; double x2; })visualTranslationInCoordinateSpace:(id)arg1;

@end

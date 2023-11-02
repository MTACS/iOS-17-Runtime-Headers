
@interface SBWindowDragInteraction : UIDragInteraction {
    NSString * _bundleIdentifier;
    UIGestureRecognizer * _gestureRecognizer;
    NSString * _sceneIdentifier;
    <SBAppPlatterDragSourceViewProviding> * _sourceViewProvider;
}

@property (nonatomic, retain) NSString *bundleIdentifier;
@property (nonatomic, readonly) UIGestureRecognizer *gestureRecognizer;
@property (nonatomic, retain) NSString *sceneIdentifier;
@property (nonatomic) <SBAppPlatterDragSourceViewProviding> *sourceViewProvider;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })_locationInView:(id)arg1;
- (id)bundleIdentifier;
- (id)gestureRecognizer;
- (id)initWithDelegate:(id)arg1 gestureRecognizer:(id)arg2;
- (id)sceneIdentifier;
- (void)setBundleIdentifier:(id)arg1;
- (void)setSceneIdentifier:(id)arg1;
- (void)setSourceViewProvider:(id)arg1;
- (id)sourceViewProvider;

@end

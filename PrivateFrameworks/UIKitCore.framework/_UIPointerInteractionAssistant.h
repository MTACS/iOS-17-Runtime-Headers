
@interface _UIPointerInteractionAssistant : UIPointerInteraction <UIPointerInteractionDelegate, _UIViewSubtreeMonitor> {
    NSMutableDictionary * _assistants;
    UIWindow * _monitoredWindow;
    _UIPointerInteractionAssistantEffectContainerView * _previewContainer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIView *previewContainer;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_monitoredView:(id)arg1 didMoveFromSuperview:(id)arg2 toSuperview:(id)arg3;
- (void)_monitoredView:(id)arg1 willMoveFromSuperview:(id)arg2 toSuperview:(id)arg3;
- (bool)_monitorsView:(id)arg1;
- (id)createPreviewTargetForView:(id)arg1 center:(struct CGPoint { double x1; double x2; })arg2;
- (id)createRegionFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 targetView:(id)arg2 identifier:(id)arg3 selected:(bool)arg4;
- (id)createStyleForButton:(id)arg1 shapeProvider:(id /* block */)arg2;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (void)pointerInteraction:(id)arg1 willEnterRegion:(id)arg2 animator:(id)arg3;
- (void)pointerInteraction:(id)arg1 willExitRegion:(id)arg2 animator:(id)arg3;
- (id)previewContainer;
- (struct CGPoint { double x1; double x2; })request:(id)arg1 locationInView:(id)arg2;
- (void)setAssistedView:(id)arg1 identifier:(id)arg2;
- (void)willMoveToView:(id)arg1;

@end


@interface _UIRemoteView : _UILayerHostView {
    _UIHostedWindowHostingHandle * _hostedWindowHostingHandle;
    id /* block */  _tintColorDidChangeHandler;
}

@property (setter=_setInheritsSecurity:, nonatomic) bool _inheritsSecurity;
@property (nonatomic, retain) _UIHostedWindowHostingHandle *hostedWindowHostingHandle;
@property (nonatomic, copy) id /* block */ tintColorDidChangeHandler;

+ (bool)_requiresWindowTouches;
+ (id)viewWithHostedWindowHostingHandle:(id)arg1;

- (void).cxx_destruct;
- (id)_hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2 windowServerHitTestWindow:(id)arg3;
- (bool)_inheritsSecurity;
- (void)_setInheritsSecurity:(bool)arg1;
- (void)applyTransformUndoingRemoteRootLayerTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)hostedWindowHostingHandle;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 pid:(int)arg2 contextID:(unsigned int)arg3;
- (void)setHostedWindowHostingHandle:(id)arg1;
- (void)setTintColorDidChangeHandler:(id /* block */)arg1;
- (void)tintColorDidChange;
- (id /* block */)tintColorDidChangeHandler;

@end

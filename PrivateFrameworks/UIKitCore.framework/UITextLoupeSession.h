
@interface UITextLoupeSession : NSObject {
    UIWindow * _containerWindow;
    UITextGestureTuning * _gestureTuning;
    UIView * _interactionView;
    bool  _invalidated;
    bool  _isHidingStatusBar;
    UIView<_UITextLoupeView> * _loupeView;
}

@property (nonatomic) UIWindow *containerWindow;
@property (nonatomic, retain) UITextGestureTuning *gestureTuning;
@property (nonatomic) UIView *interactionView;
@property (nonatomic, retain) UIView<_UITextLoupeView> *loupeView;

+ (id)_beginLoupeSessionAtPoint:(struct CGPoint { double x1; double x2; })arg1 fromSelectionWidgetView:(id)arg2 inView:(id)arg3 orientation:(unsigned long long)arg4;
+ (id)_makeLoupeViewForSourceView:(id)arg1 selectionWidget:(id)arg2 orientation:(unsigned long long)arg3;
+ (id)beginLoupeSessionAtPoint:(struct CGPoint { double x1; double x2; })arg1 fromSelectionWidgetView:(id)arg2 inView:(id)arg3;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })_locationInContainerCoordinateSpace:(struct CGPoint { double x1; double x2; })arg1;
- (void)_updateStatusBarVisibility;
- (id)containerWindow;
- (void)dealloc;
- (id)gestureTuning;
- (id)interactionView;
- (void)invalidate;
- (id)loupeView;
- (void)moveToPoint:(struct CGPoint { double x1; double x2; })arg1 withCaretRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 trackingCaret:(bool)arg3;
- (void)setContainerWindow:(id)arg1;
- (void)setGestureTuning:(id)arg1;
- (void)setInteractionView:(id)arg1;
- (void)setLoupeView:(id)arg1;

@end


@interface SXTextTangierCanvasViewController : TSWPiOSCanvasViewController {
    bool  _selectionEnabled;
}

@property (nonatomic) bool selectionEnabled;

- (id)actionForHyperlink:(id)arg1 inRep:(id)arg2 gesture:(id)arg3;
- (bool)canBecomeFirstResponder;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)dealloc;
- (void)interactionDidEnd:(id)arg1;
- (bool)interactionShouldBegin:(id)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)loadView;
- (long long)overrideUserInterfaceStyle;
- (void)selectAll:(id)arg1;
- (bool)selectionEnabled;
- (void)setSelectionEnabled:(bool)arg1;
- (id)targetForAction:(SEL)arg1 withSender:(id)arg2;

@end

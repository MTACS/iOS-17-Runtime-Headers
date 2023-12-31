
@interface TIACanvasViewController : TSWPiOSCanvasViewController

@property UIGestureRecognizer *hyperlinkGestureRecognizer;
@property (nonatomic, readonly) TSAInteractiveCanvasController *interactiveCanvasController;

- (id)commonGestureRecognizers;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)hyperlinkGestureRecognizer;
- (id)interactiveCanvasController;
- (id)p_LocalGestureRecognizers;
- (void)setHyperlinkGestureRecognizer:(id)arg1;
- (void)setUpGestureRecognizers;
- (bool)wantsHyperlinkGestureRecognizer;

@end


@protocol UITextLinkInteraction

@required

- (void)cancelInteractionWithLink;
- (bool)isInteractingWithLink;
- (bool)mightHaveLinks;
- (void)startInteractionWithLinkAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)startLongInteractionWithLinkAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)tapLinkAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)updateInteractionWithLinkAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)validateInteractionWithLinkAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)willInteractWithLinkAtPoint:(struct CGPoint { double x1; double x2; })arg1;

@optional

- (void)_requestTextItemConstrainedToLineAtPoint:(void *)arg1 resultHandler:(void *)arg2; // needs 2 arg types, found 8: struct CGPoint { double x1; double x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }, bool, void*
- (bool)interactionDidStartWithLinkAtPoint:(struct CGPoint { double x1; double x2; })arg1;

@end

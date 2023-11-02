
@interface MFMailComposeRecipientTextView : CNComposeRecipientTextView <PKScribbleInteractionDelegate, PKScribbleInteractionElementSource, UIPointerInteractionDelegate> {
    MFComposeDisplayMetrics * _displayMetrics;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MFMailComposeRecipientTextViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) MFComposeDisplayMetrics *displayMetrics;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *people;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_displayMetricsDidChange;
- (void)_scribbleInteraction:(id)arg1 focusElement:(id)arg2 initialFocusSelectionReferencePoint:(struct CGPoint { double x1; double x2; })arg3 completion:(id /* block */)arg4;
- (bool)_scribbleInteraction:(id)arg1 focusWillTransformElement:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_scribbleInteraction:(id)arg1 frameForElement:(id)arg2;
- (void)_scribbleInteraction:(id)arg1 requestElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 completion:(id /* block */)arg3;
- (bool)_scribbleInteraction:(id)arg1 shouldBeginAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)_textInputDidChange:(id)arg1;
- (void)addRecipient:(id)arg1;
- (void)appendText:(id)arg1;
- (double)beamHeight;
- (void)dealloc;
- (id)displayMetrics;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutMarginsDidChange;
- (id)nextResponder;
- (id)people;
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })pointerRectForLineContainingGlyphIndex:(unsigned long long)arg1;
- (void)setDisplayMetrics:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end


@protocol TSWPHyperlinkHostRepProtocol <NSObject>

@required

- (TSDRep *)hyperlinkContainerRep;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })naturalBoundsRectForHyperlinkField:(TSWPHyperlinkField *)arg1;
- (void)setHighlightedHyperlinkField:(TSWPHyperlinkField *)arg1;
- (TSWPSmartField *)smartFieldAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)willDisplayEditHyperlinkUIForHyperlinkField:(TSWPHyperlinkField *)arg1 beginEditing:(bool)arg2;

@optional

- (void)didDismissEditHyperlinkUIForHyperlinkField:(TSWPHyperlinkField *)arg1;
- (TSWPHyperlinkField *)hyperlinkFieldForEditingHyperlinkField:(TSWPHyperlinkField *)arg1;
- (bool)shouldDismissHyperlinkUIOnApplicationEnterBackground;
- (bool)shouldUseHyperlinkHighlight;

@end


@protocol SMUTVFocusableTextView

@required

- (bool)alwaysShowBackground;
- (NSAttributedString *)descriptionText;
- (long long)descriptionTextAlignment;
- (UIColor *)descriptionTextColor;
- (UIColor *)descriptionTextHighlightColor;
- (bool)disableFocus;
- (unsigned long long)focusSizeIncrease;
- (UIColor *)highlightBackgroundColor;
- (bool)isAlwaysFocusable;
- (bool)isTextTruncating;
- (double)maximumLineWidth;
- (unsigned long long)maximumNumberOfLines;
- (double)moreHighlightPadding;
- (bool)moreLabelOnNewLine;
- (NSString *)moreLabelText;
- (UIColor *)moreLabelTextColor;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })padding;
- (id /* block */)playHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, UITapGestureRecognizer *, void*, id, SEL
- (id /* block */)selectionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, UITapGestureRecognizer *, void*, id, SEL
- (void)setAlwaysFocusable:(bool)arg1;
- (void)setAlwaysShowBackground:(bool)arg1;
- (void)setDescriptionText:(NSAttributedString *)arg1;
- (void)setDescriptionTextAlignment:(long long)arg1;
- (void)setDescriptionTextColor:(UIColor *)arg1;
- (void)setDescriptionTextHighlightColor:(UIColor *)arg1;
- (void)setDisableFocus:(bool)arg1;
- (void)setFocusSizeIncrease:(unsigned long long)arg1;
- (void)setHighlightBackgroundColor:(UIColor *)arg1;
- (void)setMaximumLineWidth:(double)arg1;
- (void)setMaximumNumberOfLines:(unsigned long long)arg1;
- (void)setMoreHighlightPadding:(double)arg1;
- (void)setMoreLabelOnNewLine:(bool)arg1;
- (void)setMoreLabelText:(NSString *)arg1;
- (void)setMoreLabelTextColor:(UIColor *)arg1;
- (void)setPadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setPlayHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UITapGestureRecognizer *, void*
- (void)setSelectionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UITapGestureRecognizer *, void*
- (void)setTrackHorizontal:(bool)arg1;
- (bool)trackHorizontal;

@end


@interface WGExplanatoryView : UIView {
    UIImageView * _glyphView;
    UILabel * _label;
    UITapGestureRecognizer * _tapGesture;
    MTVisualStylingProvider * _visualStylingProvider;
}

- (void).cxx_destruct;
- (void)_configureExplanationLabelWithExplanation:(id)arg1;
- (void)_configureGlyphViewWithGlyph:(id)arg1;
- (void)_invalidateVisualStyling;
- (void)_updateVisualStylingIfNecessary;
- (void)addTarget:(id)arg1 action:(SEL)arg2;
- (id)initWithGlyph:(id)arg1 andExplanation:(id)arg2;
- (void)layoutSubviews;
- (void)willMoveToSuperview:(id)arg1;

@end

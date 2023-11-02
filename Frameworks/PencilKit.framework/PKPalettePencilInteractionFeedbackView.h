
@interface PKPalettePencilInteractionFeedbackView : UIView {
    UIView * _backgroundView;
    UIView * _clippingView;
    PKPaletteToolPreview * _toolPreview;
}

@property (nonatomic, retain) UIView *backgroundView;
@property (nonatomic, retain) UIView *clippingView;
@property (nonatomic, retain) PKPaletteToolPreview *toolPreview;

- (void).cxx_destruct;
- (void)_setCornerRadius:(double)arg1;
- (id)backgroundView;
- (id)clippingView;
- (id)init;
- (void)layoutSubviews;
- (void)setBackgroundView:(id)arg1;
- (void)setClippingView:(id)arg1;
- (void)setToolPreview:(id)arg1;
- (void)showPreviewForTool:(id)arg1 scalingFactor:(double)arg2 animated:(bool)arg3;
- (id)toolPreview;

@end

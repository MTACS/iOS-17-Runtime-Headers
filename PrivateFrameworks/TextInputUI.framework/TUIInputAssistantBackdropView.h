
@interface TUIInputAssistantBackdropView : UIView {
    UIVisualEffectView * _contentView;
}

@property double contentCornerRadius;

- (void).cxx_destruct;
- (void)_setRenderConfig:(id)arg1;
- (double)contentCornerRadius;
- (id)effectsFor:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setContentCornerRadius:(double)arg1;
- (void)updateVisualStyle:(id)arg1;

@end

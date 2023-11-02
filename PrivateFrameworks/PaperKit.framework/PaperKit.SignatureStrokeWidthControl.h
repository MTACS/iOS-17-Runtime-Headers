
@interface PaperKit.SignatureStrokeWidthControl : UIControl <PaperKit.SignatureStrokeWidthWidget> {
    void $__lazy_storage_$_strokeWidthPreview;
    void strokePreviewLargeWidth;
    void strokePreviewShortWidth;
    void unit;
    void valueLabel;
    void width;
}

@property (nonatomic) bool enabled;
@property (nonatomic) bool highlighted;
@property (nonatomic) bool selected;
@property (nonatomic, readonly) NSString *unit;
@property (nonatomic, readonly) long long width;

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isEnabled;
- (bool)isHighlighted;
- (bool)isSelected;
- (void)layoutSubviews;
- (void)setEnabled:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setSelected:(bool)arg1;
- (id)unit;
- (long long)width;

@end


@interface PKPaletteReturnKeyButtonContentView : UIView {
    UIImageView * _imageView;
    TUICandidateLabel * _label;
    NSLayoutConstraint * _labelHeightConstraint;
    NSLayoutConstraint * _labelWidthConstraint;
    long long  _layoutOrientation;
    UIStackView * _stackView;
    NSString * _text;
    bool  _useCompactLayout;
}

@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic) long long layoutOrientation;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, retain) UIColor *textColor;
@property (nonatomic) bool useCompactLayout;

- (void).cxx_destruct;
- (void)_updateUI;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)layoutOrientation;
- (void)setImageView:(id)arg1;
- (void)setLayoutOrientation:(long long)arg1;
- (void)setText:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)setUseCompactLayout:(bool)arg1;
- (id)text;
- (id)textColor;
- (bool)useCompactLayout;

@end

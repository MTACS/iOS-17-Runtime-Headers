
@interface CAMSemanticStyleDetailView : UIView {
    NSNumberFormatter * __integerFormatter;
    UILabel * __styleDescriptionLabel;
    UILabel * __styleTitleLabel;
    UILabel * __toneTitleLabel;
    UILabel * __toneValueLabel;
    UILabel * __warmthTitleLabel;
    UILabel * __warmthValueLabel;
    CAMSemanticStyle * _semanticStyle;
}

@property (nonatomic, readonly) NSNumberFormatter *_integerFormatter;
@property (nonatomic, readonly) UILabel *_styleDescriptionLabel;
@property (nonatomic, readonly) UILabel *_styleTitleLabel;
@property (nonatomic, readonly) UILabel *_toneTitleLabel;
@property (nonatomic, readonly) UILabel *_toneValueLabel;
@property (nonatomic, readonly) UILabel *_warmthTitleLabel;
@property (nonatomic, readonly) UILabel *_warmthValueLabel;
@property (nonatomic, retain) CAMSemanticStyle *semanticStyle;

- (void).cxx_destruct;
- (id)_descriptionForSemanticStylePreset:(long long)arg1;
- (id)_integerFormatter;
- (id)_styleDescriptionLabel;
- (id)_styleTitleLabel;
- (id)_toneTitleLabel;
- (id)_toneValueLabel;
- (void)_updateTextForCurrentStyle;
- (id)_warmthTitleLabel;
- (id)_warmthValueLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)semanticStyle;
- (void)setSemanticStyle:(id)arg1;

@end

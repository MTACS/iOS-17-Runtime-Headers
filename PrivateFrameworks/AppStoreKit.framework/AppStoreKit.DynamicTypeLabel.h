
@interface AppStoreKit.DynamicTypeLabel : UILabel {
    void contentSizeCategoryMapping;
    void customTextStyle;
    void directionalTextAlignment;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  fontUseCase;
    void fontUseCaseContentSizeCategory;
    void isPlainText;
    void wantsFastBaselineMeasurement;
}

@property (nonatomic, retain) NSAttributedString *attributedText;
@property (nonatomic, retain) UIFont *font;
@property (nonatomic) long long lineSpacing;
@property (nonatomic, copy) NSString *text;
@property (nonatomic) long long textAlignment;

- (void).cxx_destruct;
- (id)attributedText;
- (id)font;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)lineSpacing;
- (void)setAttributedText:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setLineSpacing:(long long)arg1;
- (void)setText:(id)arg1;
- (void)setTextAlignment:(long long)arg1;
- (id)text;
- (long long)textAlignment;

@end

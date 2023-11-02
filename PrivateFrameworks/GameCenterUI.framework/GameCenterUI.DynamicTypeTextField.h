
@interface GameCenterUI.DynamicTypeTextField : UITextField {
    void directionalTextAlignment;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  fontUseCase;
    void fontUseCaseContentSizeCategory;
}

@property (nonatomic, retain) UIFont *font;
@property (nonatomic, readonly) bool jet_isTextExtraTall;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } jet_languageAwareOutsets;
@property (nonatomic, readonly) long long jet_textLength;
@property (nonatomic) long long textAlignment;

- (void).cxx_destruct;
- (id)font;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)jet_isTextExtraTall;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })jet_languageAwareOutsets;
- (long long)jet_textLength;
- (struct JUMeasurements { double x1; double x2; double x3; double x4; })measurementsWithFitting:(struct CGSize { double x1; double x2; })arg1 in:(id)arg2;
- (void)setFont:(id)arg1;
- (void)setTextAlignment:(long long)arg1;
- (long long)textAlignment;
- (void)traitCollectionDidChange:(id)arg1;

@end

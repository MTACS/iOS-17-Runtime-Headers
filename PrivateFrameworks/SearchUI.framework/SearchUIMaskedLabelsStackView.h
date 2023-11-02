
@interface SearchUIMaskedLabelsStackView : NUIContainerStackView <NUIContainerViewDelegate> {
    TLKLabel * _bridgeLabel;
    UIColor * _completionFillColor;
    TLKLabel * _completionLabel;
    double  _completionStringOffset;
    TLKLabel * _extensionLabel;
    UIView * _extensionLabelBackgroundView;
    UIView * _fillerView;
    UIFont * _font;
    UIView * _gradientView;
    NSString * _typedString;
}

@property (nonatomic, readonly) TLKLabel *bridgeLabel;
@property (nonatomic, retain) UIColor *completionFillColor;
@property (nonatomic, readonly) TLKLabel *completionLabel;
@property double completionStringOffset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) TLKLabel *extensionLabel;
@property (retain) UIView *extensionLabelBackgroundView;
@property (retain) UIView *fillerView;
@property (nonatomic, retain) UIFont *font;
@property (retain) UIView *gradientView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *typedString;

+ (Class)layerClass;

- (void).cxx_destruct;
- (id)bridgeLabel;
- (id)completionFillColor;
- (id)completionLabel;
- (double)completionStringOffset;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })containerView:(id)arg1 layoutFrameForArrangedSubview:(id)arg2 withProposedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)containerViewDidLayoutArrangedSubviews:(id)arg1;
- (id)extensionLabel;
- (id)extensionLabelBackgroundView;
- (id)fillerView;
- (id)font;
- (id)gradientView;
- (id)init;
- (void)layoutMasksAndLabels;
- (void)resetStringOffset;
- (void)setCompletionFillColor:(id)arg1;
- (void)setCompletionStringOffset:(double)arg1;
- (void)setExtensionLabelBackgroundView:(id)arg1;
- (void)setFillerView:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setGradientView:(id)arg1;
- (void)setTypedString:(id)arg1;
- (id)typedString;

@end

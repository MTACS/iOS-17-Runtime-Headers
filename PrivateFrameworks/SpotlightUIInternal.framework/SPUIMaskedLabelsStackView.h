
@interface SPUIMaskedLabelsStackView : NUIContainerStackView <NUIContainerViewDelegate> {
    UILabel * _bridgeLabel;
    UILabel * _completionLabel;
    double  _completionStringOffset;
    UILabel * _extensionLabel;
    TLKProminenceView * _extensionLabelProminenceView;
    UIView * _fillerView;
    UIFont * _font;
    UIView * _gradientView;
    NSString * _typedString;
}

@property (nonatomic, readonly) UILabel *bridgeLabel;
@property (nonatomic, readonly) UILabel *completionLabel;
@property double completionStringOffset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UILabel *extensionLabel;
@property (retain) TLKProminenceView *extensionLabelProminenceView;
@property (retain) UIView *fillerView;
@property (nonatomic, retain) UIFont *font;
@property (retain) UIView *gradientView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *typedString;

+ (Class)layerClass;

- (void).cxx_destruct;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })additionalPadding;
- (id)bridgeLabel;
- (id)completionLabel;
- (double)completionStringOffset;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })containerView:(id)arg1 layoutFrameForArrangedSubview:(id)arg2 withProposedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)containerViewDidLayoutArrangedSubviews:(id)arg1;
- (id)extensionLabel;
- (id)extensionLabelProminenceView;
- (id)fillerView;
- (id)font;
- (id)gradientView;
- (id)init;
- (bool)isRTL;
- (void)resetStringOffset;
- (void)setCompletionStringOffset:(double)arg1;
- (void)setExtensionLabelProminenceView:(id)arg1;
- (void)setFillerView:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setGradientView:(id)arg1;
- (void)setTypedString:(id)arg1;
- (id)typedString;

@end

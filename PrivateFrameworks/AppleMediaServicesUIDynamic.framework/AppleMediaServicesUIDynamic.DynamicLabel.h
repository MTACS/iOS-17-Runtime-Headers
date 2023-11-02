
@interface AppleMediaServicesUIDynamic.DynamicLabel : AMSUICommonView <UITextViewDelegate> {
    void defaultAlignment;
    void defaultColor;
    void defaultCustomTextStyle;
    void didShrinkForLineCount;
    void dynamicText;
    void label;
    void objectGraph;
    void shrinkToFit;
}

@property (nonatomic, readonly) bool hasContent;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } intrinsicContentSize;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } jet_focusedFrame;
@property (nonatomic, copy) NSString *maximumContentSizeCategory;

- (void).cxx_destruct;
- (bool)hasContent;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)invalidateIntrinsicContentSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })jet_focusedFrame;
- (id)maximumContentSizeCategory;
- (struct JUMeasurements { double x1; double x2; double x3; double x4; })measurementsWithFitting:(struct CGSize { double x1; double x2; })arg1 in:(id)arg2;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setMaximumContentSizeCategory:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 interaction:(long long)arg4;
- (void)textViewDidChangeSelection:(id)arg1;
- (bool)textViewShouldBeginEditing:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end

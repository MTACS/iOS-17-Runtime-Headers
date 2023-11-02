
@interface GameCenterUI.SectionFooterView : GameCenterUI.BaseCollectionReusableView {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  attachment;
    void attachmentTapAction;
    void attachmentView;
    void footerLabel;
    void labelTapAction;
    void separator;
    void style;
    void tapGestureRecognizer;
}

@property (nonatomic, readonly) bool accessibilityAttachmentHasAction;
@property (nonatomic, readonly) _TtC12GameCenterUI16DynamicTypeLabel *accessibilityFooterLabel;
@property (nonatomic, readonly) bool accessibilityLabelHasAction;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } layoutMargins;

- (void).cxx_destruct;
- (bool)accessibilityAttachmentHasAction;
- (id)accessibilityFooterLabel;
- (bool)accessibilityLabelHasAction;
- (void)handleTapWithGestureRecognizer:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })layoutMargins;
- (void)layoutSubviews;
- (struct JUMeasurements { double x1; double x2; double x3; double x4; })measurementsWithFitting:(struct CGSize { double x1; double x2; })arg1 in:(id)arg2;
- (void)prepareForReuse;
- (void)setLayoutMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;

@end

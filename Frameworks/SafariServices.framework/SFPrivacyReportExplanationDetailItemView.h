
@interface SFPrivacyReportExplanationDetailItemView : UIView <SFPrivacyReportGridItem, UITextViewDelegate> {
    UITextView * _bodyTextView;
    <SFPrivacyReportGridItemDelegate> * _delegate;
    unsigned long long  _gridPosition;
    UIView * _hairline;
    NSLayoutConstraint * _hairlineTopConstraint;
    double  _hairlineTopSpacing;
    UILabel * _titleLabel;
    double  _titleLabelTopSpacing;
    NSLayoutConstraint * _titleTopConstraint;
    bool  _usesInsetStyle;
}

@property (nonatomic, readonly) UITextView *bodyTextView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SFPrivacyReportGridItemDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long gridPosition;
@property (nonatomic) double hairlineTopSpacing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UILabel *titleLabel;
@property (nonatomic) double titleLabelTopSpacing;
@property (nonatomic) bool usesInsetStyle;

- (void).cxx_destruct;
- (void)_updateTopConstraints;
- (void)_updateTopSpacing;
- (id)bodyTextView;
- (id)delegate;
- (unsigned long long)gridPosition;
- (double)hairlineTopSpacing;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setGridPosition:(unsigned long long)arg1;
- (void)setHairlineTopSpacing:(double)arg1;
- (void)setTitleLabelTopSpacing:(double)arg1;
- (void)setUsesInsetStyle:(bool)arg1;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 interaction:(long long)arg4;
- (id)titleLabel;
- (double)titleLabelTopSpacing;
- (void)traitCollectionDidChange:(id)arg1;
- (bool)usesInsetStyle;

@end

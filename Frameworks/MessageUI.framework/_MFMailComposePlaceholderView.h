
@interface _MFMailComposePlaceholderView : UIScrollView {
    MFMailComposeHeaderView * _multiView;
    MFComposeSubjectView * _subjectView;
    MFMailComposeHeaderView * _toField;
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setSubject:(id)arg1;

@end

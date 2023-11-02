
@interface SFPrivacyReportExplanationDetailView : SFPrivacyReportGridView {
    bool  _usesInsetStyle;
}

@property (nonatomic) bool usesInsetStyle;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)interItemSpacing;
- (void)setUsesInsetStyle:(bool)arg1;
- (bool)usesInsetStyle;

@end

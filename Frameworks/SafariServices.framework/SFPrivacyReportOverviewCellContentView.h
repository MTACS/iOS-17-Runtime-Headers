
@interface SFPrivacyReportOverviewCellContentView : SFPrivacyReportOverviewCellView {
    UILabel * _subtitleLabel;
    UILabel * _titleLabel;
}

@property (nonatomic, readonly) UILabel *subtitleLabel;
@property (nonatomic, readonly) UILabel *titleLabel;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)subtitleLabel;
- (id)titleLabel;

@end

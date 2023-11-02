
@interface HKElectrocardiogramBulletedTextView : UIView {
    NSMutableArray * _bodyFirstBaselineConstraints;
    UILabel * _detailLabel;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) NSMutableArray *bodyFirstBaselineConstraints;
@property (nonatomic, retain) UILabel *detailLabel;
@property (nonatomic, readonly) NSString *detailText;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, retain) NSString *titleText;

- (void).cxx_destruct;
- (void)_setUpUI;
- (void)_setupConstraints;
- (void)_updateLeadingDetailAttributedTextSize;
- (id)bodyFirstBaselineConstraints;
- (id)detailLabel;
- (id)detailText;
- (id)init;
- (void)setBodyFirstBaselineConstraints:(id)arg1;
- (void)setDetailLabel:(id)arg1;
- (void)setDetailTextWithBullets:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setTitleText:(id)arg1;
- (id)titleLabel;
- (id)titleText;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConstraints;

@end

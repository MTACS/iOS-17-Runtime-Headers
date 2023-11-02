
@interface WDMedicalRecordSpacerTextCell : UITableViewCell {
    NSString * _title;
    UILabel * _titleLabel;
    NSLayoutConstraint * _topConstraint;
    bool  _useTallTopPadding;
}

@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, retain) NSLayoutConstraint *topConstraint;
@property (nonatomic) bool useTallTopPadding;

+ (id)defaultReuseIdentifier;

- (void).cxx_destruct;
- (void)_setupSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setTitle:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setTopConstraint:(id)arg1;
- (void)setUseTallTopPadding:(bool)arg1;
- (id)title;
- (id)titleLabel;
- (id)topConstraint;
- (bool)useTallTopPadding;

@end

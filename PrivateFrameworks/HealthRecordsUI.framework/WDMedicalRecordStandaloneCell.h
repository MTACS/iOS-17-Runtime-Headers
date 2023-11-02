
@interface WDMedicalRecordStandaloneCell : WDMedicalRecordGroupableCell {
    UIView * _chevronView;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) UIView *chevronView;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) UILabel *titleLabel;

+ (id)_titleLabelFont;
+ (double)_titleLabelLastBaselineToBottom;
+ (double)_titleLabelTopToFirstBaseline;

- (void).cxx_destruct;
- (id)chevronView;
- (void)setChevronView:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setupSubviews;
- (id)title;
- (id)titleLabel;

@end

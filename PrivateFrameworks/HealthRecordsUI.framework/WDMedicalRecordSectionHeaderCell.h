
@interface WDMedicalRecordSectionHeaderCell : WDMedicalRecordGroupableCell {
    UILabel * _titleLabel;
}

@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) UILabel *titleLabel;

+ (id)_titleLabelFont;
+ (double)_titleLabelLastBaselineToBottom;
+ (double)_titleLabelTopToFirstBaseline;

- (void).cxx_destruct;
- (void)setTitle:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setupSubviews;
- (id)title;
- (id)titleLabel;

@end


@interface WDMedicalRecordDetailSubtitleCell : WDMedicalRecordGroupableCell {
    UILabel * _subtitleLabel;
    UILabel * _titleLabel;
}

@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, retain) UILabel *subtitleLabel;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) UILabel *titleLabel;

+ (id)_subtitleLabelFont;
+ (double)_subtitleLabelLastBaselineToBottom;
+ (double)_subtitleLabelTopToFirstBaseline;
+ (id)_titleLabelFont;
+ (double)_titleLabelTopToFirstBaseline;

- (void).cxx_destruct;
- (void)setSubtitle:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setupSubviews;
- (id)subtitle;
- (id)subtitleLabel;
- (id)title;
- (id)titleLabel;

@end

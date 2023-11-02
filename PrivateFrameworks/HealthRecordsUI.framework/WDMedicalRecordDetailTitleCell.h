
@interface WDMedicalRecordDetailTitleCell : WDMedicalRecordGroupableCell {
    UILabel * _dateSubtitleLabel;
    UILabel * _titleLabel;
}

@property (nonatomic, copy) NSString *dateSubtitle;
@property (nonatomic, retain) UILabel *dateSubtitleLabel;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) UILabel *titleLabel;

+ (id)_subtitleLabelFont;
+ (double)_subtitleLabelLastBaselineToBottom;
+ (double)_subtitleLabelTopToFirstBaseline;
+ (id)_titleLabelFont;
+ (double)_titleLabelTopToFirstBaseline;

- (void).cxx_destruct;
- (id)dateSubtitle;
- (id)dateSubtitleLabel;
- (void)setDateSubtitle:(id)arg1;
- (void)setDateSubtitleLabel:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setupSubviews;
- (id)title;
- (id)titleLabel;

@end

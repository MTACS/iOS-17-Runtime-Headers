
@interface WDMedicalRecordTimelineProviderTitleCell : WDMedicalRecordGroupableCell {
    UILabel * _titleLabel;
}

@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (void)setTitle:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setupSubviews;
- (id)title;
- (id)titleLabel;

@end

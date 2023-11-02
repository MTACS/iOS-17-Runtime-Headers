
@interface WDMedicalRecordTimelineAppendixCell : WDMedicalRecordGroupableCell {
    UIView * _chevronView;
    NSString * _title;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) UIView *chevronView;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (id)_titleLabelFont;
- (id)chevronView;
- (void)setChevronView:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setupSubviews;
- (void)tintColorDidChange;
- (id)title;
- (id)titleLabel;

@end

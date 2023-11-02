
@interface DMCEnrollmentTableViewPromotionCell : UITableViewCell <DMCEnrollmentTableViewCellDataSource> {
    UIImage * _icon;
    NSString * _subtitle;
    NSString * _title;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *icon;
@property (nonatomic, copy) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (void)_setupContentConfigurationWithIcon:(id)arg1 title:(id)arg2 subtitle:(id)arg3;
- (id)_subtitleFont;
- (id)_titleFont;
- (id)cell;
- (double)cellHeight;
- (double)estimatedCellHeight;
- (double)gapToNextSection;
- (id)icon;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 icon:(id)arg3;
- (void)layoutSubviews;
- (void)setIcon:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (id)title;

@end

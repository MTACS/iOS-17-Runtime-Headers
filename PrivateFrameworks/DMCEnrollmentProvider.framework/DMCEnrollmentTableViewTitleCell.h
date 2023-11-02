
@interface DMCEnrollmentTableViewTitleCell : UITableViewCell <DMCEnrollmentTableViewCellDataSource> {
    UILabel * _label;
    NSString * _title;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UILabel *label;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)_fontForTitle;
- (id)cell;
- (double)cellHeight;
- (double)estimatedCellHeight;
- (id)initWithTitle:(id)arg1;
- (id)label;
- (void)layoutSubviews;
- (void)setLabel:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end

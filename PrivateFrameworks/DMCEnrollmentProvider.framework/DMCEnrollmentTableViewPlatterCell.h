
@interface DMCEnrollmentTableViewPlatterCell : UITableViewCell <DMCEnrollmentTableViewCellDataSource> {
    NSArray * _cellData;
    NSNumber * _customHorizontalMargin;
    UITableView * _parentTableView;
    double  _previousWidth;
    UIView * _shadowView;
    DMCEnrollmentTemplateTableViewController * _tableViewController;
}

@property (nonatomic, retain) NSArray *cellData;
@property (nonatomic, retain) NSNumber *customHorizontalMargin;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property UITableView *parentTableView;
@property (nonatomic) double previousWidth;
@property (nonatomic, retain) UIView *shadowView;
@property (readonly) Class superclass;
@property (nonatomic, retain) DMCEnrollmentTemplateTableViewController *tableViewController;

- (void).cxx_destruct;
- (id)cell;
- (id)cellData;
- (double)cellHeight;
- (id)customHorizontalMargin;
- (double)estimatedCellHeight;
- (id)initWithCellData:(id)arg1 parentTableView:(id)arg2 useShadow:(bool)arg3;
- (void)layoutSubviews;
- (id)parentTableView;
- (double)previousWidth;
- (void)setCellData:(id)arg1;
- (void)setCustomHorizontalMargin:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setParentTableView:(id)arg1;
- (void)setPreviousWidth:(double)arg1;
- (void)setShadowView:(id)arg1;
- (void)setTableViewController:(id)arg1;
- (id)shadowView;
- (id)tableViewController;

@end


@interface STWeeklyReportAppUsageView : UIView {
    UIStackView * _appImageStackView;
    NSMutableDictionary * _dimensionByUsageItem;
    STUsageReport * _report;
    UILabel * _titleLabel;
    NSMutableArray * _topEightImageItems;
}

@property (nonatomic, retain) UIStackView *appImageStackView;
@property (nonatomic, retain) NSMutableDictionary *dimensionByUsageItem;
@property (nonatomic, retain) STUsageReport *report;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, retain) NSMutableArray *topEightImageItems;

- (void).cxx_destruct;
- (id)_appImageSubviewWithImage:(id)arg1 dimension:(double)arg2;
- (void)_didFetchIcon:(id)arg1;
- (id)appImageStackView;
- (id)dimensionByUsageItem;
- (id)initWithUsageReport:(id)arg1 useVibrancy:(bool)arg2;
- (id)report;
- (void)setAppImageStackView:(id)arg1;
- (void)setDimensionByUsageItem:(id)arg1;
- (void)setReport:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setTopEightImageItems:(id)arg1;
- (id)titleLabel;
- (id)topEightImageItems;

@end

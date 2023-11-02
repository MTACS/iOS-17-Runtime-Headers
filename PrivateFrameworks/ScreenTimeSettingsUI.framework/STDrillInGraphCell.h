
@interface STDrillInGraphCell : STTableCell {
    STUsageGraphViewController * _usageGraphViewController;
    STUsageItem * _usageItem;
    UILabel * _usageLabel;
}

@property (nonatomic, readonly) STUsageGraphViewController *usageGraphViewController;
@property (nonatomic, readonly) STUsageItem *usageItem;
@property (nonatomic, readonly) UILabel *usageLabel;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)setValue:(id)arg1;
- (id)usageGraphViewController;
- (id)usageItem;
- (id)usageLabel;

@end

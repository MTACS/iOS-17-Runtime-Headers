
@interface WDInteractiveChartTableViewCell : HKViewTableViewCell <WDDisplayTypeDetailViewControllerChartCellType> {
    unsigned long long  _displayMode;
    unsigned long long  _marginMode;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long displayMode;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long marginMode;
@property (readonly) Class superclass;

+ (id)defaultReuseIdentifier;

- (unsigned long long)displayMode;
- (unsigned long long)marginMode;
- (void)setDisplayMode:(unsigned long long)arg1;
- (void)setMarginMode:(unsigned long long)arg1;
- (void)setPrimaryValueSource:(id)arg1 secondaryValueSource:(id)arg2 chartSource:(id)arg3;
- (void)setTimeScope:(long long)arg1;

@end

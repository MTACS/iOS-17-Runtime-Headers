
@interface STUIStatusBarIndicatorLiquidDetectionItem : STUIStatusBarIndicatorItem {
    bool  _useFullColorIndicator;
}

@property (nonatomic) bool useFullColorIndicator;

- (id)indicatorEntryKey;
- (void)setUseFullColorIndicator:(bool)arg1;
- (id)systemImageNameForUpdate:(id)arg1;
- (bool)useFullColorIndicator;
- (bool)useMultiColorSystemImageForUpdate:(id)arg1;

@end

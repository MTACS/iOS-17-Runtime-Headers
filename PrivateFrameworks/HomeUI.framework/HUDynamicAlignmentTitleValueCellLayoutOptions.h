
@interface HUDynamicAlignmentTitleValueCellLayoutOptions : HUGridCellLayoutOptions {
    NSString * _longestPossibleTitleText;
    NSString * _longestPossibleValueText;
}

@property (nonatomic, retain) NSString *longestPossibleTitleText;
@property (nonatomic, retain) NSString *longestPossibleValueText;

- (void).cxx_destruct;
- (id)initWithCellSizeSubclass:(long long)arg1 longestPossibleValueText:(id)arg2 longestPossibleTitleText:(id)arg3;
- (id)longestPossibleTitleText;
- (id)longestPossibleValueText;
- (void)setLongestPossibleTitleText:(id)arg1;
- (void)setLongestPossibleValueText:(id)arg1;

@end

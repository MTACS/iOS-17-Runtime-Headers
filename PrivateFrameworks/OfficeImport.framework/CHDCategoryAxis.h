
@interface CHDCategoryAxis : CHDAxis {
    bool  mAutomatic;
    int  mLabelAlignment;
    long long  mLabelFrequency;
    bool  mLabelFrequencyAutomatic;
    bool  mNoMultipleLevelLabel;
    bool  mShowSeriesNames;
}

- (void)adjustAxisPositionForHorizontalChart;
- (id)initWithResources:(id)arg1;
- (bool)isAutomatic;
- (bool)isLabelFrequencyAutomatic;
- (bool)isNoMultipleLabellevel;
- (int)labelAlignment;
- (long long)labelFrequency;
- (void)setAutomatic:(bool)arg1;
- (void)setLabelAlignment:(int)arg1;
- (void)setLabelFrequency:(long long)arg1;
- (void)setNoMultipleLevelLabel:(bool)arg1;
- (void)setShowSeriesLabels:(bool)arg1;
- (bool)showSeriesLabels;

@end

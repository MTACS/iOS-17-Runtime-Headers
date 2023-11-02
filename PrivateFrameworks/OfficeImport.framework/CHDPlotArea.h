
@interface CHDPlotArea : NSObject {
    CHDAxesCollection * mAxes;
    bool  mCategoryAxesReversed;
    bool  mCategoryAxesReversedOverridden;
    CHDChartTypesCollection * mChartTypes;
    bool  mContainsVolumeStockType;
    OADGraphicProperties * mGraphicProperties;
}

- (void).cxx_destruct;
- (id)axes;
- (id)chartTypes;
- (bool)containsVolumeStockType;
- (id)description;
- (id)graphicProperties;
- (bool)hasSecondaryAxis;
- (bool)hasSecondaryYAxisDeleted;
- (id)initWithChart:(id)arg1;
- (bool)isCategoryAxesReversed:(bool)arg1;
- (void)markSecondaryAxes;
- (void)setContainsVolumeStockType:(bool)arg1;
- (void)setGraphicProperties:(id)arg1;

@end

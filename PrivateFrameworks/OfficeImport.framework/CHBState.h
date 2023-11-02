
@interface CHBState : NSObject {
    CHDChart * mChart;
    bool  mHasPrimaryMixedArea;
    bool  mHasPrimaryMixedColumn;
    bool  mHasPrimaryMixedLine;
    bool  mHasSecondaryMixedArea;
    bool  mHasSecondaryMixedColumn;
    bool  mHasSecondaryMixedLine;
    struct __CFArray { } * mXlChartDataSeriesCollection;
    int  mXlCurrentSeriesIndex;
    int  mXlSeriesCount;
}

- (void).cxx_destruct;
- (id)chart;
- (unsigned int)chartGroupIndexForType:(int)arg1 isForPrimary:(bool)arg2;
- (void)dealloc;
- (void)deleteXlChartDataSeriesCollection;
- (bool)hasPrimaryMixedArea;
- (bool)hasPrimaryMixedColumn;
- (bool)hasPrimaryMixedLine;
- (bool)hasSecondaryMixedArea;
- (bool)hasSecondaryMixedColumn;
- (bool)hasSecondaryMixedLine;
- (id)init;
- (bool)isMixedChart;
- (void)readAndCacheXlChartDataSeries;
- (id)resources;
- (void)setChart:(id)arg1;
- (void)setHasPrimaryMixedArea:(bool)arg1;
- (void)setHasPrimaryMixedColumn:(bool)arg1;
- (void)setHasPrimaryMixedLine:(bool)arg1;
- (void)setHasSecondaryMixedArea:(bool)arg1;
- (void)setHasSecondaryMixedColumn:(bool)arg1;
- (void)setHasSecondaryMixedLine:(bool)arg1;
- (void)setXlCurrentSeriesIndex:(int)arg1;
- (id)workbook;
- (void*)xlChartDataSeriesAtIndex:(int)arg1;
- (void*)xlCurrentChartDataSeries;
- (int)xlCurrentChartDataSeriesIndex;
- (int)xlSeriesCount;

@end

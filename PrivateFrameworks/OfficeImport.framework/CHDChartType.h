
@interface CHDChartType : NSObject {
    EDCollection * mAxisIds;
    CHDChart * mChart;
    CHDDataLabel * mDefaultDataLabel;
    CHDSeriesCollection * mSeries;
    bool  mVaryColors;
}

+ (id)chartTypeWithChart:(id)arg1;
+ (bool)is3DType;

- (void).cxx_destruct;
- (id)axes;
- (id)axisForClass:(Class)arg1;
- (id)axisIds;
- (unsigned long long)categoryCount;
- (id)chart;
- (id)contentFormat;
- (id)defaultDataLabel;
- (int)defaultLabelPosition;
- (id)defaultTitleWithResources:(id)arg1;
- (id)description;
- (id)initWithChart:(id)arg1;
- (bool)isHorizontal;
- (bool)isPlotedOnSecondaryAxis;
- (bool)isVaryColors;
- (id)seriesCollection;
- (unsigned long long)seriesCount;
- (void)setDefaultDataLabel:(id)arg1;
- (void)setSeriesCollection:(id)arg1;
- (void)setVaryColors:(bool)arg1;
- (void)switchAxes:(id)arg1;

@end

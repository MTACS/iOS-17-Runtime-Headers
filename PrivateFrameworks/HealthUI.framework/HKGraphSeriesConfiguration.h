
@interface HKGraphSeriesConfiguration : NSObject {
    HKDisplayType * _displayType;
    HKGraphSeries * _graphSeries;
    UIColor * _tintColor;
}

@property (nonatomic, retain) HKDisplayType *displayType;
@property (nonatomic, retain) HKGraphSeries *graphSeries;
@property (nonatomic, retain) UIColor *tintColor;

- (void).cxx_destruct;
- (id)displayType;
- (id)graphSeries;
- (void)setDisplayType:(id)arg1;
- (void)setGraphSeries:(id)arg1;
- (void)setTintColor:(id)arg1;
- (id)tintColor;

@end

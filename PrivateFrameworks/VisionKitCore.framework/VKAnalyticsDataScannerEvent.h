
@interface VKAnalyticsDataScannerEvent : VKAnalyticsEvent {
    bool  _didScanForBarcodes;
    bool  _didScanForText;
    double  _feedDuration;
}

@property (nonatomic) bool didScanForBarcodes;
@property (nonatomic) bool didScanForText;
@property (nonatomic) double feedDuration;
@property (nonatomic, readonly) bool isHealth;

- (id)coreAnalyticsDictionary;
- (id)description;
- (bool)didScanForBarcodes;
- (bool)didScanForText;
- (id)eventKey;
- (double)feedDuration;
- (id)initWithFeedDuration:(double)arg1 scannedForText:(bool)arg2 scannedForBarcodes:(bool)arg3 customIdentifier:(id)arg4;
- (bool)isHealth;
- (void)setDidScanForBarcodes:(bool)arg1;
- (void)setDidScanForText:(bool)arg1;
- (void)setFeedDuration:(double)arg1;
- (long long)type;

@end

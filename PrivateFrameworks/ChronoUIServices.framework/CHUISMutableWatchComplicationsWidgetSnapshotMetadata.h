
@interface CHUISMutableWatchComplicationsWidgetSnapshotMetadata : CHUISWatchComplicationsWidgetSnapshotMetadata

@property (nonatomic, copy) CHSGaugeParameters *gauge;
@property (nonatomic, copy) NSArray *gaugeMaximumLabelData;
@property (nonatomic, copy) NSArray *gaugeMinimumLabelData;
@property (nonatomic, copy) NSData *gaugeProviderData;
@property (nonatomic, copy) NSArray *labelData;
@property (nonatomic, copy) NSArray *outerLabelData;

- (void)setGauge:(id)arg1;
- (void)setGaugeMaximumLabelData:(id)arg1;
- (void)setGaugeMinimumLabelData:(id)arg1;
- (void)setGaugeProviderData:(id)arg1;
- (void)setLabelData:(id)arg1;
- (void)setOuterLabelData:(id)arg1;

@end

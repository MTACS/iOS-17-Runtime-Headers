
@protocol SRMultiSampleExporting <NSObject>

@required

- (void)sr_beginMultiSampleStream;
- (NSDictionary *)sr_dictionaryRepresentationWithSample:(id <SRSampling>)arg1;
- (NSDictionary *)sr_endMultiSampleStream;

@end

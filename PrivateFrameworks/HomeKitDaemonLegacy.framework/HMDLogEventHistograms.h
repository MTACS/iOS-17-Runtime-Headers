
@interface HMDLogEventHistograms : NSObject

+ (id)configurationDataHistogram;
+ (id)fileSizeHistogram;
+ (id)highVolumeHistogram;
+ (void)initialize;
+ (id)latencyHistogram;
+ (id)lowVolumeHistogram;
+ (id)memoryHistogram;
+ (id)successRateHistogram;

@end

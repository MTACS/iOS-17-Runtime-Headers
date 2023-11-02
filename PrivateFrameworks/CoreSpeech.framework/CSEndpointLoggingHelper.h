
@interface CSEndpointLoggingHelper : NSObject

+ (id)getMHClientEventByMhUUID:(id)arg1;
+ (id)getMHStatisticDistributionInfoFromDictionary:(id)arg1;
+ (id)getMHStatisticDistributionInfoFromDictionary:(id)arg1 withScaleFactor:(double)arg2;
+ (void)reportMHEndpointerAccessibleContextEventWithThresholdType:(id)arg1 MhId:(id)arg2;
+ (void)reportServerEndpointWithMhId:(id)arg1;

@end

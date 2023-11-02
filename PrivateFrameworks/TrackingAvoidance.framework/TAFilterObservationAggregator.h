
@interface TAFilterObservationAggregator : NSObject

+ (id)aggregateObservationsThroughHistoryForDetectionResults:(id)arg1 visitSnapshotBuffer:(id)arg2 intervisitSnapshotBuffer:(id)arg3 clock:(id)arg4;
+ (id)aggregateObservationsThroughHistoryForSingleDetection:(id)arg1 visitSnapshotBuffer:(id)arg2 intervisitSnapshotBuffer:(id)arg3 clock:(id)arg4;
+ (void)attachAISInfo:(id)arg1 deviceRecord:(id)arg2;
+ (id)location:(id)arg1 withAdvertisementTimestamp:(id)arg2;

@end

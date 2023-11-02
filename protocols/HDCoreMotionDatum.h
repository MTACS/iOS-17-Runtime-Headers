
@protocol HDCoreMotionDatum <NSObject>

@required

- (long long)hd_compare:(id <HDCoreMotionDatum>)arg1;
- (NSDate *)hd_datestamp;
- (NSDate *)hd_epochDatestamp;
- (NSUUID *)hd_sourceID;
- (HKUnit *)hd_unitForType:(HKQuantityType *)arg1;

@end

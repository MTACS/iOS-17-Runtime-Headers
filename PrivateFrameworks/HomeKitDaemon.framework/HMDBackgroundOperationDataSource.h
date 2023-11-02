
@interface HMDBackgroundOperationDataSource : NSObject <HMDBackgroundOperationDataSource>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)currentDate;
- (id)dateWithTimeIntervalSinceNow:(double)arg1;
- (double)timeIntervalSinceNowToDate:(id)arg1;

@end

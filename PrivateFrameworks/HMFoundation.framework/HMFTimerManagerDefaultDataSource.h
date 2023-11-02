
@interface HMFTimerManagerDefaultDataSource : NSObject <HMFTimerManagerDataSource>

@property (nonatomic, readonly) double currentTime;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (double)currentTime;
- (id)timerWithTimeInterval:(double)arg1 options:(unsigned long long)arg2;

@end

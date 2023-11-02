
@interface PFTimeService : NSObject <PFTimeService>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly) double timeIntervalSinceReferenceDate;

+ (id)defaultTimeService;

- (unsigned long long)clock_gettime_nsec_np:(int)arg1;
- (void)sleepForTimeInterval:(double)arg1;
- (double)timeIntervalSinceReferenceDate;

@end


@interface PodcastsFoundation.FutureDateChecker : NSObject {
    void assertOnFutures;
    void assertionLeniency;
    void leniency;
}

+ (id)lenientSharedInstance;
+ (void)setSharedInstanceShouldAssertTestsOnly:(bool)arg1;
+ (id)sharedInstance;
+ (bool)sharedInstanceShouldAssertTestsOnly;

- (void).cxx_destruct;
- (id)init;
- (bool)isFutureWithDate:(id)arg1 boundBy:(id)arg2;
- (bool)isFutureWithTimestamp:(double)arg1;
- (bool)isFutureWithTimestamp:(double)arg1 boundBy:(double)arg2;
- (double)timestamp:(double)arg1 boundBy:(double)arg2;
- (double)timestampBoundByNow:(double)arg1;
- (double)timestampBoundByNowForDate:(id)arg1;
- (double)timestampForDate:(id)arg1 boundBy:(id)arg2;

@end

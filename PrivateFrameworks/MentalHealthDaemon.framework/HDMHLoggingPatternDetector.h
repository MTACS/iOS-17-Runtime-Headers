
@interface HDMHLoggingPatternDetector : NSObject {
    HDProfile * _profile;
}

@property (nonatomic, readonly) HDProfile *profile;

- (void).cxx_destruct;
- (id)initWithProfile:(id)arg1;
- (id)isUnpleasantLoggingPatternDetectedWithCurrentDate:(id)arg1 gregorianCalendar:(id)arg2 pendingStateOfMind:(id)arg3 error:(id*)arg4;
- (id)profile;

@end

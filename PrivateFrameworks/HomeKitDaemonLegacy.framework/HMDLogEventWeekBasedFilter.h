
@interface HMDLogEventWeekBasedFilter : NSObject <HMMLogEventFiltering> {
    HMMDateProvider * _dateProvider;
}

@property (nonatomic, readonly) HMMDateProvider *dateProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)dateProvider;
- (id)initWithDateProvider:(id)arg1;
- (bool)isEventInSample:(id)arg1;
- (unsigned long long)resultHashWithEvent:(id)arg1;

@end

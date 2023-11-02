
@interface HKMCDayViewModel : NSObject <HKRedactedDescription> {
    NSArray * _cycleFactors;
    HKMCDaySummary * _daySummary;
    unsigned long long  _fertileWindowLevel;
    bool  _fetched;
    unsigned long long  _menstruationLevel;
    bool  _partiallyLoggedPeriod;
}

@property (nonatomic, readonly) NSString *accessibilityIdentifier;
@property (nonatomic, readonly) NSArray *cycleFactors;
@property (nonatomic, readonly) HKMCDaySummary *daySummary;
@property (nonatomic, readonly) unsigned long long fertileWindowLevel;
@property (getter=isFetched, nonatomic, readonly) bool fetched;
@property (readonly, copy) NSString *hk_redactedDescription;
@property (nonatomic, readonly) unsigned long long menstruationLevel;
@property (getter=isPartiallyLoggedPeriod, nonatomic, readonly) bool partiallyLoggedPeriod;
@property (getter=isSupplementaryDataLogged, nonatomic, readonly) bool supplementaryDataLogged;

+ (id)dayViewModelWithMenstruationLevel:(unsigned long long)arg1 fertileWindowLevel:(unsigned long long)arg2 daySummary:(id)arg3 cycleFactors:(id)arg4 partiallyLoggedPeriod:(bool)arg5 fetched:(bool)arg6;
+ (id)emptyDayViewModel;
+ (id)unfetchedDayViewModel;

- (void).cxx_destruct;
- (id)_initWithMenstruationLevel:(unsigned long long)arg1 fertileWindowLevel:(unsigned long long)arg2 daySummary:(id)arg3 cycleFactors:(id)arg4 partiallyLoggedPeriod:(bool)arg5 fetched:(bool)arg6;
- (id)accessibilityIdentifier;
- (id)cycleFactors;
- (id)daySummary;
- (id)description;
- (unsigned long long)fertileWindowLevel;
- (id)hk_redactedDescription;
- (bool)isEqual:(id)arg1;
- (bool)isFetched;
- (bool)isPartiallyLoggedPeriod;
- (bool)isSupplementaryDataLogged;
- (unsigned long long)menstruationLevel;

@end

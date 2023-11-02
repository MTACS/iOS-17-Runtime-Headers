
@interface PPEventScorer : NSObject {
    double  _earliestStartTime;
    EAEmailAddressSet * _emailVIPEmailAddresses;
    NSSet * _favoritesEmailAddresses;
    NSDictionary * _pastEventTitlesAndParticipants;
    long long  _pastTitlesCount;
    int  _rankingOptions;
    bool  _shouldConsiderAlarms;
    PPTrialWrapper * _trialWrapper;
}

+ (void)clearAssetCache;
+ (void)enrichDictionary:(id)arg1 withEvent:(id)arg2 interningSet:(id)arg3;
+ (void)setLocationsOfInterestLocations:(id)arg1 withReferenceDate:(id)arg2;

- (void).cxx_destruct;
- (id)init;
- (id)initWithPastEventTitlesAndParticipants:(id)arg1 andEarliestStartTime:(double)arg2 shouldConsiderAlarms:(bool)arg3 withOptions:(int)arg4 trialWrapper:(id)arg5;
- (id)initWithTrialWrapper:(id)arg1;
- (bool)isHomeCalendar:(id)arg1;
- (bool)isWorkCalendar:(id)arg1;
- (id)scoreEvent:(id)arg1 usingDate:(id)arg2;
- (bool)scoreIsExtraordinary:(double)arg1 rankingOptions:(int)arg2;
- (void)setEmailVIPEmailAddresses:(id)arg1;
- (void)setFavoritesEmailAddresses:(id)arg1;

@end

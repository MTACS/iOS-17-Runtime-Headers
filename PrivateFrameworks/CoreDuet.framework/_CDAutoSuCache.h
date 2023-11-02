
@interface _CDAutoSuCache : NSObject {
    NSDictionary * _predictedSleep;
    NSDate * _predictedSleepValidityEndDate;
    NSDate * _predictedSleepValidityStartDate;
}

@property (retain) NSDictionary *predictedSleep;
@property (retain) NSDate *predictedSleepValidityEndDate;
@property (retain) NSDate *predictedSleepValidityStartDate;

+ (id)sharedCache;

- (void).cxx_destruct;
- (id)cachedPredictedSleepDictionaryForDate:(id)arg1;
- (void)clear;
- (id)predictedSleep;
- (id)predictedSleepValidityEndDate;
- (id)predictedSleepValidityStartDate;
- (void)setCachedPredictedSleepDictionary:(id)arg1 validityStartDate:(id)arg2 validityEndDate:(id)arg3;
- (void)setPredictedSleep:(id)arg1;
- (void)setPredictedSleepValidityEndDate:(id)arg1;
- (void)setPredictedSleepValidityStartDate:(id)arg1;

@end

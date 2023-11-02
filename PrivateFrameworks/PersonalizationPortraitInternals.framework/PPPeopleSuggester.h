
@interface PPPeopleSuggester : NSObject {
    _PASLock * _lock;
    NSObject<OS_dispatch_queue> * _serialQueueForSweeping;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (double)_cacheEntryAgeThresholdSecondsSince1970;
- (id)_rankedContactIdentifiersMatchingName:(id)arg1;
- (void)_sweepCache;
- (id)init;
- (id)rankedContactIdentifiers;
- (id)rankedContactIdentifiersMatchingName:(id)arg1;

@end

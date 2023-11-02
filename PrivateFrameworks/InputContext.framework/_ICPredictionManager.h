
@interface _ICPredictionManager : NSObject <_ICFeedbackAccepting, _ICPredictionManaging> {
    _ICResultCache * _cache;
    NSString * _lastUsedSource;
    NSArray * _predictionSources;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (readonly) _ICResultCache *cache;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_quickTypePredictionWithTrigger:(id)arg1 searchContext:(id)arg2 timeoutInMilliseconds:(unsigned long long)arg3 error:(id*)arg4;
- (id)cache;
- (void)hibernate;
- (id)initWithPredictionSources:(id)arg1;
- (id)lastCachedResultWithInitialCharacters:(id)arg1;
- (void)predictedItemSelected:(id)arg1;
- (void)propogateMetrics:(id)arg1 data:(id)arg2;
- (void)provideFeedbackForString:(id)arg1 type:(unsigned char)arg2 style:(unsigned char)arg3;
- (void)providePredictionFeedbackForString:(id)arg1 type:(unsigned char)arg2 style:(unsigned char)arg3;
- (void)reset;
- (id)searchForMeCardEmailAddresses;
- (id)searchForMeCardRegions;
- (id)searchWithTrigger:(id)arg1 searchContext:(id)arg2 timeoutInMilliseconds:(int)arg3 error:(id*)arg4;
- (id)searchWithTriggers:(id)arg1 application:(id)arg2 recipient:(id)arg3 localeIdentifier:(id)arg4 isResponseDenyListed:(bool)arg5 shouldDisableAutoCaps:(bool)arg6 timeoutInMilliseconds:(int)arg7 resultLimit:(int)arg8 error:(id*)arg9;
- (id)searchWithTriggers:(id)arg1 application:(id)arg2 recipient:(id)arg3 localeIdentifier:(id)arg4 timeoutInMilliseconds:(int)arg5 resultLimit:(int)arg6 error:(id*)arg7;
- (void)setLastUsedSource:(id)arg1;
- (void)warmUp;
- (id)workLocation;

@end


@interface SREMusicRetrieval : NSObject {
    NSLocale * _locale;
    NSObject<OS_dispatch_queue> * _queue;
    id /* block */  candidatesHandler;
    id /* block */  completionHandler;
}

@property (copy) id /* block */ candidatesHandler;
@property (copy) id /* block */ completionHandler;
@property (nonatomic, retain) NSLocale *locale;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (void)_callCompletionHandler:(id)arg1;
- (void)_callMetadataEndpointWithAdamIDs:(id)arg1 queryIntent:(id)arg2;
- (id)_parseQueryString:(id)arg1;
- (id)_removeRecentlyPlayedCandidateAdamIDs:(id)arg1 recentPlayed:(id)arg2;
- (id /* block */)candidatesHandler;
- (id /* block */)completionHandler;
- (id)initWithLocale:(id)arg1 queue:(id)arg2 error:(id*)arg3;
- (bool)isMusicRecEligible:(id)arg1;
- (id)locale;
- (id)queue;
- (void)retrieveMusicWithQuery:(id)arg1 queryID:(unsigned long long)arg2;
- (void)setCandidatesHandler:(id /* block */)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setLocale:(id)arg1;
- (void)setQueue:(id)arg1;

@end


@interface WBSContentBlockerStatisticsInMemoryStore : NSObject <WBSContentBlockerStatisticsStore> {
    NSMutableDictionary * _firstPartiesByBlockedThirdParty;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)allStores;
+ (long long)totalBlockedTrackerCount;

- (void).cxx_destruct;
- (void)_clearStatisticsPassingTest:(id /* block */)arg1;
- (void)_clearUnusedDomains;
- (void)blockedThirdPartiesAfter:(id)arg1 before:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)blockedThirdPartiesAfter:(id)arg1 before:(id)arg2 onFirstParty:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)clearAllStatisticsWithCompletionHandler:(id /* block */)arg1;
- (void)clearStatisticsAfter:(id)arg1 before:(id)arg2;
- (void)clearStatisticsForDomains:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)recordThirdPartyResourceBlocked:(id)arg1 onFirstParty:(id)arg2 completionHandler:(id /* block */)arg3;

@end


@interface PPTopicAllowlist : NSObject {
    _PASCFBurstTrie * _allowlistTrie;
    <TRINotificationToken> * _trialToken;
    PPTrialWrapper * _trialWrapper;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)dealloc;
- (id)filterTopicDictionary:(id)arg1 clientProcess:(id)arg2;
- (id)indicesOfAllowedTopicsInRecordArray:(id)arg1 clientProcess:(id)arg2;
- (id)indicesOfAllowedTopicsInScoredTopicArray:(id)arg1 clientProcess:(id)arg2;
- (id)initWithTrialWrapper:(id)arg1;
- (bool)shouldBypassAllowlist:(id)arg1;

@end

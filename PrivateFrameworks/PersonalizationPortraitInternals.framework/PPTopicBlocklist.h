
@interface PPTopicBlocklist : NSObject {
    _PASCFBurstTrie * _blocklistTrie;
    <TRINotificationToken> * _trialToken;
    PPTrialWrapper * _trialWrapper;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)dealloc;
- (id)indicesOfBlockedTopicsInRecordArray:(id)arg1;
- (id)indicesOfBlockedTopicsInScoredTopicArray:(id)arg1;
- (id)initWithTrialWrapper:(id)arg1;
- (bool)shouldBlock:(id)arg1;

@end

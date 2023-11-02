
@interface HDNanoSyncSession : HDSyncSession {
    id /* block */  _completion;
    unsigned long long  _messageCount;
    unsigned long long  _options;
    HDSyncPredicate * _syncPredicate;
}

@property (nonatomic, readonly, copy) id /* block */ completion;
@property (getter=isLastChance, nonatomic, readonly) bool lastChance;
@property (nonatomic, readonly) unsigned long long messageCount;
@property (nonatomic, readonly) HDNanoSyncStore *nanoSyncStore;
@property (getter=isPullRequest, nonatomic, readonly) bool pullRequest;
@property (getter=isRequestedByRemote, nonatomic, readonly) bool requestedByRemote;

- (void).cxx_destruct;
- (id)changeSetWithChanges:(id)arg1 statusCode:(int)arg2 error:(id)arg3;
- (id /* block */)completion;
- (void)incrementMessageCount;
- (id)initWithSyncStore:(id)arg1 options:(unsigned long long)arg2 reason:(id)arg3 delegate:(id)arg4 completion:(id /* block */)arg5;
- (void)invokeCompletionWithSuccess:(bool)arg1 error:(id)arg2;
- (bool)isLastChance;
- (bool)isPullRequest;
- (bool)isRequestedByRemote;
- (long long)maxEncodedBytesPerChangeSetForSyncEntityClass:(Class)arg1;
- (long long)maxEncodedBytesPerCodableChangeForSyncEntityClass:(Class)arg1;
- (unsigned long long)messageCount;
- (id)nanoSyncStore;
- (id)newChangeWithSyncEntityClass:(Class)arg1 version:(struct { int x1; int x2; })arg2;
- (bool)shouldOverrideCycleTrackingSymptomsForBackwardsCompatibilty;
- (id)syncPredicate;

@end

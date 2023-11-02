
@interface NSFilePresenterRelinquishment : NSObject {
    NSCountedSet * _blockingAccessClaimIDs;
    NSMutableArray * _blockingPrerelinquishReplies;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _prerelinquishInProgress;
    id /* block */  _reacquirer;
    NSMutableArray * _relinquishReplies;
}

- (void)_locked_addPrerelinquishReply:(id /* block */)arg1;
- (bool)_locked_addRelinquishReply:(id /* block */)arg1;
- (void)dealloc;
- (void)didRelinquish;
- (void)performRelinquishmentToAccessClaimIfNecessary:(id)arg1 usingBlock:(id /* block */)arg2 withReply:(id /* block */)arg3;
- (void)performRemoteDeletePrerelinquishmentIfNecessaryUsingBlock:(id /* block */)arg1 withReply:(id /* block */)arg2;
- (void)removeAllBlockingAccessClaimIDs;
- (void)removeBlockingAccessClaimID:(id)arg1;
- (void)removeBlockingAccessClaimID:(id)arg1 thenContinue:(id /* block */)arg2;
- (void)setReacquirer:(id /* block */)arg1;

@end

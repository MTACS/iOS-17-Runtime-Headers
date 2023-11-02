
@interface VUIAppReviewManager : NSObject {
    double  _completionThreshold;
    double  _highestPlaybackProgress;
    unsigned long long  _lastPlaybackEvent;
    unsigned long long  _numberOfAddToUpNexts;
    unsigned long long  _numberOfAddToUpNextsBeforePrompting;
    unsigned long long  _numberOfPlaybacks;
    unsigned long long  _numberOfPlaybacksBeforePrompting;
    NSObject<OS_dispatch_queue> * _queue;
    AMSSharedStoreReview * _sharedStoreReview;
}

@property (nonatomic) unsigned long long lastPlaybackEvent;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_attemptToPrompt;
- (void)_handleIsPlaybackUIBeingShownDidChange:(id)arg1;
- (bool)_isYouthAccount;
- (void)_resetStates;
- (bool)_shouldAttemptToPrompt;
- (void)dealloc;
- (id)init;
- (void)isFeatureEnabled:(id /* block */)arg1;
- (unsigned long long)lastPlaybackEvent;
- (void)processAddToUpNext;
- (void)reportApplicationDidForegroundtoAMSSharedStoreReview;
- (void)setLastPlaybackEvent:(unsigned long long)arg1;
- (void)setMostRecentPlaybackProgressForNonTrailerContent:(double)arg1;

@end

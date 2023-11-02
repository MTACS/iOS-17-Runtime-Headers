
@interface TPSAnalyticsChecklistSessionController : NSObject {
    void hasActiveSession;
    void isFirstLaunch;
    void sessionBackgroundTimeout;
    void sessionEndSuggestedTipsCount;
    void sessionStartSuggestedTipCount;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  sessionStartTime;
    void sessionTimeout;
    void sessionTimeoutTimer;
    void sessionTipsCompleted;
    void timeSpent;
}

@property (nonatomic) bool hasActiveSession;
@property (nonatomic) bool isFirstLaunch;
@property (nonatomic) long long sessionEndSuggestedTipsCount;
@property (nonatomic) long long sessionTipsCompleted;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)continueSession;
- (bool)hasActiveSession;
- (id)init;
- (bool)isFirstLaunch;
- (long long)sessionEndSuggestedTipsCount;
- (long long)sessionTipsCompleted;
- (void)setHasActiveSession:(bool)arg1;
- (void)setIsFirstLaunch:(bool)arg1;
- (void)setSessionEndSuggestedTipsCount:(long long)arg1;
- (void)setSessionTipsCompleted:(long long)arg1;
- (void)startSession;
- (void)stopSession;

@end

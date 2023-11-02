
@interface WBSParsecDSession : NSObject <PARSessionDelegate, WBSParsecSearchSession> {
    WBSCompletionQuery * _currentQuery;
    unsigned long long  _currentQueryID;
    <WBSParsecSearchSessionDelegate> * _delegate;
    WBSParsecDFeedbackDispatcher * _feedbackDispatcher;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _geoUserSessionLock;
    PARSession * _parsecdSession;
    NSObject<OS_dispatch_queue> * _requestProcessingQueue;
    NSString * _rewrittenQueryStringFromParsec;
    bool  _skipAutoFillDataUpdates;
    GEOUserSessionEntity * _threadUnsafeGEOUserSessionEntity;
    double  _uiScale;
}

@property unsigned long long currentQueryID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <WBSParsecFeedbackDispatcher> *feedbackDispatcher;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PARSession *parsecdSession;
@property (nonatomic, readonly, copy) NSString *rewrittenQueryStringFromParsec;
@property (nonatomic, readonly) bool skipAutoFillDataUpdates;
@property (readonly) Class superclass;
@property (setter=setUIScale:, nonatomic) double uiScale;

+ (void)_parsecEnabledDidChange:(id)arg1;
+ (id)_sharedSessionConfiguration;
+ (void)_updateAutoFillCorrectionSetsIfNeededForSession:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)_updateAutoFillTLDsIfNeededForSession:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)_updateParsecAvailabilityInSessionConfiguration:(id)arg1;
+ (id)sharedCorrectionsProcessor;
+ (id)sharedDomainPolicyProvider;
+ (id)sharedPARSession;

- (void).cxx_destruct;
- (void)_didReceiveResponse:(id)arg1 error:(id)arg2 forTask:(id)arg3 query:(id)arg4;
- (void)_setCurrentQuery:(id)arg1 withKeyboardInputType:(id)arg2;
- (void)_startUpdatingAutoFillDataInBackgroundIfPossibleForSession:(id)arg1;
- (unsigned long long)currentQueryID;
- (id)feedbackDispatcher;
- (id)initWithParsecdSession:(id)arg1 skipAutoFillDataUpdates:(bool)arg2;
- (id)parsecdSession;
- (id)rewrittenQueryStringFromParsec;
- (void)session:(id)arg1 bag:(id)arg2 didLoadWithError:(id)arg3;
- (void)setCurrentQuery:(id)arg1;
- (void)setCurrentQueryID:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setUIScale:(double)arg1;
- (bool)skipAutoFillDataUpdates;
- (double)uiScale;

@end

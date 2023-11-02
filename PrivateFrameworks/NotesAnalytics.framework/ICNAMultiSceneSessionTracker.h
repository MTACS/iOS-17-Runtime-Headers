
@interface ICNAMultiSceneSessionTracker : NSObject {
    bool  _invalidated;
    NSObject<OS_dispatch_queue> * _isolationQueue;
    NSDictionary * _sceneSessionTrackers;
}

@property (nonatomic, readonly) bool hasLiveTimers;
@property (getter=isInvalidated, nonatomic) bool invalidated;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *isolationQueue;
@property (nonatomic, retain) NSDictionary *sceneSessionTrackers;
@property (nonatomic, readonly) NSString *sessionDetailDescription;
@property (nonatomic, readonly) long long sessionDetailType;
@property (nonatomic, readonly) ICASSessionSummaryData *sessionSummaryData;

- (void).cxx_destruct;
- (void)endAllSessionsAndInvalidate;
- (void)endNotesSession;
- (void)endPaperSession;
- (bool)hasLiveTimers;
- (id)init;
- (bool)invalidated;
- (bool)isInvalidated;
- (bool)isInvalidatedThreadUnsafe;
- (id)isolationQueue;
- (id)sceneSessionTrackers;
- (id)sessionDetailDescription;
- (long long)sessionDetailType;
- (id)sessionSummaryData;
- (void)setInvalidated:(bool)arg1;
- (void)setIsolationQueue:(id)arg1;
- (void)setSceneSessionTrackers:(id)arg1;
- (void)startNotesSession;
- (void)startPaperSession;

@end

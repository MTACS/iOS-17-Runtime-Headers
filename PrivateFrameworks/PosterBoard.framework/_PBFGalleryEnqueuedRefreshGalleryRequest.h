
@interface _PBFGalleryEnqueuedRefreshGalleryRequest : NSObject {
    NSMutableArray * _completionHandlers;
    bool  _finalized;
    bool  _finalizedDidUpdate;
    NSError * _finalizedError;
    ATXFaceGalleryConfiguration * _finalizedGalleryConfiguration;
    NSDate * _finalizedLastUpdateDate;
    unsigned long long  _options;
    long long  _powerLogReason;
    NSUUID * _sessionId;
}

@property (getter=isFinalized, nonatomic, readonly) bool finalized;
@property (nonatomic, copy) NSUUID *sessionId;

- (void).cxx_destruct;
- (void)addCompletionHandler:(id /* block */)arg1;
- (void)fireCompletionHandlersWithError:(id)arg1 faceGalleryConfiguration:(id)arg2 lastUpdateDate:(id)arg3 didUpdate:(bool)arg4;
- (id)initWithOptions:(unsigned long long)arg1 powerLogReason:(long long)arg2 sessionId:(id)arg3;
- (bool)isFinalized;
- (id)sessionId;
- (void)setSessionId:(id)arg1;

@end

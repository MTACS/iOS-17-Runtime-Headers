
@interface DYCaptureDescriptor : NSObject {
    unsigned long long  _api;
    bool  _armPreparedCapture;
    unsigned long long  _framesToCapture;
    bool  _includeBacktraceInFbufs;
    bool  _isBoundaryLess;
    NSURL * _localFilePathURL;
    bool  _lockGraphicsAfterCapture;
    unsigned long long  _sessionId;
    bool  _suspendAfterCapture;
    unsigned long long  _triggerFrame;
    bool  _unlockGraphicThreadsOnActivateCapture;
}

@property (nonatomic, readonly) unsigned long long api;
@property (nonatomic) bool armPreparedCapture;
@property (nonatomic) unsigned long long framesToCapture;
@property (nonatomic) bool includeBacktraceInFbufs;
@property (nonatomic) bool isBoundaryLess;
@property (nonatomic, retain) NSURL *localFilePathURL;
@property (nonatomic) bool lockGraphicsAfterCapture;
@property (nonatomic) unsigned long long sessionId;
@property (nonatomic) bool suspendAfterCapture;
@property (nonatomic) unsigned long long triggerFrame;
@property (nonatomic) bool unlockGraphicThreadsOnActivateCapture;

- (unsigned long long)api;
- (bool)armPreparedCapture;
- (void)dealloc;
- (unsigned long long)framesToCapture;
- (bool)includeBacktraceInFbufs;
- (id)initWithAPI:(unsigned long long)arg1;
- (bool)isBoundaryLess;
- (id)localFilePathURL;
- (bool)lockGraphicsAfterCapture;
- (unsigned long long)sessionId;
- (void)setArmPreparedCapture:(bool)arg1;
- (void)setFramesToCapture:(unsigned long long)arg1;
- (void)setIncludeBacktraceInFbufs:(bool)arg1;
- (void)setIsBoundaryLess:(bool)arg1;
- (void)setLocalFilePathURL:(id)arg1;
- (void)setLockGraphicsAfterCapture:(bool)arg1;
- (void)setSessionId:(unsigned long long)arg1;
- (void)setSuspendAfterCapture:(bool)arg1;
- (void)setTriggerFrame:(unsigned long long)arg1;
- (void)setUnlockGraphicThreadsOnActivateCapture:(bool)arg1;
- (bool)suspendAfterCapture;
- (unsigned long long)triggerFrame;
- (bool)unlockGraphicThreadsOnActivateCapture;

@end

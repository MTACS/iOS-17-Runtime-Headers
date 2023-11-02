
@interface HMDActiveSiriSessionInfo : NSObject <HMFLogging> {
    <HMDDataStreamBulkSendSession> * _bulkSendSession;
    <HMDActiveSiriSessionInfoDelegate> * _delegate;
    bool  _didBulkSendSessionComplete;
    bool  _didBulkSendSessionFail;
    bool  _didSiriSessionStart;
    bool  _didSiriSessionStop;
    NSString * _identifier;
}

@property (nonatomic, retain) <HMDDataStreamBulkSendSession> *bulkSendSession;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HMDActiveSiriSessionInfoDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didBulkSendSessionComplete;
@property (nonatomic) bool didBulkSendSessionFail;
@property (nonatomic) bool didSiriSessionStart;
@property (nonatomic) bool didSiriSessionStop;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_bulkSendDidComplete;
- (void)_bulkSendDidFail;
- (void)_doReadAudioFrames;
- (bool)_handleFrame:(id)arg1;
- (bool)_maybeHandleFrame:(id)arg1 error:(id)arg2;
- (id)bulkSendSession;
- (id)delegate;
- (id)description;
- (bool)didBulkSendSessionComplete;
- (bool)didBulkSendSessionFail;
- (bool)didSiriSessionStart;
- (bool)didSiriSessionStop;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 delegate:(id)arg2;
- (void)invalidate;
- (bool)isBulkSendActive;
- (bool)isSiriSessionActive;
- (void)markSiriPluginReady;
- (void)markSiriPluginStopped;
- (void)readFirstFrame;
- (void)setActiveBulkSendSession:(id)arg1;
- (void)setBulkSendSession:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDidBulkSendSessionComplete:(bool)arg1;
- (void)setDidBulkSendSessionFail:(bool)arg1;
- (void)setDidSiriSessionStart:(bool)arg1;
- (void)setDidSiriSessionStop:(bool)arg1;

@end

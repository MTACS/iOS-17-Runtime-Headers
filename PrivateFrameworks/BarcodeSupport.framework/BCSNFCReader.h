
@interface BCSNFCReader : NSObject <NFReaderSessionDelegate> {
    CPSClipRequest * _clipRequest;
    bool  _debouncedTagNotNDEFFormattedError;
    <BCSNFCReaderDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _disconnectQueue;
    double  _dismissProxCardReactivationDelay;
    BCSNotificationService * _notificationService;
    double  _postNotificationReactivationDelay;
    NSObject<OS_dispatch_queue> * _queue;
    NSTimer * _reactivateTimer;
    NFReaderSession * _session;
    long long  _sessionErrorCount;
    long long  _state;
    <NFSession> * _tentativeSession;
    NSObject<OS_os_transaction> * _transaction;
    NSMutableArray * _urlQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double dismissProxCardReactivationDelay;
@property (readonly) unsigned long long hash;
@property (nonatomic) BCSNotificationService *notificationService;
@property (nonatomic) double postNotificationReactivationDelay;
@property (nonatomic, readonly) long long state;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_didDetectTags:(id)arg1;
- (void)_didFindLink;
- (void)_disconnectTag;
- (void)_disconnectTagAndBlockReadingUntilRemoved;
- (bool)_isWaiting;
- (void)_performBlockOnQueue:(id /* block */)arg1;
- (void)_processNextURL;
- (bool)_readTag:(id)arg1;
- (void)_requestAppClipForURLRecord:(id)arg1;
- (void)_requestNotificationForURLRecord:(id)arg1;
- (void)_restart;
- (void)_restartPolling;
- (void)_scheduleReactivationWithDelay:(double)arg1;
- (void)_setStateAndNotifyDelegate:(long long)arg1;
- (bool)_startPolling;
- (void)_startProcessingURLs;
- (void)_startReading;
- (void)_stopPolling;
- (void)_stopReadingAndTransitionToState:(long long)arg1;
- (void)dealloc;
- (double)dismissProxCardReactivationDelay;
- (id)initWithDelegate:(id)arg1;
- (id)notificationService;
- (double)postNotificationReactivationDelay;
- (void)readerSession:(id)arg1 didDetectTags:(id)arg2;
- (void)readerSession:(id)arg1 externalReaderFieldNotification:(id)arg2;
- (void)readerSessionDidEndUnexpectedly:(id)arg1 reason:(id)arg2;
- (void)setDismissProxCardReactivationDelay:(double)arg1;
- (void)setNotificationService:(id)arg1;
- (void)setPostNotificationReactivationDelay:(double)arg1;
- (void)startReading;
- (long long)state;
- (void)stopReading;

@end

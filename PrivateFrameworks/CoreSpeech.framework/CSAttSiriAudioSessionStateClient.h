
@interface CSAttSiriAudioSessionStateClient : NSObject <AFNotifyObserverDelegate> {
    <CSAttSiriSessionStateDelegate> * _delegate;
    bool  _isActiveRequest;
    bool  _isActiveSession;
    bool  _isListening;
    bool  _isSpeaking;
    AFNotifyObserver * _siriStateObserver;
    NSObject<OS_dispatch_queue> * _stateNotificationQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <CSAttSiriSessionStateDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isActiveRequest;
@property (nonatomic) bool isActiveSession;
@property (nonatomic) bool isListening;
@property (nonatomic) bool isSpeaking;
@property (nonatomic, retain) AFNotifyObserver *siriStateObserver;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *stateNotificationQueue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (void)dispatchStateChangedFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;
- (id)initWithDelegate:(id)arg1;
- (bool)isActiveRequest;
- (bool)isActiveSession;
- (bool)isListening;
- (bool)isSpeaking;
- (void)notifyObserver:(id)arg1 didChangeStateFrom:(unsigned long long)arg2 to:(unsigned long long)arg3;
- (void)notifyObserver:(id)arg1 didReceiveNotificationWithToken:(int)arg2;
- (void)setIsActiveRequest:(bool)arg1;
- (void)setIsActiveSession:(bool)arg1;
- (void)setIsListening:(bool)arg1;
- (void)setIsSpeaking:(bool)arg1;
- (void)setSiriStateObserver:(id)arg1;
- (void)setStateNotificationQueue:(id)arg1;
- (id)siriStateObserver;
- (id)stateNotificationQueue;

@end

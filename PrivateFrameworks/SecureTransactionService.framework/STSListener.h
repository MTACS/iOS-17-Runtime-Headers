
@interface STSListener : NSObject <NFFieldDetectSessionDelegate> {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    <STSListenerDelegate> * _delegate;
    STSField * _lastField;
    NFFieldDetectSession * _nearFieldFdSession;
    STSHardwareManagerWrapper * _nfHwManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <STSListenerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (void)didEndSession;
- (void)didEnterField:(id)arg1;
- (void)didExitField;
- (void)didStartSession:(id)arg1;
- (void)fieldDetectSession:(id)arg1 didDetectField:(bool)arg2;
- (void)fieldDetectSession:(id)arg1 didEnterFieldWithNotification:(id)arg2;
- (void)fieldDetectSessionDidEndUnexpectedly:(id)arg1;
- (void)fieldDetectSessionDidExitField:(id)arg1;
- (id)init;
- (id)startWithDelegate:(id)arg1;
- (id)stop;

@end

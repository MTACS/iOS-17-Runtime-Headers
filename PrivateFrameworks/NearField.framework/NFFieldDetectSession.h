
@interface NFFieldDetectSession : NFSession <NFFieldDetectSessionCallbacks> {
    <NFFieldDetectSessionDelegate> * _delegate;
    bool  _fieldNotificationSent;
}

@property (readonly, copy) NSString *debugDescription;
@property <NFFieldDetectSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (void)didDetectField:(bool)arg1;
- (void)didDetectFieldNotification:(id)arg1;
- (void)didEndUnexpectedly;
- (bool)isTimeLimited;
- (void)setDelegate:(id)arg1;

@end

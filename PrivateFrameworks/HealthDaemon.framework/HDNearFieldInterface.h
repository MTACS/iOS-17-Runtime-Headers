
@interface HDNearFieldInterface : NSObject {
    <HDNearFieldInterfaceDelegate> * _delegate;
}

@property (nonatomic) <HDNearFieldInterfaceDelegate> *delegate;

- (void).cxx_destruct;
- (id)delegate;
- (void)endFieldDetectSession;
- (void)endNdefTagSession;
- (bool)isFieldDetectSessionInProgress;
- (bool)isNdefTagSessionInProgress;
- (id)releaseSinglePollExpressModeAssertion;
- (void)setDelegate:(id)arg1;
- (bool)setFieldDetectEnabled:(bool)arg1;
- (void)startFieldDetectSessionWithCompletion:(id /* block */)arg1;
- (void)startNdefTagSessionWithBluetoothLESecureOOBData:(id)arg1 completion:(id /* block */)arg2;
- (id)startSinglePollExpressModeAssertion:(double)arg1;

@end

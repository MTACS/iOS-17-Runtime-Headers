
@interface SAEmergencyResponseManager : NSObject <SAEmergencyResponseClientProtocol> {
    <SAEmergencyResponseDelegate> * _delegate;
}

@property (nonatomic, readonly) SAClient *client;
@property (nonatomic) <SAEmergencyResponseDelegate> *delegate;

- (void).cxx_destruct;
- (id)client;
- (id)delegate;
- (void)dialVoiceCallToPhoneNumber:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)updateVoiceCallStatus:(long long)arg1;

@end


@interface SESRKESession : SESSession <SESRKESessionCallbackInterface> {
    NSString * _activeKeyIdentifier;
    <SESRKESessionDelegate> * _delegate;
}

@property (nonatomic, readonly) NSString *activeKeyIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SESRKESessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)newInstance;

- (void).cxx_destruct;
- (id)activeKeyIdentifier;
- (id)cancelRKEFunction:(id)arg1 readerIdentifier:(id)arg2;
- (id)delegate;
- (void)didEndUnexpectedly:(id)arg1;
- (void)didInvalidateWithError:(id)arg1;
- (void)didReceivePassthroughMessage:(id)arg1 fromVehicle:(id)arg2;
- (void)didStartSession:(id)arg1;
- (id)getVehicleReports:(id*)arg1;
- (bool)isPassiveEntryAvailable:(id)arg1 isAvailable:(bool*)arg2 error:(id*)arg3;
- (void)sendEvent:(id)arg1 fromVehicle:(id)arg2;
- (bool)sendPassthroughMessage:(id)arg1 readerIdentifier:(id)arg2 error:(id*)arg3;
- (void)sendRKEFunction:(id)arg1 action:(id)arg2 readerIdentifier:(id)arg3 authorization:(id)arg4 isEnduring:(bool)arg5 completion:(id /* block */)arg6;
- (void)setDelegate:(id)arg1;

@end

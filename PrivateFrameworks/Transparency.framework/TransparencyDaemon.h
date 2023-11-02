
@interface TransparencyDaemon : NSObject

- (void)changeOptInState:(unsigned long long)arg1 application:(id)arg2 complete:(id /* block */)arg3;
- (void)clearOptInStateForURI:(id)arg1 application:(id)arg2 complete:(id /* block */)arg3;
- (void)clearPeerState:(id)arg1 uris:(id)arg2 block:(id /* block */)arg3;
- (void)configurationBagFetch:(id /* block */)arg1;
- (void)getAllOptInStates:(id /* block */)arg1;
- (void)getOptInForURI:(id)arg1 application:(id)arg2 complete:(id /* block */)arg3;
- (void)getOptInState:(id)arg1 complete:(id /* block */)arg2;
- (void)getOptInStateForApplication:(id)arg1 complete:(id /* block */)arg2;
- (void)performAndWaitForSelfValidate:(id /* block */)arg1;
- (void)replaySelfValidate:(id)arg1 application:(id)arg2 pcsAccountKey:(id)arg3 queryRequest:(id)arg4 queryResponse:(id)arg5 responseTime:(id)arg6 completionHandler:(id /* block */)arg7;
- (void)setOptInForURI:(id)arg1 application:(id)arg2 state:(bool)arg3 smtTimestamp:(id)arg4 complete:(id /* block */)arg5;
- (id)transparencyCheckIDSHealth:(id*)arg1;
- (void)transparencyCheckKTAccountKey:(id)arg1 complete:(id /* block */)arg2;
- (void)transparencyCloudDeviceAdd:(id)arg1 clientData:(id)arg2 complete:(id /* block */)arg3;
- (void)transparencyCloudDeviceRemove:(id)arg1 clientData:(id)arg2 complete:(id /* block */)arg3;
- (void)transparencyCloudDevices:(id /* block */)arg1;
- (void)transparencyDumpKTRegistrationData:(id /* block */)arg1;
- (void)transparencyFetchIDMS:(id /* block */)arg1;
- (void)transparencyFetchPublicKeys:(id /* block */)arg1;
- (void)transparencyFetchSelf:(id /* block */)arg1;
- (void)transparencyGetKTSignatures:(id)arg1 complete:(id /* block */)arg2;
- (void)transparencyIDSRegistration:(id /* block */)arg1;
- (void)transparencyIDSRepair:(id /* block */)arg1;
- (void)transparencyPerformRegistrationSignature:(id /* block */)arg1;
- (void)transparencySysDiagnose:(id /* block */)arg1;
- (id)transparencySysDiagnoseData:(id*)arg1;
- (void)transparencyTriggerIDSRegistration:(id /* block */)arg1;
- (void)transparencyTriggerOperation:(id)arg1 complete:(id /* block */)arg2;
- (void)transparencyValidateSelf:(id /* block */)arg1;

@end

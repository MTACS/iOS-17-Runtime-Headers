
@interface NFCVASReaderSession : NFCReaderSession <NFReaderSessionCallbacks> {
    NFTimer * _presenceCheckTimer;
    NSArray * _vasConfig;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)readingAvailable;

- (void).cxx_destruct;
- (void)_callbackDidBecomeActive;
- (id)_convertVASConfigToInternalRequest:(id)arg1;
- (id)_convertVASResponseToExternal:(id)arg1;
- (id)_sendVASRequests:(id)arg1 error:(id*)arg2;
- (void)beginSession;
- (void)dealloc;
- (void)didDetectTags:(id)arg1 connectedTagIndex:(unsigned long long)arg2;
- (void)didTerminate:(id)arg1;
- (id)initWithDelegate:(id)arg1 sessionDelegateType:(long long)arg2 queue:(id)arg3 pollMethod:(unsigned long long)arg4 sessionConfig:(unsigned long long)arg5;
- (id)initWithVASCommandConfigurations:(id)arg1 delegate:(id)arg2 queue:(id)arg3;

@end

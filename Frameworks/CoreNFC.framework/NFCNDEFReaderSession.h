
@interface NFCNDEFReaderSession : NFCReaderSession <NFReaderSessionCallbacks> {
    bool  _invalidateAfterFirstRead;
    unsigned long long  _tagsRead;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)readingAvailable;

- (void)_callbackDidBecomeActive;
- (void)connectToTag:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)didDetectNDEFMessages:(id)arg1 fromTags:(id)arg2 connectedTagIndex:(unsigned long long)arg3 updateUICallback:(id /* block */)arg4;
- (void)didTerminate:(id)arg1;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2 invalidateAfterFirstRead:(bool)arg3;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2 pollMethod:(unsigned long long)arg3;
- (id)initWithDelegate:(id)arg1 sessionDelegateType:(long long)arg2 queue:(id)arg3 pollMethod:(unsigned long long)arg4 sessionConfig:(unsigned long long)arg5;
- (void)restartPolling;

@end

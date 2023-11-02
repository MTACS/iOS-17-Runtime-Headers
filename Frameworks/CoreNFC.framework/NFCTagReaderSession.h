
@interface NFCTagReaderSession : NFCReaderSession <NFReaderSessionCallbacks> {
    <NFCTag> * _connectedTag;
    id  _swiftDelegateWrapper;
}

@property (nonatomic, readonly, retain) <NFCTag> *connectedTag;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)readingAvailable;

- (void).cxx_destruct;
- (void)_callbackDidBecomeActive;
- (void)connectToTag:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)connectedTag;
- (void)didDetectTags:(id)arg1 connectedTagIndex:(unsigned long long)arg2;
- (id)initWithDelegate:(id)arg1 sessionDelegateType:(long long)arg2 queue:(id)arg3 pollMethod:(unsigned long long)arg4 sessionConfig:(unsigned long long)arg5;
- (id)initWithPollingOption:(long long)arg1 delegate:(id)arg2 delegateType:(long long)arg3 queue:(id)arg4;
- (id)initWithPollingOption:(long long)arg1 delegate:(id)arg2 queue:(id)arg3;
- (id)initWithPollingOption:(long long)arg1 swiftDelegate:(id)arg2 queue:(id)arg3;
- (void)restartPolling;

@end

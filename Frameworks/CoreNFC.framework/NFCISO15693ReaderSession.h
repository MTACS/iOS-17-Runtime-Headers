
@interface NFCISO15693ReaderSession : NFCReaderSession <NFReaderSessionCallbacks>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)readingAvailable;

- (void)didDetectTags:(id)arg1 connectedTagIndex:(unsigned long long)arg2;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2 pollMethod:(unsigned long long)arg3;
- (id)initWithDelegate:(id)arg1 sessionDelegateType:(long long)arg2 queue:(id)arg3 pollMethod:(unsigned long long)arg4 sessionConfig:(unsigned long long)arg5;
- (void)restartPolling;

@end

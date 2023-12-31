
@interface MFDADeliveryConsumer : MFDAMailAccountConsumer <DAMessageSendConsumer> {
    unsigned long long  _bytesRead;
    unsigned long long  _bytesWritten;
    MFError * _error;
    long long  _status;
}

@property (nonatomic, readonly) unsigned long long bytesRead;
@property (nonatomic, readonly) unsigned long long bytesWritten;
@property (nonatomic, retain) MFError *error;
@property (nonatomic, readonly) long long status;

- (void).cxx_destruct;
- (void)actionFailed:(long long)arg1 forTask:(id)arg2 error:(id)arg3;
- (unsigned long long)bytesRead;
- (unsigned long long)bytesWritten;
- (id)error;
- (void)messageDidSendWithContext:(id)arg1 sentBytesCount:(unsigned long long)arg2 receivedBytesCount:(unsigned long long)arg3;
- (void)setError:(id)arg1;
- (long long)status;

@end

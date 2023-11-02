
@protocol CATIDSServiceConnectionDataMessageQueue

@required

- (<CATIDSServiceConnectionDataMessageQueueDelegate> *)delegate;
- (void)receiveData:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)receiveRemoteSequenceNumber:(unsigned long long)arg1;
- (void)retransmitSequenceNumbers:(NSArray *)arg1;
- (void)setDelegate:(id <CATIDSServiceConnectionDataMessageQueueDelegate>)arg1;

@end

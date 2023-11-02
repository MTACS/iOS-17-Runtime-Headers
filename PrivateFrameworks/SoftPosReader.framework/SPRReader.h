
@interface SPRReader : SPRObject {
    NSObject<OS_dispatch_queue> * _relayQueue;
}

- (void).cxx_destruct;
- (bool)cancelReadAndReturnError:(id*)arg1;
- (void)cancelReadWithCallback:(id)arg1;
- (bool)cancelReadWithCallback:(id)arg1 error:(id*)arg2;
- (id)generateSecureReaderBlobWithTrxBlob:(id)arg1 pinBlob:(id)arg2 error:(id*)arg3;
- (id)getCardReaderBlobWithTxnBlob:(id)arg1;
- (id)initWithConnector:(id /* block */)arg1;
- (void)readCardWithParameter:(id)arg1 callback:(id)arg2;
- (void)readCardWithParameter:(id)arg1 delegate:(id)arg2 completion:(id /* block */)arg3;
- (bool)validateWithReadParameters:(id)arg1 error:(id*)arg2;

@end

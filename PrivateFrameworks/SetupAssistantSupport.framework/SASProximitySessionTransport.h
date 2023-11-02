
@interface SASProximitySessionTransport : NSObject {
    id /* block */  _receivedDataBlock;
}

@property (copy) id /* block */ receivedDataBlock;

- (void).cxx_destruct;
- (void)activate;
- (void)invalidate;
- (id /* block */)receivedDataBlock;
- (void)sendData:(id)arg1 response:(id /* block */)arg2;
- (void)setReceivedDataBlock:(id /* block */)arg1;

@end

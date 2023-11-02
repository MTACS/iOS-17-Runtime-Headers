
@interface PRRangingClientExportedObject : NSObject <PRAidedRangingClientProtocol, PRRangingClientProtocol> {
    <PRRangingClientProtocol> * _rangingClient;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <PRRangingClientProtocol> *rangingClient;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)didFailWithError:(id)arg1;
- (void)didReceiveNewSolutions:(id)arg1;
- (id)initWithRangingClient:(id)arg1;
- (id)rangingClient;
- (void)rangingRequestDidUpdateStatus:(unsigned long long)arg1;
- (void)rangingServiceDidUpdateState:(unsigned long long)arg1 cause:(long long)arg2;
- (void)remoteDevice:(id)arg1 didChangeState:(long long)arg2;
- (void)sendDataToPeers:(id)arg1;
- (void)setRangingClient:(id)arg1;

@end

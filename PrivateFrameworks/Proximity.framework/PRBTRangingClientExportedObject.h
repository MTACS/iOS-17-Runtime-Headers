
@interface PRBTRangingClientExportedObject : NSObject <PRBTRangingClientProtocol> {
    <PRBTRangingClientProtocol> * _rangingClient;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <PRBTRangingClientProtocol> *rangingClient;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)didConnectDevice:(id)arg1 error:(id)arg2;
- (void)didFailWithError:(id)arg1;
- (void)didFetchTxPower:(id)arg1 fromDevice:(id)arg2 withError:(id)arg3;
- (void)didReceiveNewBTRSSI:(id)arg1;
- (void)didStartRangingOnDevice:(id)arg1 withError:(id)arg2;
- (void)didStopOwnerRangingOnDevice:(id)arg1 withError:(id)arg2;
- (id)initWithRangingClient:(id)arg1;
- (id)rangingClient;
- (void)setRangingClient:(id)arg1;

@end

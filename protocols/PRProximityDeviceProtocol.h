
@protocol PRProximityDeviceProtocol

@required

- (void)addSample:(struct BtProxData { double x1; double x2; unsigned int x3; })arg1;
- (long long)deviceProximity;
- (id)init;
- (id)initWithPeer:(NSUUID *)arg1 andPeerModel:(NSString *)arg2 withError:(id*)arg3;
- (NSUUID *)peer;
- (bool)proxReady;

@end

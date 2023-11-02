
@interface MRAVDiscoverySessionHelper : NSObject {
    unsigned long long  _discoverySessionFeatures;
}

- (id)createDiscoverySession;
- (id)initWithFeatures:(unsigned long long)arg1;
- (void)searchAVOutputDeviceForUID:(id)arg1 timeout:(double)arg2 identifier:(id)arg3 reason:(id)arg4 completion:(id /* block */)arg5;

@end

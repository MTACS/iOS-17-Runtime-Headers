
@interface VCTransportSessionProxy : VCTransportSession {
    unsigned int  _transportSessionID;
}

- (int)createVFD:(int*)arg1 forStreamType:(unsigned int)arg2;
- (id)initWithTransportSessionID:(unsigned int)arg1;
- (bool)isIPv6;
- (int)networkInterfaceType;
- (unsigned int)networkMTU;
- (void)start;

@end

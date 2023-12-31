
@interface NWTLSParameters : NSObject {
    NSSet * _SSLCipherSuites;
    NSData * _TLSSessionID;
    unsigned long long  _maximumSSLProtocolVersion;
    unsigned long long  _minimumSSLProtocolVersion;
}

@property (copy) NSSet *SSLCipherSuites;
@property (copy) NSData *TLSSessionID;
@property unsigned long long maximumSSLProtocolVersion;
@property unsigned long long minimumSSLProtocolVersion;

- (void).cxx_destruct;
- (id)SSLCipherSuites;
- (id)TLSSessionID;
- (unsigned long long)maximumSSLProtocolVersion;
- (unsigned long long)minimumSSLProtocolVersion;
- (void)setMaximumSSLProtocolVersion:(unsigned long long)arg1;
- (void)setMinimumSSLProtocolVersion:(unsigned long long)arg1;
- (void)setSSLCipherSuites:(id)arg1;
- (void)setTLSSessionID:(id)arg1;

@end

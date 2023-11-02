
@interface _MLNetworkOptions : NSObject {
    NSMutableDictionary * _networkOptions;
    long long  _receiveTimeout;
}

@property (nonatomic, readonly) NSMutableDictionary *networkOptions;
@property (nonatomic, readonly) long long receiveTimeout;

- (void).cxx_destruct;
- (unsigned long long)family;
- (id)initWithOptions:(id)arg1;
- (const char *)localAddr;
- (const char *)localPort;
- (const char *)networkNameIdentifier;
- (id)networkOptions;
- (const char *)port;
- (const char *)psk;
- (long long)receiveTimeout;
- (long long)receiveTimeoutValue;
- (bool)useAWDL;
- (bool)useBonjour;
- (bool)useTLS;
- (bool)useUDP;

@end


@protocol ECNWConnectionWrapper <EFCancelable>

@required

- (NSString *)accountIdentifier;
- (bool)allowsTrustPrompt;
- (NSArray *)clientCertificates;
- (void)close;
- (bool)connectToHost:(NSString *)arg1 withPort:(unsigned int)arg2 service:(NSString *)arg3;
- (NSString *)connectionServiceType;
- (bool)disableEphemeralDiffieHellmanCiphers;
- (void)enableThroughputMonitoring:(bool)arg1;
- (NSError *)error;
- (bool)isCellularConnection;
- (bool)isConstrained;
- (bool)isNonAppInitiated;
- (bool)isReadable;
- (bool)isValid;
- (bool)isWritable;
- (NSString *)networkAccountIdentifier;
- (id /* block */)networkActivityChangeBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, bool, void*, id, SEL
- (long long)readBytesIntoBuffer:(char *)arg1 maxLength:(unsigned long long)arg2;
- (void)registerForBytesAvailableWithHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (NSString *)remoteHostname;
- (unsigned int)remotePortNumber;
- (NSString *)securityProtocol;
- (NSArray *)serverCertificates;
- (id /* block */)serverTrustHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, struct __SecTrust { }*, id*, void*, id, SEL
- (NSString *)service;
- (void)setAccountIdentifier:(NSString *)arg1;
- (void)setAllowsTrustPrompt:(bool)arg1;
- (void)setClientCertificates:(NSArray *)arg1;
- (void)setConnectionServiceType:(NSString *)arg1;
- (void)setDisableEphemeralDiffieHellmanCiphers:(bool)arg1;
- (void)setIsNonAppInitiated:(bool)arg1;
- (void)setNetworkAccountIdentifier:(NSString *)arg1;
- (void)setNetworkActivityChangeBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (bool)setSecurityProtocol:(NSString *)arg1;
- (void)setServerTrustHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, struct __SecTrust { }*, id*, void*
- (void)setSourceApplicationBundleIdentifier:(NSString *)arg1;
- (void)setTimeout:(unsigned int)arg1;
- (void)setUsesOpportunisticSockets:(bool)arg1;
- (NSString *)sourceApplicationBundleIdentifier;
- (void)startActivity;
- (void)stopActivity;
- (unsigned int)timeout;
- (void)unregisterForBytesAvailable;
- (bool)usesOpportunisticSockets;
- (long long)writeBytes:(const char *)arg1 length:(unsigned long long)arg2;

@end

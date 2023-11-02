
@protocol HAPSecuritySessionDelegate <NSObject>

@required

- (HAPPairingIdentity *)securitySession:(HAPSecuritySession *)arg1 didReceiveLocalPairingIdentityRequestWithError:(id*)arg2;
- (HAPPairingIdentity *)securitySession:(HAPSecuritySession *)arg1 didReceiveRequestForPeerPairingIdentityWithIdentifier:(NSString *)arg2 error:(id*)arg3;
- (void)securitySession:(HAPSecuritySession *)arg1 didReceiveSetupExchangeData:(NSData *)arg2;

@optional

- (void)securitySession:(HAPSecuritySession *)arg1 didCloseWithError:(NSError *)arg2;
- (void)securitySessionDidOpen:(HAPSecuritySession *)arg1;
- (NSArray *)securitySessionDidRequestAdditionalDerivedKeyTuples:(HAPSecuritySession *)arg1;
- (void)securitySessionIsOpening:(HAPSecuritySession *)arg1;
- (void)securitySessionWillCloseWithResponseData:(NSData *)arg1 error:(id*)arg2;
- (NSString *)shortDescription;

@end


@protocol CRKSessionDelegate <NSObject>

@required

- (<CRKIdentity> *)clientIdentityForSession:(CRKSession *)arg1;
- (void)session:(CRKSession *)arg1 didConnectWithTransport:(CATTransport *)arg2;
- (void)session:(void *)arg1 encounteredUntrustedConnectionForASMInstructorIdentifier:(void *)arg2 decisionHandler:(void *)arg3; // needs 3 arg types, found 8: CRKSession *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, void*
- (void)session:(CRKSession *)arg1 willLoseBeaconAfterTimeInterval:(double)arg2;
- (void)sessionDidBecomeConnectable:(CRKSession *)arg1;
- (void)sessionDidBecomeNotConnectable:(CRKSession *)arg1;
- (void)sessionDidDisconnect:(CRKSession *)arg1;
- (void)sessionDidInvalidate:(CRKSession *)arg1;
- (void)sessionDidLoseBeacon:(CRKSession *)arg1;
- (NSArray *)trustedAnchorCertificatesForSession:(CRKSession *)arg1;

@end

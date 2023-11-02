
@interface SESPeerIdentity : NSObject {
    NSData * _peerData;
    NSData * _peerIdentifier;
}

@property (readonly) NSData *peerData;
@property (readonly) NSData *peerIdentifier;

+ (id)withOTPeerIdentity:(id)arg1;
+ (id)withPeerIdentifier:(id)arg1 peerData:(id)arg2;

- (void).cxx_destruct;
- (id)asOTPeerIdentity;
- (id)peerData;
- (id)peerIdentifier;

@end

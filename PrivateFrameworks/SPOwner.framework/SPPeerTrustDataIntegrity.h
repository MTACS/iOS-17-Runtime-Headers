
@interface SPPeerTrustDataIntegrity : NSObject <NSCopying, NSSecureCoding> {
    SPDataIntegrityCheck * _messagingDestination;
    SPDataIntegrityCheck * _peerTrustRecord;
}

@property (nonatomic, copy) SPDataIntegrityCheck *messagingDestination;
@property (nonatomic, copy) SPDataIntegrityCheck *peerTrustRecord;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPeerTrustRecord:(id)arg1 messagingDestination:(id)arg2;
- (id)messagingDestination;
- (id)peerTrustRecord;
- (void)setMessagingDestination:(id)arg1;
- (void)setPeerTrustRecord:(id)arg1;

@end

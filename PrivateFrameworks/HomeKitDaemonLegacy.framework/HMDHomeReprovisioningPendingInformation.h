
@interface HMDHomeReprovisioningPendingInformation : NSObject {
    NSUUID * _messageIdentifier;
    HMDAccessoryNetworkCredential * _networkCredential;
}

@property (readonly) NSUUID *messageIdentifier;
@property (readonly) HMDAccessoryNetworkCredential *networkCredential;

- (void).cxx_destruct;
- (id)initWithMessageUUID:(id)arg1 networkCredential:(id)arg2;
- (id)messageIdentifier;
- (id)networkCredential;

@end

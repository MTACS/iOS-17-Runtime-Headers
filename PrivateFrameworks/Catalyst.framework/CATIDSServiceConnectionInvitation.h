
@interface CATIDSServiceConnectionInvitation : NSObject {
    <CATCancelable> * _assertion;
    NSUUID * _connectionIdentifier;
    unsigned long long  _messagingVersion;
    NSString * _senderAddress;
    NSString * _senderAppleID;
    NSDictionary * _userInfo;
}

@property (nonatomic, readonly) <CATCancelable> *assertion;
@property (nonatomic, readonly) NSUUID *connectionIdentifier;
@property (nonatomic, readonly) unsigned long long messagingVersion;
@property (nonatomic, readonly, copy) NSString *senderAddress;
@property (nonatomic, readonly, copy) NSString *senderAppleID;
@property (nonatomic, readonly, copy) NSDictionary *userInfo;

- (void).cxx_destruct;
- (id)assertion;
- (id)connectionIdentifier;
- (id)initWithConnectionIdentifier:(id)arg1 senderAppleID:(id)arg2 senderAddress:(id)arg3 assertion:(id)arg4 messagingVersion:(unsigned long long)arg5 userInfo:(id)arg6;
- (id)initWithSenderAppleID:(id)arg1 senderAddress:(id)arg2 assertion:(id)arg3 messagingVersion:(unsigned long long)arg4 userInfo:(id)arg5;
- (unsigned long long)messagingVersion;
- (id)senderAddress;
- (id)senderAppleID;
- (id)userInfo;

@end

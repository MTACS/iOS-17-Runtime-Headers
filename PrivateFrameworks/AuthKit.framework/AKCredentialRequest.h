
@interface AKCredentialRequest : NSObject <AKCredentialRequestProtocol> {
    NSString * _altDSID;
    NSUUID * _requestIdentifier;
    NSUUID * _transactionID;
    NSString * _userIdentifier;
}

@property (nonatomic, readonly, copy) NSString *altDSID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSUUID *requestIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSUUID *transactionID;
@property (nonatomic, copy) NSString *userIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)altDSID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)requestIdentifier;
- (void)setRequestIdentifier:(id)arg1;
- (void)setUserIdentifier:(id)arg1;
- (id)transactionID;
- (id)userIdentifier;

@end

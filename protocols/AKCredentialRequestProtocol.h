
@protocol AKCredentialRequestProtocol <NSObject, NSSecureCoding, NSCopying>

@required

- (NSString *)altDSID;
- (NSUUID *)requestIdentifier;
- (void)setUserIdentifier:(NSString *)arg1;
- (NSUUID *)transactionID;
- (NSString *)userIdentifier;

@end

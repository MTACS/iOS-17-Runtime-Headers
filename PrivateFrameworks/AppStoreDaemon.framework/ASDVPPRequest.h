
@interface ASDVPPRequest : NSObject <NSSecureCoding> {
    NSNumber * _accountIdentifier;
    long long  _archiveType;
    NSString * _bundleIdentifier;
    NSNumber * _externalVersionIdentifier;
    NSNumber * _itemIdentifier;
    NSUUID * _requestIdentifier;
    long long  _requestType;
}

@property (copy) NSNumber *accountIdentifier;
@property long long archiveType;
@property (copy) NSString *bundleIdentifier;
@property (copy) NSNumber *externalVersionIdentifier;
@property (copy) NSNumber *itemIdentifier;
@property (retain) NSUUID *requestIdentifier;
@property (nonatomic) long long requestType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountIdentifier;
- (long long)archiveType;
- (id)bundleIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)externalVersionIdentifier;
- (id)initWithCoder:(id)arg1;
- (id)itemIdentifier;
- (id)requestIdentifier;
- (long long)requestType;
- (void)setAccountIdentifier:(id)arg1;
- (void)setArchiveType:(long long)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setExternalVersionIdentifier:(id)arg1;
- (void)setItemIdentifier:(id)arg1;
- (void)setRequestIdentifier:(id)arg1;
- (void)setRequestType:(long long)arg1;

@end

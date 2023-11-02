
@interface ASDManagedApplicationRequestOptions : ASDRequestOptions {
    NSNumber * _accountIdentifier;
    NSString * _bundleIdentifier;
    NSString * _bundleVersion;
    NSNumber * _externalVersionIdentifier;
    NSNumber * _itemIdentifier;
    long long  _requestType;
    bool  _skipDownloads;
}

@property (nonatomic, copy) NSNumber *accountIdentifier;
@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSString *bundleVersion;
@property (nonatomic, readonly) NSNumber *externalVersionIdentifier;
@property (nonatomic, readonly) NSNumber *itemIdentifier;
@property (nonatomic) long long requestType;
@property (nonatomic, readonly) bool skipDownloads;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountIdentifier;
- (id)bundleIdentifier;
- (id)bundleVersion;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)externalVersionIdentifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithItemIdentifer:(id)arg1 externalVersionIdentifier:(id)arg2 bundleIdentifier:(id)arg3 bundleVersion:(id)arg4 skipDownloads:(bool)arg5;
- (id)itemIdentifier;
- (long long)requestType;
- (void)setAccountIdentifier:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setRequestType:(long long)arg1;
- (bool)skipDownloads;

@end

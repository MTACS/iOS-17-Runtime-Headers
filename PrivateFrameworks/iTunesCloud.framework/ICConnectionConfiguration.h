
@interface ICConnectionConfiguration : NSObject <NSCopying, NSSecureCoding> {
    NSURL * _baseURL;
    NSString * _buildIdentifier;
    NSObject<OS_tcc_identity> * _clientIdentity;
    NSNumber * _familyMemberStoreID;
    NSString * _libraryBagKey;
    NSString * _purchaseClientIdentifier;
    long long  _requestReason;
    ICUserIdentity * _userIdentity;
    ICUserIdentityStore * _userIdentityStore;
}

@property (nonatomic, copy) NSURL *baseURL;
@property (nonatomic, copy) NSString *buildIdentifier;
@property (nonatomic, readonly) NSObject<OS_tcc_identity> *clientIdentity;
@property (nonatomic, copy) NSNumber *familyMemberStoreID;
@property (nonatomic, copy) NSString *libraryBagKey;
@property (nonatomic, copy) NSString *purchaseClientIdentifier;
@property (nonatomic) long long requestReason;
@property (nonatomic, copy) ICUserIdentity *userIdentity;
@property (nonatomic, readonly) ICUserIdentityStore *userIdentityStore;

+ (id)configurationFromSourceConfiguration:(id)arg1 userIdentity:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)baseURL;
- (id)buildIdentifier;
- (id)clientIdentity;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)familyMemberStoreID;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithUserIdentity:(id)arg1;
- (id)initWithUserIdentity:(id)arg1 userIdentityStore:(id)arg2;
- (id)initWithUserIdentity:(id)arg1 userIdentityStore:(id)arg2 clientIdentity:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)libraryBagKey;
- (id)purchaseClientIdentifier;
- (long long)requestReason;
- (void)setBaseURL:(id)arg1;
- (void)setBuildIdentifier:(id)arg1;
- (void)setFamilyMemberStoreID:(id)arg1;
- (void)setLibraryBagKey:(id)arg1;
- (void)setPurchaseClientIdentifier:(id)arg1;
- (void)setRequestReason:(long long)arg1;
- (void)setUserIdentity:(id)arg1;
- (id)userIdentity;
- (id)userIdentityStore;

@end

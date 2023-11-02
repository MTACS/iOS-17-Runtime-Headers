
@interface MIStoreMetadataDistributor : NSObject <NSCopying, NSSecureCoding> {
    NSString * _accountID;
    NSString * _distributorID;
    NSURL * _packageURL;
}

@property (nonatomic, copy) NSString *accountID;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, copy) NSString *distributorID;
@property (nonatomic, copy) NSURL *packageURL;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)distributorID;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)packageURL;
- (void)setAccountID:(id)arg1;
- (void)setDistributorID:(id)arg1;
- (void)setPackageURL:(id)arg1;

@end

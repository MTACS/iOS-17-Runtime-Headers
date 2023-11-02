
@interface PKSharedAccountCloudStore : NSObject <NSCopying, NSSecureCoding> {
    NSString * _accountIdentifier;
    bool  _dirty;
    NSDate * _lastUpdated;
    NSArray * _sharedAccountCloudStoreZones;
}

@property (nonatomic, copy) NSString *accountIdentifier;
@property (getter=isDirty, nonatomic) bool dirty;
@property (nonatomic, copy) NSDate *lastUpdated;
@property (nonatomic, copy) NSArray *sharedAccountCloudStoreZones;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountIdentifier;
- (id)allPossibleZonesForAccountUser:(id)arg1 access:(unsigned long long)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithArray:(id)arg1 lastUpdated:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isDirty;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSharedAccountCloudStore:(id)arg1;
- (id)lastUpdated;
- (id)primaryZoneForAccountUser:(id)arg1 access:(unsigned long long)arg2;
- (void)setAccountIdentifier:(id)arg1;
- (void)setDirty:(bool)arg1;
- (void)setLastUpdated:(id)arg1;
- (void)setSharedAccountCloudStoreZones:(id)arg1;
- (id)sharedAccountCloudStoreZones;
- (id)sharedAccountCloudStoreZonesWithAccess:(unsigned long long)arg1;
- (id)sharedAccountCloudStoreZonesWithAccess:(unsigned long long)arg1 forAccountUser:(id)arg2;
- (id)sharedAccountZoneWithName:(id)arg1 access:(unsigned long long)arg2;

@end

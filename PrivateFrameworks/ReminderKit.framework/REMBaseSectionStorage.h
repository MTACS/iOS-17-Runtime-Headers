
@interface REMBaseSectionStorage : NSObject <NSCopying, NSSecureCoding, REMObjectIDProviding, REMObjectStorageSupportedVersionProviding> {
    REMObjectID * _accountID;
    unsigned long long  _copyGeneration;
    NSDate * _creationDate;
    NSString * _displayName;
    REMObjectID * _objectID;
    REMObjectID * _parentID;
    REMResolutionTokenMap * _resolutionTokenMap;
    NSData * _resolutionTokenMapData;
    unsigned long long  _storeGeneration;
    long long  effectiveMinimumSupportedVersion;
    long long  minimumSupportedVersion;
}

@property (nonatomic, retain) REMObjectID *accountID;
@property (nonatomic, retain) NSDate *creationDate;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, readonly) long long effectiveMinimumSupportedVersion;
@property (nonatomic, readonly) long long minimumSupportedVersion;
@property (nonatomic, retain) REMObjectID *objectID;
@property (nonatomic, retain) REMObjectID *parentID;
@property (nonatomic, readonly) REMObjectID *remObjectID;
@property (nonatomic, retain) REMResolutionTokenMap *resolutionTokenMap;
@property (nonatomic, retain) NSData *resolutionTokenMapData;

+ (id)cdEntityName;
+ (id)newObjectID;
+ (id)objectIDWithUUID:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountID;
- (id)cdKeyToStorageKeyMap;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (id)debugDescription;
- (id)description;
- (id)displayName;
- (long long)effectiveMinimumSupportedVersion;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithObjectID:(id)arg1 accountID:(id)arg2 parentID:(id)arg3 displayName:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isUnsupported;
- (long long)minimumSupportedVersion;
- (id)objectID;
- (id)parentID;
- (id)remObjectID;
- (id)resolutionTokenMap;
- (id)resolutionTokenMapData;
- (void)setAccountID:(id)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setEffectiveMinimumSupportedVersion:(long long)arg1;
- (void)setMinimumSupportedVersion:(long long)arg1;
- (void)setObjectID:(id)arg1;
- (void)setParentID:(id)arg1;
- (void)setResolutionTokenMap:(id)arg1;
- (void)setResolutionTokenMapData:(id)arg1;
- (void)setStoreGenerationIfNeeded:(unsigned long long)arg1;
- (unsigned long long)storeGeneration;

@end

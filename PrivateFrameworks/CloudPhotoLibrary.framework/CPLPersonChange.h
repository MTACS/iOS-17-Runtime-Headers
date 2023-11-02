
@interface CPLPersonChange : CPLRecordChange <NSCopying, NSSecureCoding> {
    long long  _assetSortOrder;
    NSData * _contactDescriptor;
    short  _detectionType;
    NSString * _displayName;
    NSString * _fullName;
    long long  _manualSortOrder;
    NSString * _mergeTargetPersonIdentifier;
    long long  _personType;
    long long  _verifiedType;
}

@property (nonatomic) long long assetSortOrder;
@property (nonatomic, copy) NSData *contactDescriptor;
@property (nonatomic, copy) NSDictionary *contactMatchingDictionary;
@property (nonatomic) short detectionType;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, copy) NSString *fullName;
@property (nonatomic) long long manualSortOrder;
@property (nonatomic, copy) NSString *mergeTargetPersonIdentifier;
@property (nonatomic) long long personType;
@property (nonatomic) long long verifiedType;

+ (bool)cplShouldIgnorePropertyForCoding:(id)arg1;
+ (bool)cplShouldIgnorePropertyForEquality:(id)arg1;
+ (Class)relatedRecordClass;
+ (bool)serverSupportsAssetSortOrder;
+ (bool)serverSupportsDetectionType;
+ (bool)serverSupportsGraphPeopleHome;
+ (bool)serverSupportsMergeTargetRef;
+ (bool)supportsDeletion;
+ (bool)supportsDirectDeletion;

- (void).cxx_destruct;
- (long long)assetSortOrder;
- (id)contactDescriptor;
- (id)contactMatchingDictionary;
- (short)detectionType;
- (id)displayName;
- (id)fullName;
- (long long)manualSortOrder;
- (id)mergeTargetPersonIdentifier;
- (id)mergeTargetPersonScopedIdentifier;
- (long long)personType;
- (id)relatedIdentifier;
- (void)setAssetSortOrder:(long long)arg1;
- (void)setContactDescriptor:(id)arg1;
- (void)setContactMatchingDictionary:(id)arg1;
- (void)setDetectionType:(short)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setFullName:(id)arg1;
- (void)setManualSortOrder:(long long)arg1;
- (void)setMergeTargetPersonIdentifier:(id)arg1;
- (void)setMergeTargetPersonScopedIdentifier:(id)arg1;
- (void)setPersonType:(long long)arg1;
- (void)setRelatedIdentifier:(id)arg1;
- (void)setVerifiedType:(long long)arg1;
- (bool)validateRecordForTracker:(id)arg1;
- (long long)verifiedType;

@end

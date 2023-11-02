
@interface HKUserDomainConcept : NSObject <NSCopying, NSSecureCoding> {
    NSUUID * _UUID;
    NSString * _build;
    HKMedicalCodingCollection * _codingCollection;
    double  _creationTimestamp;
    bool  _deleted;
    long long  _healthd_use_only_syncEntityIdentity;
    HKUserDomainConceptTypeIdentifier * _identifier;
    HKUserDomainConceptLinkCollection * _linkCollection;
    double  _modificationTimestamp;
    struct { 
        long long majorVersion; 
        long long minorVersion; 
        long long patchVersion; 
    }  _operatingSystemVersion;
    HKUserDomainConceptPropertyCollection * _propertyCollection;
}

@property (nonatomic, readonly, copy) NSUUID *UUID;
@property (nonatomic, readonly, copy) NSString *build;
@property (nonatomic, readonly) bool canRequestSyncUponInsertion;
@property (nonatomic, readonly, copy) HKMedicalCodingCollection *codingCollection;
@property (nonatomic, readonly, copy) NSDate *creationDate;
@property (nonatomic, readonly) double creationTimestamp;
@property (getter=isDeleted, nonatomic, readonly) bool deleted;
@property (nonatomic, readonly) long long hd_syncEntityIdentity;
@property (nonatomic) long long healthd_use_only_syncEntityIdentity;
@property (nonatomic, readonly, copy) HKUserDomainConceptTypeIdentifier *identifier;
@property (nonatomic, readonly, copy) HKUserDomainConceptLinkCollection *linkCollection;
@property (nonatomic, readonly, copy) NSDate *modificationDate;
@property (nonatomic, readonly) double modificationTimestamp;
@property (nonatomic, readonly) struct { long long x1; long long x2; long long x3; } operatingSystemVersion;
@property (nonatomic, readonly, copy) HKUserDomainConceptPropertyCollection *propertyCollection;
@property (nonatomic, readonly, copy) HKUserDomainConceptSemanticIdentifier *semanticIdentifier;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)_typeIdentifier;
+ (id)deletedUserDomainConceptWithUUID:(id)arg1 creationTimestamp:(double)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUID;
- (id)_dataDescription;
- (id)_deepCopy;
- (id)_firstCodingForSystem:(id)arg1;
- (id)_init;
- (id)_initBareObject;
- (void)_setBuild:(id)arg1;
- (void)_setCodingCollection:(id)arg1;
- (void)_setCreationTimestamp:(double)arg1;
- (void)_setDeleted:(bool)arg1;
- (void)_setIdentifier:(id)arg1;
- (void)_setLinkCollection:(id)arg1;
- (void)_setModificationTimestamp:(double)arg1;
- (void)_setOperatingSystemVersion:(struct { long long x1; long long x2; long long x3; })arg1;
- (void)_setPropertyCollection:(id)arg1;
- (void)_setUUID:(id)arg1;
- (id)build;
- (bool)canRequestSyncUponInsertion;
- (id)codingCollection;
- (id)copyUserDomainConceptByMergingInConcept:(id)arg1;
- (id)copyUserDomainConceptByMergingInPropertyCollection:(id)arg1;
- (id)copyUserDomainConceptBySettingProperties:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (double)creationTimestamp;
- (id)deletedUserDomainConcept;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)firstAdhocCoding;
- (id)firstConceptIdentifier;
- (id)firstOntologyCoding;
- (unsigned long long)hash;
- (long long)healthd_use_only_syncEntityIdentity;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithCodingCollection:(id)arg1 linkCollection:(id)arg2 propertyCollection:(id)arg3;
- (bool)isAdHocUserDomainConcept;
- (bool)isDeleted;
- (bool)isEqual:(id)arg1;
- (bool)isSemanticallyEquivalent:(id)arg1;
- (id)linkCollection;
- (id)modificationCopy;
- (id)modificationDate;
- (double)modificationTimestamp;
- (struct { long long x1; long long x2; long long x3; })operatingSystemVersion;
- (id)propertyCollection;
- (id)semanticIdentifier;
- (void)setHealthd_use_only_syncEntityIdentity:(long long)arg1;
- (id)unitTesting_duplicate;
- (bool)unitTesting_isIdentical:(id)arg1;
- (bool)unitTesting_isIdentical:(id)arg1 ignoreModificationTimestamp:(bool)arg2;
- (id)userDomainConceptByAddingCodings:(id)arg1;
- (id)userDomainConceptByReplacingCodings:(id)arg1;
- (id)userDomainConceptByReplacingLinks:(id)arg1;
- (id)userDomainConceptByReplacingLinks:(id)arg1 andCodings:(id)arg2;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)createWithCodableConcept:(id)arg1 profile:(id)arg2;

- (void)applyCodableSubclassData:(id)arg1 mutableUserDomainConceptProperties:(id)arg2;
- (id)codableRepresentationForSyncWithProfile:(id)arg1;
- (id)codableSubclassData;
- (long long)hd_syncEntityIdentity;

@end


@interface HKVerifiableClinicalRecord : HKSample {
    NSData * _JWSRepresentation;
    NSData * _dataRepresentation;
    NSDate * _expirationDate;
    NSDate * _issuedDate;
    NSString * _issuerIdentifier;
    NSArray * _itemNames;
    NSUUID * _originIdentifier;
    NSArray * _recordTypes;
    NSDate * _relevantDate;
    NSString * _sourceType;
    HKVerifiableClinicalRecordSubject * _subject;
}

@property (readonly, copy) NSData *JWSRepresentation;
@property (readonly, copy) NSData *dataRepresentation;
@property (readonly, copy) NSDate *expirationDate;
@property (readonly, copy) NSDate *issuedDate;
@property (readonly, copy) NSString *issuerIdentifier;
@property (readonly, copy) NSArray *itemNames;
@property (nonatomic, readonly, copy) NSUUID *originIdentifier;
@property (nonatomic, readonly, copy) NSString *recordIssuerDisplayName;
@property (nonatomic, readonly, copy) NSString *recordItemsDisplayName;
@property (nonatomic, readonly, copy) NSString *recordTypeDisplayName;
@property (readonly, copy) NSArray *recordTypes;
@property (readonly, copy) NSDate *relevantDate;
@property (readonly, copy) NSString *sourceType;
@property (readonly, copy) HKVerifiableClinicalRecordSubject *subject;
@property (nonatomic, readonly, copy) HKVerifiableClinicalRecordType *verifiableClinicalRecordType;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (bool)_isConcreteObjectClass;
+ (long long)_privateSourceTypeForExternalType:(id)arg1;
+ (id)sourceTypeForInternalType:(long long)arg1;
+ (bool)supportsEquivalence;
+ (bool)supportsSecureCoding;
+ (id)verifiableClinicalRecordWithType:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 device:(id)arg4 metadata:(id)arg5 recordTypes:(id)arg6 issuedDate:(id)arg7 relevantDate:(id)arg8 expirationDate:(id)arg9 issuerIdentifier:(id)arg10 subject:(id)arg11 itemNames:(id)arg12 dataRepresentation:(id)arg13 originIdentifier:(id)arg14 sourceType:(long long)arg15;

- (void).cxx_destruct;
- (id)JWSRepresentation;
- (void)_setDataRepresentation:(id)arg1;
- (void)_setExpirationDate:(id)arg1;
- (void)_setIssuedDate:(id)arg1;
- (void)_setIssuerIdentifier:(id)arg1;
- (void)_setItemNames:(id)arg1;
- (void)_setOriginIdentifier:(id)arg1;
- (void)_setRecordTypes:(id)arg1;
- (void)_setRelevantDate:(id)arg1;
- (void)_setSourceType:(long long)arg1;
- (void)_setSubject:(id)arg1;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x1; unsigned int x2; })arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataRepresentation;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEquivalent:(id)arg1;
- (id)issuedDate;
- (id)issuerIdentifier;
- (id)itemNames;
- (id)originIdentifier;
- (id)recordIssuerDisplayName;
- (id)recordItemsDisplayName;
- (id)recordTypeDisplayName;
- (id)recordTypes;
- (id)relevantDate;
- (id)sourceType;
- (id)subject;
- (id)verifiableClinicalRecordType;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (Class)hd_dataEntityClass;

@end

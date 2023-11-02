
@interface HKSignedClinicalDataRecord : HKMedicalRecord <HKConceptIndexable, NSCopying, NSSecureCoding> {
    NSArray * _credentialTypes;
    NSData * _dataValue;
    NSDate * _expirationDate;
    NSDate * _issuedDate;
    NSString * _issuerIdentifier;
    NSArray * _items;
    NSDate * _relevantDate;
    long long  _signatureStatus;
    long long  _sourceType;
    HKSignedClinicalDataSubject * _subject;
}

@property (readonly) NSUUID *UUID;
@property (nonatomic, readonly, copy) NSString *country;
@property (readonly, copy) NSArray *credentialTypes;
@property (readonly, copy) NSData *dataValue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSDate *expirationDate;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSDate *issuedDate;
@property (readonly, copy) NSString *issuerIdentifier;
@property (readonly, copy) NSArray *items;
@property (nonatomic, readonly, copy) NSLocale *locale;
@property (nonatomic, readonly) long long recordCategoryType;
@property (nonatomic, readonly, copy) NSString *recordIssuerDisplayName;
@property (nonatomic, readonly, copy) NSString *recordItemsDisplayName;
@property (nonatomic, readonly, copy) NSString *recordTypeDisplayName;
@property (readonly, copy) NSDate *relevantDate;
@property (nonatomic, readonly) bool shouldReverifySignature;
@property (readonly) long long signatureStatus;
@property (readonly, copy) HKSignedClinicalDataRecordType *signedClinicalDataRecordType;
@property (readonly) long long sourceType;
@property (readonly, copy) HKSignedClinicalDataSubject *subject;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (bool)_isConcreteObjectClass;
+ (id)_newSignedClinicalDataRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(bool)arg3 modifiedDate:(id)arg4 originIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 country:(id)arg11 state:(unsigned long long)arg12 credentialTypes:(id)arg13 issuerIdentifier:(id)arg14 issuedDate:(id)arg15 relevantDate:(id)arg16 expirationDate:(id)arg17 signatureStatus:(long long)arg18 subject:(id)arg19 items:(id)arg20 dataValue:(id)arg21 sourceType:(long long)arg22 config:(id /* block */)arg23;
+ (id)cachedConceptRelationshipKeyPaths;
+ (id)indexableConceptKeyPaths;
+ (id)signedClinicalDataRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(bool)arg3 modifiedDate:(id)arg4 originIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 country:(id)arg10 state:(unsigned long long)arg11 credentialTypes:(id)arg12 issuerIdentifier:(id)arg13 issuedDate:(id)arg14 relevantDate:(id)arg15 expirationDate:(id)arg16 signatureStatus:(long long)arg17 subject:(id)arg18 items:(id)arg19 dataValue:(id)arg20 sourceType:(long long)arg21;
+ (id)signedClinicalDataRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(bool)arg3 modifiedDate:(id)arg4 originIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 country:(id)arg11 state:(unsigned long long)arg12 credentialTypes:(id)arg13 issuerIdentifier:(id)arg14 issuedDate:(id)arg15 relevantDate:(id)arg16 expirationDate:(id)arg17 signatureStatus:(long long)arg18 subject:(id)arg19 items:(id)arg20 dataValue:(id)arg21 sourceType:(long long)arg22;
+ (bool)supportsEquivalence;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_setCredentialTypes:(id)arg1;
- (void)_setDataValue:(id)arg1;
- (void)_setExpirationDate:(id)arg1;
- (void)_setIssuedDate:(id)arg1;
- (void)_setIssuerIdentifier:(id)arg1;
- (void)_setItems:(id)arg1;
- (void)_setRelevantDate:(id)arg1;
- (void)_setSignatureStatus:(long long)arg1;
- (void)_setSourceType:(long long)arg1;
- (void)_setSubject:(id)arg1;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x1; unsigned int x2; })arg1;
- (bool)applyConcepts:(id)arg1 forKeyPath:(id)arg2 error:(id*)arg3;
- (id)codingsForKeyPath:(id)arg1 error:(id*)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)credentialTypes;
- (id)dataValue;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEquivalent:(id)arg1;
- (id)issuedDate;
- (id)issuerIdentifier;
- (id)items;
- (id)recordIssuerDisplayName;
- (id)recordItemsDisplayName;
- (id)recordTypeDisplayName;
- (id)relevantDate;
- (long long)signatureStatus;
- (id)signedClinicalDataRecordType;
- (long long)sourceType;
- (id)subject;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (Class)hd_dataEntityClass;

// Image: /System/Library/PrivateFrameworks/HealthRecordServices.framework/HealthRecordServices

- (id)copyWithItems:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI

- (bool)shouldReverifySignature;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

- (id)expiredAttributedString;
- (bool)isExpired;
- (id)issuerDisplayStringWithSignatureStatusGlyph;
- (id)signatureStatusDisplayString;
- (id)sortDateTitle;

@end

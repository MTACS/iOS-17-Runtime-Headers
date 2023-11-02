
@interface HKMedicalRecord : HKSample <HKCodedSample, HKConceptIndexable, HKMedicalRecordCodings, HRWDDisplayable, NSCopying, NSSecureCoding> {
    NSString * _country;
    bool  _enteredInError;
    long long  _extractionVersion;
    NSLocale * _locale;
    NSDate * _modifiedDate;
    NSString * _note;
    HKMedicalRecordOriginIdentifier * _originIdentifier;
    HKConcept * _primaryConcept;
    HKSemanticDate * _sortDate;
    unsigned long long  _state;
}

@property (nonatomic, readonly, copy) HKFHIRIdentifier *FHIRIdentifier;
@property (readonly) NSUUID *UUID;
@property (nonatomic, readonly) bool canDefineConceptRoom;
@property (nonatomic, readonly) NSArray *conceptNameItems;
@property (nonatomic, readonly, copy) NSString *country;
@property (nonatomic, retain) NSString *country;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *displayNameForGroupByConcept;
@property (readonly) NSDate *endDate;
@property (nonatomic, readonly) bool enteredInError;
@property (nonatomic, readonly) long long extractionVersion;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isDateLess;
@property (nonatomic, readonly) bool isDisplayable;
@property (nonatomic, readonly) bool isRemovedFromRemote;
@property (nonatomic, readonly, copy) NSLocale *locale;
@property (nonatomic, readonly) NSDate *meaningfulDate;
@property (nonatomic, readonly) NSString *meaningfulDateString;
@property (nonatomic, readonly) NSString *meaningfulDateTitle;
@property (nonatomic, readonly) NSArray *medicalRecordCodings;
@property (nonatomic, readonly) unsigned long long medicalRecordOriginType;
@property (nonatomic, readonly, copy) HKMedicalType *medicalType;
@property (nonatomic, readonly, copy) NSDate *modifiedDate;
@property (nonatomic, readonly, copy) NSString *note;
@property (nonatomic, readonly, copy) HKMedicalRecordOriginIdentifier *originIdentifier;
@property (nonatomic, readonly) NSString *preferredDisplayName;
@property (nonatomic, readonly) HKConcept *primaryConcept;
@property (nonatomic, readonly) long long recordCategoryType;
@property (nonatomic, readonly, copy) HKSemanticDate *sortDate;
@property (readonly) NSDate *startDate;
@property (nonatomic, readonly) unsigned long long state;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly) NSString *titleDisplayStringForDetailViewController;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (bool)_isConcreteObjectClass;
+ (id)_newMedicalRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(bool)arg3 modifiedDate:(id)arg4 originIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 country:(id)arg11 state:(unsigned long long)arg12 config:(id /* block */)arg13;
+ (id)_sortDateIntervalFromStartDateComponents:(id)arg1 endDateComponents:(id)arg2 error:(out id*)arg3;
+ (id)cachedConceptRelationshipKeyPaths;
+ (id)defaultDisplayString;
+ (bool)groupsByUserDomainConcept;
+ (id)indexableConceptKeyPaths;
+ (id)indexableKeyPathsWithPrefix:(id)arg1;
+ (bool)supportsEquivalence;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)FHIRIdentifier;
- (id)_init;
- (void)_setCountry:(id)arg1;
- (void)_setEnteredInError:(bool)arg1;
- (void)_setExtractionVersion:(long long)arg1;
- (void)_setLocale:(id)arg1;
- (void)_setModifiedDate:(id)arg1;
- (void)_setNote:(id)arg1;
- (void)_setOriginIdentifier:(id)arg1;
- (void)_setPrimaryConcept:(id)arg1;
- (void)_setSortDate:(id)arg1;
- (void)_setState:(unsigned long long)arg1;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x1; unsigned int x2; })arg1;
- (bool)applyConcepts:(id)arg1 forKeyPath:(id)arg2 error:(id*)arg3;
- (id)attachmentObjectIdentifier;
- (id)attachmentSchemaIdentifier;
- (id)codingsForKeyPath:(id)arg1 error:(id*)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)country;
- (void)encodeWithCoder:(id)arg1;
- (bool)enteredInError;
- (long long)extractionVersion;
- (id)fallbackDisplayString;
- (id)initWithCoder:(id)arg1;
- (bool)isEquivalent:(id)arg1;
- (id)locale;
- (id)medicalRecordCodings;
- (unsigned long long)medicalRecordOriginType;
- (id)medicalType;
- (id)modifiedDate;
- (id)note;
- (id)originIdentifier;
- (id)primaryConcept;
- (long long)recordCategoryType;
- (void)setCountry:(id)arg1;
- (id)sortDate;
- (unsigned long long)state;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (Class)hd_dataEntityClass;

- (bool)hd_insertRelatedDataWithPersistentID:(id)arg1 insertionContext:(id)arg2 profile:(id)arg3 transaction:(id)arg4 error:(id*)arg5;
- (id)uniqueIdentifierForDistinctByKeyPath:(id)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/HealthRecordsDaemon.framework/HealthRecordsDaemon

- (id)chartableCodedQuantitySet;

// Image: /System/Library/PrivateFrameworks/HealthRecordsExtraction.framework/HealthRecordsExtraction

- (id)asSignedClinicalDataItem;

// Image: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI

- (bool)canDefineConceptRoom;
- (id)chartableCodedQuantitySet;
- (id)codings;
- (id)conceptNameItems;
- (id)displayNameForGroupByConcept;
- (void)fetchAttachmentItemsWithHealthRecordsStore:(id)arg1 conceptStore:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchChartValueWithRangeWithHealthStore:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchConceptRoomItemsWithHealthRecordsStore:(id)arg1 conceptStore:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchDetailItemsWithHealthRecordsStore:(id)arg1 conceptStore:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchDisplayNameItemWithHealthRecordsStore:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchObservationDetailItemsWithHealthRecordsStore:(id)arg1 style:(long long)arg2 completion:(id /* block */)arg3;
- (void)fetchStructuredFieldItemsWithHealthRecordsStore:(id)arg1 conceptStore:(id)arg2 completion:(id /* block */)arg3;
- (bool)isDateLess;
- (bool)isDisplayable;
- (bool)isRemovedFromRemote;
- (id)meaningfulDate;
- (id)meaningfulDateDisplayStringWithPreferredForm:(long long)arg1 showTime:(bool)arg2;
- (id)meaningfulDateString;
- (id)meaningfulDateTitle;
- (id)preferredDisplayName;
- (id)sortDateTitle;
- (id)subtitle;
- (id)title;
- (id)titleDisplayStringForDetailViewController;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

- (id)displayItems;
- (id)displayName;
- (bool)isDateLess;
- (id)localizedStatusDisplayString;
- (id)recordItem;
- (id)statusItem;

@end

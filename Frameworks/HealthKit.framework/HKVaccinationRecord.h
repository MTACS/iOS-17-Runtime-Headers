
@interface HKVaccinationRecord : HKMedicalRecord <HKConceptIndexable, NSCopying, NSSecureCoding> {
    HKMedicalDate * _administrationDate;
    HKConcept * _bodySite;
    NSArray * _bodySiteCodings;
    NSString * _doseNumber;
    NSString * _doseQuantity;
    HKMedicalDate * _expirationDate;
    NSString * _lotNumber;
    bool  _notGiven;
    bool  _patientReported;
    NSString * _performer;
    NSString * _reaction;
    NSArray * _reasons;
    NSArray * _reasonsCodings;
    NSArray * _reasonsNotGiven;
    NSArray * _reasonsNotGivenCodings;
    HKConcept * _route;
    NSArray * _routeCodings;
    HKConcept * _status;
    HKMedicalCoding * _statusCoding;
    HKConcept * _vaccination;
    NSArray * _vaccinationCodings;
}

@property (readonly) NSUUID *UUID;
@property (readonly, copy) HKMedicalDate *administrationDate;
@property (readonly, copy) HKConcept *bodySite;
@property (readonly, copy) NSArray *bodySiteCodings;
@property (nonatomic, readonly, copy) NSString *country;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *doseNumber;
@property (readonly, copy) NSString *doseQuantity;
@property (readonly, copy) HKMedicalDate *expirationDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSLocale *locale;
@property (readonly, copy) NSString *lotNumber;
@property (readonly) bool notGiven;
@property (readonly) bool patientReported;
@property (readonly, copy) NSString *performer;
@property (readonly, copy) NSString *reaction;
@property (readonly, copy) NSArray *reasons;
@property (readonly, copy) NSArray *reasonsCodings;
@property (readonly, copy) NSArray *reasonsNotGiven;
@property (readonly, copy) NSArray *reasonsNotGivenCodings;
@property (nonatomic, readonly) long long recordCategoryType;
@property (readonly, copy) HKConcept *route;
@property (readonly, copy) NSArray *routeCodings;
@property (readonly, copy) HKConcept *status;
@property (readonly, copy) HKMedicalCoding *statusCoding;
@property (readonly) Class superclass;
@property (readonly, copy) HKConcept *vaccination;
@property (readonly, copy) NSArray *vaccinationCodings;
@property (readonly, copy) HKVaccinationRecordType *vaccinationRecordType;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (bool)_isConcreteObjectClass;
+ (id)_newVaccinationRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(bool)arg3 modifiedDate:(id)arg4 originIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 country:(id)arg11 state:(unsigned long long)arg12 vaccinationCodings:(id)arg13 expirationDate:(id)arg14 doseNumber:(id)arg15 doseQuantity:(id)arg16 lotNumber:(id)arg17 performer:(id)arg18 bodySiteCodings:(id)arg19 reaction:(id)arg20 notGiven:(bool)arg21 administrationDate:(id)arg22 statusCoding:(id)arg23 patientReported:(bool)arg24 routeCodings:(id)arg25 reasonsCodings:(id)arg26 reasonsNotGivenCodings:(id)arg27 config:(id /* block */)arg28;
+ (id)cachedConceptRelationshipKeyPaths;
+ (id)defaultDisplayString;
+ (bool)groupsByUserDomainConcept;
+ (id)indexableConceptKeyPaths;
+ (bool)supportsEquivalence;
+ (bool)supportsSecureCoding;
+ (id)vaccinationRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(bool)arg3 modifiedDate:(id)arg4 originIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 country:(id)arg10 state:(unsigned long long)arg11 vaccinationCodings:(id)arg12 expirationDate:(id)arg13 doseNumber:(id)arg14 doseQuantity:(id)arg15 lotNumber:(id)arg16 performer:(id)arg17 bodySiteCodings:(id)arg18 reaction:(id)arg19 notGiven:(bool)arg20 administrationDate:(id)arg21 statusCoding:(id)arg22 patientReported:(bool)arg23 routeCodings:(id)arg24 reasonsCodings:(id)arg25 reasonsNotGivenCodings:(id)arg26;
+ (id)vaccinationRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(bool)arg3 modifiedDate:(id)arg4 originIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 country:(id)arg11 state:(unsigned long long)arg12 vaccinationCodings:(id)arg13 expirationDate:(id)arg14 doseNumber:(id)arg15 doseQuantity:(id)arg16 lotNumber:(id)arg17 performer:(id)arg18 bodySiteCodings:(id)arg19 reaction:(id)arg20 notGiven:(bool)arg21 administrationDate:(id)arg22 statusCoding:(id)arg23 patientReported:(bool)arg24 routeCodings:(id)arg25 reasonsCodings:(id)arg26 reasonsNotGivenCodings:(id)arg27;

- (void).cxx_destruct;
- (void)_setAdministrationDate:(id)arg1;
- (void)_setBodySite:(id)arg1;
- (void)_setBodySiteCodings:(id)arg1;
- (void)_setDoseNumber:(id)arg1;
- (void)_setDoseQuantity:(id)arg1;
- (void)_setExpirationDate:(id)arg1;
- (void)_setLotNumber:(id)arg1;
- (void)_setNotGiven:(bool)arg1;
- (void)_setPatientReported:(bool)arg1;
- (void)_setPerformer:(id)arg1;
- (void)_setReaction:(id)arg1;
- (void)_setReasons:(id)arg1;
- (void)_setReasonsCodings:(id)arg1;
- (void)_setReasonsNotGiven:(id)arg1;
- (void)_setReasonsNotGivenCodings:(id)arg1;
- (void)_setRoute:(id)arg1;
- (void)_setRouteCodings:(id)arg1;
- (void)_setStatus:(id)arg1;
- (void)_setStatusCoding:(id)arg1;
- (void)_setVaccination:(id)arg1;
- (void)_setVaccinationCodings:(id)arg1;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x1; unsigned int x2; })arg1;
- (id)administrationDate;
- (bool)applyConcepts:(id)arg1 forKeyPath:(id)arg2 error:(id*)arg3;
- (id)bodySite;
- (id)bodySiteCodings;
- (id)bodySiteCodingsCollection;
- (id)codingsForKeyPath:(id)arg1 error:(id*)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)doseNumber;
- (id)doseQuantity;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEquivalent:(id)arg1;
- (id)lotNumber;
- (id)medicalRecordCodings;
- (bool)notGiven;
- (bool)patientReported;
- (id)performer;
- (id)reaction;
- (id)reasons;
- (id)reasonsCodings;
- (id)reasonsCodingsCollections;
- (id)reasonsNotGiven;
- (id)reasonsNotGivenCodings;
- (id)reasonsNotGivenCodingsCollections;
- (long long)recordCategoryType;
- (id)route;
- (id)routeCodings;
- (id)routeCodingsCollection;
- (id)status;
- (id)statusCoding;
- (id)statusCodingCollection;
- (id)vaccination;
- (id)vaccinationCodings;
- (id)vaccinationCodingsCollection;
- (id)vaccinationRecordType;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (Class)hd_dataEntityClass;

// Image: /System/Library/PrivateFrameworks/HealthRecordsExtraction.framework/HealthRecordsExtraction

+ (id)medicalRecordFromClinicalItem:(id)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI

- (id)codings;
- (id)meaningfulDateTitle;
- (id)title;
- (id)titleDisplayStringForDetailViewController;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

- (id)displayItems;
- (id)localizedStatusDisplayString;
- (id)lotNumberItem;
- (id)performerItem;
- (id)sortDateTitle;

@end


@interface HKMedicationUserDomainConceptSemanticIdentifier : HKUserDomainConceptSemanticIdentifier {
    NSUUID * _UUID;
    HKMedicalCoding * _medicalCoding;
}

@property (nonatomic, readonly, copy) NSUUID *UUID;
@property (nonatomic, readonly, copy) HKMedicalCoding *medicalCoding;

+ (id)semanticIdentifierWithComponents:(id)arg1;

- (void).cxx_destruct;
- (id)UUID;
- (id)init;
- (id)initWithTypeIdentifier:(id)arg1;
- (id)initWithUUID:(id)arg1 medicalCoding:(id)arg2;
- (id)medicalCoding;
- (id)stringValue;

@end

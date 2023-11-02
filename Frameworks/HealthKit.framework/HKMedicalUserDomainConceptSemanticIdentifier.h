
@interface HKMedicalUserDomainConceptSemanticIdentifier : HKUserDomainConceptSemanticIdentifier {
    NSUUID * _UUID;
    NSString * _countryCode;
    HKMedicalCoding * _medicalCoding;
}

@property (nonatomic, readonly, copy) NSUUID *UUID;
@property (nonatomic, readonly, copy) NSString *countryCode;
@property (nonatomic, readonly, copy) HKMedicalCoding *medicalCoding;

+ (id)semanticIdentifierWithComponents:(id)arg1;

- (void).cxx_destruct;
- (id)UUID;
- (id)countryCode;
- (id)init;
- (id)initWithTypeIdentifier:(id)arg1;
- (id)initWithUUID:(id)arg1 countryCode:(id)arg2 medicalCoding:(id)arg3;
- (id)medicalCoding;
- (id)stringValue;

@end

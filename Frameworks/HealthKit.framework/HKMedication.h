
@interface HKMedication : NSObject <NSCopying, NSSecureCoding> {
    HKClinicalCodingCollection * _codingCollection;
    NSArray * _components;
    HKMedicationDisplayNameComponents * _displayNameComponents;
    HKMedicationIdentifier * _identifier;
    HKMedicationLoggingUnit * _loggingUnit;
}

@property (nonatomic, readonly, copy) HKClinicalCodingCollection *codingCollection;
@property (nonatomic, readonly, copy) NSArray *components;
@property (nonatomic, readonly, copy) HKMedicationDisplayNameComponents *displayNameComponents;
@property (nonatomic, readonly, copy) HKMedicationIdentifier *identifier;
@property (nonatomic, readonly, copy) HKMedicationLoggingUnit *loggingUnit;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)codingCollection;
- (id)components;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)displayNameComponents;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 displayNameComponents:(id)arg2 loggingUnit:(id)arg3 components:(id)arg4 codingCollection:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)loggingUnit;

@end

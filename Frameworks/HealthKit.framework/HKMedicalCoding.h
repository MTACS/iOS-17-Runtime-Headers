
@interface HKMedicalCoding : NSObject <HDCoding, NSCopying, NSSecureCoding> {
    NSString * _code;
    HKMedicalCodingSystem * _codingSystem;
    NSString * _codingVersion;
    NSString * _displayString;
}

@property (nonatomic, readonly, copy) NSString *code;
@property (nonatomic, readonly, copy) HKMedicalCodingSystem *codingSystem;
@property (nonatomic, readonly, copy) NSString *codingVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *displayString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)ICD10CodingWithCode:(id)arg1;
+ (id)ICD10CodingWithCode:(id)arg1 displayString:(id)arg2;
+ (id)ICD9CodingWithCode:(id)arg1;
+ (id)ICD9CodingWithCode:(id)arg1 displayString:(id)arg2;
+ (id)LOINCCodingWithCode:(id)arg1;
+ (id)LOINCCodingWithCode:(id)arg1 displayString:(id)arg2;
+ (id)RxNormCodingWithCode:(id)arg1;
+ (id)RxNormCodingWithCode:(id)arg1 displayString:(id)arg2;
+ (id)SNOMEDCodingWithCode:(id)arg1;
+ (id)SNOMEDCodingWithCode:(id)arg1 displayString:(id)arg2;
+ (id)appleOntologyCodingWithIdentifier:(id)arg1;
+ (id)appleOntologyCodingWithRawIdentifier:(long long)arg1;
+ (id)loinc_diastolicBloodPressureCoding;
+ (id)loinc_systolicBloodPressureCoding;
+ (id)medicalCodingWithSystem:(id)arg1 codingVersion:(id)arg2 code:(id)arg3 displayString:(id)arg4;
+ (bool)supportsSecureCoding;
+ (id)text_codingWithDisplayString:(id)arg1;
+ (id)ucum_centimeterUnitCoding;
+ (id)ucum_codingWithCode:(id)arg1 displayString:(id)arg2;
+ (id)ucum_meterUnitCoding;

- (void).cxx_destruct;
- (id)_validateConfiguration;
- (id)code;
- (id)codingSystem;
- (id)codingVersion;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)displayString;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithCodingSystem:(id)arg1 codingVersion:(id)arg2 code:(id)arg3 displayString:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEquivalent:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)createWithCodable:(id)arg1;

- (id)codableRepresentationForSync;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

- (id)formattedDescription;
- (id)formattedTitle;

@end

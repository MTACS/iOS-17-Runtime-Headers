
@interface HKUserDomainConceptTypeIdentifier : NSObject <HDCoding, NSCopying, NSSecureCoding> {
    long long  _code;
    NSString * _schema;
}

@property (nonatomic, readonly) long long code;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *schema;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)baseUserDomainConceptIdentifier;
+ (id)listUserDomainConceptIdentifier;
+ (id)medicalUserDomainConceptIdentifier;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)code;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCode:(long long)arg1 schema:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)schema;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)createWithCodable:(id)arg1;

- (id)codableRepresentationForSync;

// Image: /System/Library/PrivateFrameworks/HealthMedications.framework/HealthMedications

+ (id)medicationUserDomainConceptTypeIdentifier;

- (bool)isMedicationTypeIdentifier;

@end

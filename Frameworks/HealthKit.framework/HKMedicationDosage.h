
@interface HKMedicationDosage : NSObject <HKCodedObject, NSCopying, NSSecureCoding> {
    NSString * _instruction;
    HKConcept * _method;
    HKMedicalCoding * _methodCoding;
    HKConcept * _route;
    HKMedicalCoding * _routeCoding;
    HKConcept * _site;
    HKMedicalCoding * _siteCoding;
    HKMedicalDateInterval * _timingPeriod;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *instruction;
@property (nonatomic, readonly, copy) HKConcept *method;
@property (nonatomic, readonly, copy) HKMedicalCoding *methodCoding;
@property (nonatomic, readonly, copy) HKConcept *route;
@property (nonatomic, readonly, copy) HKMedicalCoding *routeCoding;
@property (nonatomic, readonly, copy) HKConcept *site;
@property (nonatomic, readonly, copy) HKMedicalCoding *siteCoding;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) HKMedicalDateInterval *timingPeriod;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)dosageWithInstruction:(id)arg1 timingPeriod:(id)arg2;
+ (id)dosageWithInstruction:(id)arg1 timingPeriod:(id)arg2 siteCoding:(id)arg3 routeCoding:(id)arg4 methodCoding:(id)arg5;
+ (id)indexableKeyPathsWithPrefix:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_methodCodingCollection;
- (id)_routeCodingCollection;
- (void)_setMethodCoding:(id)arg1;
- (void)_setRouteCoding:(id)arg1;
- (void)_setSiteCoding:(id)arg1;
- (id)_siteCodingCollection;
- (bool)applyConcepts:(id)arg1 forKeyPath:(id)arg2 error:(id*)arg3;
- (id)codingsForKeyPath:(id)arg1 error:(id*)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithInstruction:(id)arg1 timingPeriod:(id)arg2 siteCoding:(id)arg3 routeCoding:(id)arg4 methodCoding:(id)arg5;
- (id)instruction;
- (bool)isEqual:(id)arg1;
- (id)method;
- (id)methodCoding;
- (id)route;
- (id)routeCoding;
- (id)site;
- (id)siteCoding;
- (id)timingPeriod;

// Image: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI

- (id)hr_dosageTimePeriodString;

@end


@interface HKMedicationDoseEvent : HKSample <HDCoding, NSCopying, NSSecureCoding> {
    NSNumber * _doseQuantity;
    long long  _logOrigin;
    NSString * _medicationIdentifier;
    NSUUID * _medicationUUID;
    NSString * _scheduleItemIdentifier;
    NSDate * _scheduledDate;
    NSNumber * _scheduledDoseQuantity;
    long long  _status;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSNumber *doseQuantity;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long logOrigin;
@property (readonly, copy) HKMedicationDoseEventType *medicationDoseEventType;
@property (nonatomic, readonly, copy) NSString *medicationIdentifier;
@property (nonatomic, readonly, copy) NSUUID *medicationUUID;
@property (nonatomic, readonly, copy) NSString *scheduleItemIdentifier;
@property (nonatomic, readonly, copy) NSDate *scheduledDate;
@property (nonatomic, readonly, copy) NSNumber *scheduledDoseQuantity;
@property (nonatomic, readonly) long long status;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (bool)_isConcreteObjectClass;
+ (id)_newMedicationDoseEventWithType:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 device:(id)arg4 metadata:(id)arg5 logOrigin:(long long)arg6 scheduleItemIdentifier:(id)arg7 medicationUUID:(id)arg8 medicationIdentifier:(id)arg9 scheduledDoseQuantity:(id)arg10 doseQuantity:(id)arg11 scheduledDate:(id)arg12 status:(long long)arg13 config:(id /* block */)arg14;
+ (id)medicationDoseEventWithLogOrigin:(long long)arg1 scheduleItemIdentifier:(id)arg2 medicationIdentifier:(id)arg3 scheduledDoseQuantity:(id)arg4 doseQuantity:(id)arg5 scheduledDate:(id)arg6 startDate:(id)arg7 status:(long long)arg8 metadata:(id)arg9;
+ (id)medicationDoseEventWithType:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 device:(id)arg4 metadata:(id)arg5 logOrigin:(long long)arg6 scheduleItemIdentifier:(id)arg7 medicationIdentifier:(id)arg8 scheduledDoseQuantity:(double)arg9 doseQuantity:(double)arg10 scheduledDate:(id)arg11 status:(long long)arg12 medicationUuid:(id)arg13;
+ (bool)supportsEquivalence;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_setDoseQuantity:(id)arg1;
- (void)_setLogOrigin:(long long)arg1;
- (void)_setMedicationIdentifier:(id)arg1;
- (void)_setMedicationUUID:(id)arg1;
- (void)_setScheduleItemIdentifier:(id)arg1;
- (void)_setScheduledDate:(id)arg1;
- (void)_setScheduledDoseQuantity:(id)arg1;
- (void)_setStatus:(long long)arg1;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x1; unsigned int x2; })arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)doseQuantity;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEquivalent:(id)arg1;
- (long long)logOrigin;
- (id)medicationDoseEventType;
- (id)medicationIdentifier;
- (id)medicationUUID;
- (id)scheduleItemIdentifier;
- (id)scheduledDate;
- (id)scheduledDoseQuantity;
- (long long)status;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)createWithCodable:(id)arg1;
+ (Class)hd_dataEntityClass;

- (bool)addCodableRepresentationToCollection:(id)arg1;
- (id)codableRepresentationForSync;

// Image: /System/Library/PrivateFrameworks/HealthMedications.framework/HealthMedications

+ (id)syncIdentifierForScheduleItemIdentifier:(id)arg1 medicationIdentifier:(id)arg2;
+ (id)syncVersionForStatus:(long long)arg1;

@end

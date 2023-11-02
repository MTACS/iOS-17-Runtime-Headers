
@interface HKMedicationExposableDoseEvent : NSObject <NSCopying, NSSecureCoding> {
    NSNumber * _doseQuantity;
    long long  _logOrigin;
    HKMedicationIdentifier * _medicationIdentifier;
    NSUUID * _persistedUUID;
    NSString * _scheduleItemIdentifier;
    NSDate * _scheduledDate;
    NSNumber * _scheduledDoseQuantity;
    NSString * _semanticIdentifier;
    NSDate * _startDate;
    long long  _status;
}

@property (nonatomic, readonly, copy) NSNumber *doseQuantity;
@property (nonatomic, readonly) long long logOrigin;
@property (nonatomic, readonly, copy) HKMedicationIdentifier *medicationIdentifier;
@property (nonatomic, readonly, copy) NSUUID *persistedUUID;
@property (nonatomic, readonly, copy) NSString *scheduleItemIdentifier;
@property (nonatomic, readonly, copy) NSDate *scheduledDate;
@property (nonatomic, readonly, copy) NSNumber *scheduledDoseQuantity;
@property (nonatomic, readonly, copy) NSString *semanticIdentifier;
@property (nonatomic, readonly, copy) NSDate *startDate;
@property (nonatomic, readonly) long long status;

+ (id)asNeededExposableDoseEventForMedication:(id)arg1 doseQuantity:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithLogOrigin:(long long)arg1 scheduleItemIdentifier:(id)arg2 semanticIdentifier:(id)arg3 medicationIdentifier:(id)arg4 scheduledDoseQuantity:(id)arg5 doseQuantity:(id)arg6 scheduledDate:(id)arg7 startDate:(id)arg8 status:(long long)arg9 persistedUUID:(id)arg10;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)doseQuantity;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDoseEvent:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)logOrigin;
- (id)medicationIdentifier;
- (id)persistedUUID;
- (id)scheduleItemIdentifier;
- (id)scheduledDate;
- (id)scheduledDoseQuantity;
- (id)semanticIdentifier;
- (id)startDate;
- (long long)status;
- (id)updateForNewDoseQuantity:(id)arg1;
- (id)updateForNewStartDate:(id)arg1;
- (id)updateForNewStatus:(long long)arg1;
- (id)updateForSemanticIdentifier:(id)arg1;

@end

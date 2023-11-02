
@interface HKMedicationScheduleItemDose : NSObject <NSCopying, NSSecureCoding> {
    NSNumber * _dose;
    NSString * _medicationIdentifier;
    NSUUID * _scheduleUUID;
}

@property (nonatomic, readonly, copy) NSNumber *dose;
@property (nonatomic, readonly, copy) NSString *medicationIdentifier;
@property (nonatomic, readonly, copy) NSUUID *scheduleUUID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dose;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithScheduleUUID:(id)arg1 dose:(id)arg2 medicationIdentifier:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)medicationIdentifier;
- (id)scheduleUUID;

@end


@interface HDNotificationInstructionModifiedMedicationScheduleNotInDatabaseCriteria : HDNotificationInstructionCriteria {
    NSUUID * _UUID;
    NSDate * _modificationDate;
}

+ (id)criteriaIdentifier;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithMessageDictionary:(id)arg1;
- (id)initWithUUID:(id)arg1 modificationDate:(id)arg2;
- (bool)isEqual:(id)arg1;
- (long long)isValidWithDatabaseTransaction:(id)arg1 error:(id*)arg2;
- (id)messageDictionary;

@end

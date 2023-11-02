
@interface HDMedicationScheduleInsertOperation : HDJournalableOperation {
    NSArray * _schedules;
    long long  _syncIdentity;
    long long  _syncProvenance;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMedicationSchedules:(id)arg1 syncProvenance:(long long)arg2 syncIdentity:(long long)arg3;
- (bool)performWithProfile:(id)arg1 transaction:(id)arg2 error:(id*)arg3;

@end

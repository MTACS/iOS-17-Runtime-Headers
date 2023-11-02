
@interface HDInsertWorkoutZonesAssociationOperation : HDJournalableOperation {
    long long  _syncProvenance;
    NSArray * _workoutZoneAssociations;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCodableWorkoutZoneAssociations:(id)arg1 syncProvenance:(long long)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)performWithProfile:(id)arg1 transaction:(id)arg2 error:(id*)arg3;

@end

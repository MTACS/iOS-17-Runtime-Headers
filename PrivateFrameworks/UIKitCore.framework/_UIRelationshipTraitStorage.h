
@interface _UIRelationshipTraitStorage : _UITraitStorage {
    NSOrderedSet * _relationshipCandidates;
}

- (void).cxx_destruct;
- (id)_propertyDescriptionString;
- (void)addRecordWithTraitCollection:(id)arg1 addedObjects:(id)arg2 removedObjects:(id)arg3;
- (void)applyRecordsMatchingTraitCollection:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithObject:(id)arg1 keyPath:(id)arg2 relationshipCandidates:(id)arg3;

@end

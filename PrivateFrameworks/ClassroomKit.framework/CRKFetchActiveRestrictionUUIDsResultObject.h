
@interface CRKFetchActiveRestrictionUUIDsResultObject : CATTaskResultObject {
    NSSet * _activeRestrictionUUIDs;
}

@property (nonatomic, copy) NSSet *activeRestrictionUUIDs;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)activeRestrictionUUIDs;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setActiveRestrictionUUIDs:(id)arg1;

@end

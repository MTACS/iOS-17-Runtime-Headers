
@interface CNExternalUUIDContactPredicate : CNPredicate {
    NSArray * _externalUUIDs;
}

@property (nonatomic, readonly, copy) NSArray *externalUUIDs;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)externalUUIDs;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithExternalUUIDs:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)shortDebugDescription;

@end

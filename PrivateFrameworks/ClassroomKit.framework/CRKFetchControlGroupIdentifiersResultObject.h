
@interface CRKFetchControlGroupIdentifiersResultObject : CATTaskResultObject {
    NSArray * _groupIdentifiers;
}

@property (nonatomic, copy) NSArray *groupIdentifiers;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)groupIdentifiers;
- (id)initWithCoder:(id)arg1;
- (id)initWithGroupIdentifiers:(id)arg1;
- (void)setGroupIdentifiers:(id)arg1;

@end

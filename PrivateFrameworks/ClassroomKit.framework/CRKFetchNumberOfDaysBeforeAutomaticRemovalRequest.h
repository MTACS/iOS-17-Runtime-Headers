
@interface CRKFetchNumberOfDaysBeforeAutomaticRemovalRequest : CATTaskRequest {
    DMFControlGroupIdentifier * _groupIdentifier;
}

@property (nonatomic, retain) DMFControlGroupIdentifier *groupIdentifier;

+ (Class)allowlistedClassForResultObject;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)groupIdentifier;
- (id)initWithCoder:(id)arg1;
- (void)setGroupIdentifier:(id)arg1;

@end

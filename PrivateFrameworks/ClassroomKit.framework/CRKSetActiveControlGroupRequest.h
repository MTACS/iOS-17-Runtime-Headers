
@interface CRKSetActiveControlGroupRequest : CATTaskRequest {
    DMFControlGroupIdentifier * _groupIdentifier;
}

@property (nonatomic, copy) DMFControlGroupIdentifier *groupIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)groupIdentifier;
- (id)initWithCoder:(id)arg1;
- (void)setGroupIdentifier:(id)arg1;

@end

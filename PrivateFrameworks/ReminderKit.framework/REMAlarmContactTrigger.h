
@interface REMAlarmContactTrigger : REMAlarmTrigger <NSSecureCoding> {
    REMContactRepresentation * _contactRepresentation;
}

@property (nonatomic, readonly) REMContactRepresentation *contactRepresentation;

+ (id)cdEntityName;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_deepCopy;
- (id)contactRepresentation;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithContactRepresentation:(id)arg1;
- (id)initWithObjectID:(id)arg1 contactRepresentation:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isTemporal;

@end

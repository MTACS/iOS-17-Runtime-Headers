
@interface REMAssignmentsDataViewInvocationResult : REMStoreInvocationResult <NSSecureCoding> {
    NSSet * _assignments;
}

@property (nonatomic, readonly) NSSet *assignments;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)assignments;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAssignments:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end

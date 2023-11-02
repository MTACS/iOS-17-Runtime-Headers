
@interface CNiOSABContainersForTypePredicate : CNPredicate <CNiOSContainerPredicate> {
    long long  _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long type;

+ (bool)supportsSecureCoding;

- (struct __CFArray { }*)cn_copyContainersInAddressBook:(void*)arg1 error:(struct __CFError {}**)arg2;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)includesDisabledContainers;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1;
- (long long)type;

@end

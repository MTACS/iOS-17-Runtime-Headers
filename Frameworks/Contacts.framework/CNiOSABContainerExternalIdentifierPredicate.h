
@interface CNiOSABContainerExternalIdentifierPredicate : CNPredicate <CNiOSContainerPredicate> {
    NSString * _externalIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *externalIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (struct __CFArray { }*)cn_copyContainersInAddressBook:(void*)arg1 error:(struct __CFError {}**)arg2;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)externalIdentifier;
- (bool)includesDisabledContainers;
- (id)initWithCoder:(id)arg1;
- (id)initWithExternalIdentifier:(id)arg1;

@end

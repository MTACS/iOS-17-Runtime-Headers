
@interface CNiOSABLocalContainerPredicate : CNPredicate <CNiOSContainerPredicate> {
    bool  _includesDisabledContainer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool includesDisabledContainer;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (struct __CFArray { }*)cn_copyContainersInAddressBook:(void*)arg1 error:(struct __CFError {}**)arg2;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)includesDisabledContainer;
- (bool)includesDisabledContainers;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDisabledContainerIncluded:(bool)arg1;
- (id)initWithPredicate:(id)arg1;

@end

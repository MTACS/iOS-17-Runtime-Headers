
@protocol CNiOSContainerPredicate <NSObject>

@required

- (struct __CFArray { }*)cn_copyContainersInAddressBook:(void*)arg1 error:(struct __CFError {}**)arg2;
- (bool)includesDisabledContainers;

@end

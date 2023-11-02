
@interface CNiOSABEmailAddressContactPredicate : CNEmailAddressContactPredicate <CNiOSContactPredicate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)_inputsAreValid;
- (bool)_stringsAreNonEmpty:(id)arg1;
- (id)cn_ABQSLPredicateForAddressBook:(void*)arg1 fetchRequest:(id)arg2 error:(id*)arg3;
- (struct __CFArray { }*)cn_copyPeopleInAddressBook:(void*)arg1 fetchRequest:(id)arg2 matchInfos:(id*)arg3 environment:(id)arg4 error:(struct __CFError {}**)arg5;
- (bool)cn_supportsEncodedFetching;
- (bool)cn_supportsNativeBatchFetch;
- (bool)cn_supportsNativeSorting;

@end

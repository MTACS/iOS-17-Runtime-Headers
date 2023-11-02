
@protocol HKUserDomainConceptStoreServerInterface <NSObject>

@required

- (void)remote_createAndStoreUserDomainConceptWithConceptIdentifier:(void *)arg1 additionalProperties:(void *)arg2 userDomainConceptTypeIdentifier:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: HKConceptIdentifier *, NSArray *, HKUserDomainConceptTypeIdentifier *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HKUserDomainConcept *, NSError *, void*
- (void)remote_observeUserDomainConceptChanges:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_storeUserDomainConcepts:(void *)arg1 method:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSArray *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end

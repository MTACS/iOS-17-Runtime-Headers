
@interface CNiOSABPredicateRunner : NSObject

- (id)personPredicateWithNameLike:(id)arg1 inGroups:(id)arg2 sources:(id)arg3 addressBook:(void*)arg4;
- (id)personPredicateWithNameLike:(id)arg1 inSource:(id)arg2 addressBook:(void*)arg3;
- (void)searchPeopleWithPredicate:(id)arg1 sortOrder:(unsigned int)arg2 ranked:(bool)arg3 inAddressBook:(void*)arg4 withDelegate:(id)arg5;

@end

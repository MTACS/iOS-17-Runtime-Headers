
@interface CNiOSFetchExecution : NSObject

+ (void)_extractContacts:(id*)arg1 matchInfo:(id*)arg2 fromBlockResults:(id)arg3 containsNestedResults:(bool)arg4;
+ (id)contactsMatchingPredicates:(id)arg1 sortOrdering:(unsigned int)arg2 matchInfos:(id*)arg3 options:(unsigned long long)arg4 addressBook:(void*)arg5 environment:(id)arg6 error:(id*)arg7;
+ (id)contactsMatchingPredicates:(id)arg1 sortOrdering:(unsigned int)arg2 options:(unsigned long long)arg3 addressBook:(void*)arg4 progressiveResults:(id /* block */)arg5 completion:(id /* block */)arg6 environment:(id)arg7;

@end
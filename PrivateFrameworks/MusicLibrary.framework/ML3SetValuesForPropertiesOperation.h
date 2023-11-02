
@interface ML3SetValuesForPropertiesOperation : ML3DatabaseOperation

- (bool)_execute:(id*)arg1;
- (bool)_setValues:(id)arg1 forProperties:(id)arg2 withEntityClass:(Class)arg3 usingPersistentID:(long long)arg4 connection:(id)arg5 error:(id*)arg6;
- (unsigned long long)type;

@end

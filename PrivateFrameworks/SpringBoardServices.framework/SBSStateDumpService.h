
@interface SBSStateDumpService : SBSAbstractSystemService

- (void)disableRemoteStateDumpWithCompletion:(id /* block */)arg1;
- (void)enableRemoteStateDumpWithTimeout:(long long)arg1 completion:(id /* block */)arg2;
- (void)requestStateDump:(unsigned long long)arg1 withCompletion:(id /* block */)arg2;
- (void)writeStateDump:(unsigned long long)arg1 toTextFileAtPath:(id)arg2;

@end

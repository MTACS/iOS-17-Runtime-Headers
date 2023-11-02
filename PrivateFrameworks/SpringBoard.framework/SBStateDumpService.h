
@interface SBStateDumpService : NSObject <SBSystemServiceServerStateDumpDelegate> {
    FBServiceClientAuthenticator * _clientAuthenticator;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_authenticateClient:(id)arg1;
- (id)init;
- (void)systemServiceServer:(id)arg1 client:(id)arg2 disableRemoteStateDumpWithCompletion:(id /* block */)arg3;
- (void)systemServiceServer:(id)arg1 client:(id)arg2 enableRemoteStateDumpWithTimeout:(long long)arg3 completion:(id /* block */)arg4;
- (void)systemServiceServer:(id)arg1 client:(id)arg2 requestStateDump:(unsigned long long)arg3 toTextFileAtPath:(id)arg4;
- (void)systemServiceServer:(id)arg1 client:(id)arg2 requestStateDump:(unsigned long long)arg3 withCompletion:(id /* block */)arg4;

@end

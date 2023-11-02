
@interface SMBClientManager : LiveFSClient

+ (id)newManager;

- (void)addSMBServerOrShare:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)addVolume:(id)arg1 atServer:(id)arg2 credentialType:(long long)arg3 credential:(id)arg4;
- (void)addVolumes:(id)arg1 atServer:(id)arg2 credentialType:(long long)arg3 credential:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)credentialTypesForServer:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)forgetVolume:(id)arg1;
- (void)forgetVolume:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)forgetVolume:(id)arg1 withFlags:(unsigned int)arg2 completionHandler:(id /* block */)arg3;
- (void)listenerForVolume:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)listenerForVolume:(id)arg1 error:(id*)arg2;
- (void)mountsFromServer:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)sharesAtServer:(id)arg1 credentialType:(long long)arg2 credential:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)sharesAtServer:(id)arg1 credentialType:(long long)arg2 credential:(id)arg3 error:(id*)arg4;
- (id)volumes:(id*)arg1;
- (void)volumesWithCompletionHandler:(id /* block */)arg1;

@end

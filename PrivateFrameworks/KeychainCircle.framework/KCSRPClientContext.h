
@interface KCSRPClientContext : KCSRPContext

- (id)copyResposeToChallenge:(id)arg1 password:(id)arg2 salt:(id)arg3 error:(id*)arg4;
- (id)copyStart:(id*)arg1;
- (bool)verifyConfirmation:(id)arg1 error:(id*)arg2;

@end

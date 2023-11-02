
@interface SPRAttestationManager : SPRObject

- (bool)attestWithCheckpoint:(long long)arg1 error:(id*)arg2;
- (id)getToken;
- (bool)isValidToken:(id)arg1;
- (bool)ping;
- (bool)refreshAndReturnError:(id*)arg1;
- (id)requestTokenAndReturnError:(id*)arg1;
- (bool)start;
- (bool)startWithMinimum:(double)arg1 maximum:(double)arg2 error:(id*)arg3;
- (bool)stop;
- (bool)verify;
- (bool)verifyWithRenewalPeriod:(double)arg1;

@end


@protocol SMTTRPDetectedMutating <NSObject>

@required

- (void)setGeneratedHostTime:(unsigned long long)arg1;
- (void)setLastTRPCandidateId:(NSString *)arg1;
- (void)setRequestId:(NSString *)arg1;
- (void)setTrpDetectedAudioTimeStamp:(double)arg1;

@end

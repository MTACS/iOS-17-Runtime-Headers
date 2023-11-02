
@protocol AFMyriadContextMutating <NSObject>

@required

- (void)setActivationExpirationTime:(unsigned long long)arg1;
- (void)setActivationSource:(long long)arg1;
- (void)setOverrideState:(AFMyriadGoodnessScoreOverrideState *)arg1;
- (void)setPerceptualAudioHash:(AFMyriadPerceptualAudioHash *)arg1;
- (void)setTimestamp:(unsigned long long)arg1;

@end


@interface _AFMyriadContextMutation : NSObject <AFMyriadContextMutating> {
    unsigned long long  _activationExpirationTime;
    long long  _activationSource;
    AFMyriadContext * _base;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasTimestamp : 1; 
        unsigned int hasPerceptualAudioHash : 1; 
        unsigned int hasOverrideState : 1; 
        unsigned int hasActivationSource : 1; 
        unsigned int hasActivationExpirationTime : 1; 
    }  _mutationFlags;
    AFMyriadGoodnessScoreOverrideState * _overrideState;
    AFMyriadPerceptualAudioHash * _perceptualAudioHash;
    unsigned long long  _timestamp;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)getActivationExpirationTime;
- (long long)getActivationSource;
- (id)getOverrideState;
- (id)getPerceptualAudioHash;
- (unsigned long long)getTimestamp;
- (id)initWithBase:(id)arg1;
- (bool)isDirty;
- (void)setActivationExpirationTime:(unsigned long long)arg1;
- (void)setActivationSource:(long long)arg1;
- (void)setOverrideState:(id)arg1;
- (void)setPerceptualAudioHash:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;

@end

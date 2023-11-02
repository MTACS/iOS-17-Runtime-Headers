
@interface _SMTSiriIntendedInfoMutation : NSObject <SMTSiriIntendedInfoMutating> {
    float  _aftmScore;
    SMTSiriIntendedInfo * _base;
    float  _checkerScore;
    NSNumber * _invocationType;
    float  _lrnnOffset;
    float  _lrnnScale;
    float  _lrnnScore;
    float  _lrnnThreshold;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasOdldScore : 1; 
        unsigned int hasAftmScore : 1; 
        unsigned int hasSpkrIdScore : 1; 
        unsigned int hasLrnnScore : 1; 
        unsigned int hasCheckerScore : 1; 
        unsigned int hasInvocationType : 1; 
        unsigned int hasLrnnThreshold : 1; 
        unsigned int hasLrnnScale : 1; 
        unsigned int hasLrnnOffset : 1; 
    }  _mutationFlags;
    float  _odldScore;
    float  _spkrIdScore;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (float)getAftmScore;
- (float)getCheckerScore;
- (id)getInvocationType;
- (float)getLrnnOffset;
- (float)getLrnnScale;
- (float)getLrnnScore;
- (float)getLrnnThreshold;
- (float)getOdldScore;
- (float)getSpkrIdScore;
- (id)initWithBase:(id)arg1;
- (bool)isDirty;
- (void)setAftmScore:(float)arg1;
- (void)setCheckerScore:(float)arg1;
- (void)setInvocationType:(id)arg1;
- (void)setLrnnOffset:(float)arg1;
- (void)setLrnnScale:(float)arg1;
- (void)setLrnnScore:(float)arg1;
- (void)setLrnnThreshold:(float)arg1;
- (void)setOdldScore:(float)arg1;
- (void)setSpkrIdScore:(float)arg1;

@end

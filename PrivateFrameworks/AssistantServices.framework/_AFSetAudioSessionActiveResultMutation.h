
@interface _AFSetAudioSessionActiveResultMutation : NSObject <AFSetAudioSessionActiveResultMutating> {
    unsigned int  _audioSessionID;
    AFSetAudioSessionActiveResult * _base;
    NSError * _error;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasAudioSessionID : 1; 
        unsigned int hasError : 1; 
    }  _mutationFlags;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned int)getAudioSessionID;
- (id)getError;
- (id)initWithBase:(id)arg1;
- (bool)isDirty;
- (void)setAudioSessionID:(unsigned int)arg1;
- (void)setError:(id)arg1;

@end


@interface _AFSetAudioSessionActiveContextMutation : NSObject <AFSetAudioSessionActiveContextMutating> {
    AFSetAudioSessionActiveContext * _base;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasOptions : 1; 
        unsigned int hasReason : 1; 
        unsigned int hasSpeechRequestOptions : 1; 
    }  _mutationFlags;
    unsigned long long  _options;
    long long  _reason;
    AFSpeechRequestOptions * _speechRequestOptions;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)getOptions;
- (long long)getReason;
- (id)getSpeechRequestOptions;
- (id)initWithBase:(id)arg1;
- (bool)isDirty;
- (void)setOptions:(unsigned long long)arg1;
- (void)setReason:(long long)arg1;
- (void)setSpeechRequestOptions:(id)arg1;

@end


@interface _AFSpeechInfoMutation : NSObject <AFSpeechInfoMutating> {
    AFSpeechInfo * _base;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasSpeechRecognizedCommand : 1; 
    }  _mutationFlags;
    SASSpeechRecognized * _speechRecognizedCommand;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)getSpeechRecognizedCommand;
- (id)initWithBase:(id)arg1;
- (bool)isDirty;
- (void)setSpeechRecognizedCommand:(id)arg1;

@end


@interface _AFSpeechRecordingAlertBehaviorMutation : NSObject <AFSpeechRecordingAlertBehaviorMutating> {
    AFSpeechRecordingAlertBehavior * _base;
    long long  _beepSoundID;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasStyle : 1; 
        unsigned int hasBeepSoundID : 1; 
    }  _mutationFlags;
    long long  _style;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)getBeepSoundID;
- (long long)getStyle;
- (id)initWithBase:(id)arg1;
- (bool)isDirty;
- (void)setBeepSoundID:(long long)arg1;
- (void)setStyle:(long long)arg1;

@end

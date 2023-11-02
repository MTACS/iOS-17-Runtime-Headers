
@interface _SVXUserFeedbackMutation : NSObject <SVXUserFeedbackMutating> {
    SVXUserFeedbackAudioContent * _audioContent;
    SVXUserFeedback * _baseModel;
    long long  _contentType;
    NSString * _identifier;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasIdentifier : 1; 
        unsigned int hasContentType : 1; 
        unsigned int hasAudioContent : 1; 
        unsigned int hasVoiceContent : 1; 
    }  _mutationFlags;
    SVXUserFeedbackVoiceContent * _voiceContent;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)generate;
- (id)init;
- (id)initWithBaseModel:(id)arg1;
- (void)setAudioContent:(id)arg1;
- (void)setContentType:(long long)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setVoiceContent:(id)arg1;

@end

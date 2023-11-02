
@interface _SVXUserFeedbackVoiceContentMutation : NSObject <SVXUserFeedbackVoiceContentMutating> {
    SVXUserFeedbackVoiceContent * _baseModel;
    bool  _isPhonetic;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasText : 1; 
        unsigned int hasIsPhonetic : 1; 
    }  _mutationFlags;
    NSString * _text;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)generate;
- (id)init;
- (id)initWithBaseModel:(id)arg1;
- (void)setIsPhonetic:(bool)arg1;
- (void)setText:(id)arg1;

@end

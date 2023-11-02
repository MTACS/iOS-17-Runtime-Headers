
@interface _SVXUserFeedbackAudioContentMutation : NSObject <SVXUserFeedbackAudioContentMutating> {
    SVXUserFeedbackAudioContent * _baseModel;
    double  _fadeInDuration;
    double  _fadeOutDuration;
    NSURL * _itemURL;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasItemURL : 1; 
        unsigned int hasNumberOfLoops : 1; 
        unsigned int hasFadeInDuration : 1; 
        unsigned int hasFadeOutDuration : 1; 
    }  _mutationFlags;
    unsigned long long  _numberOfLoops;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)generate;
- (id)init;
- (id)initWithBaseModel:(id)arg1;
- (void)setFadeInDuration:(double)arg1;
- (void)setFadeOutDuration:(double)arg1;
- (void)setItemURL:(id)arg1;
- (void)setNumberOfLoops:(unsigned long long)arg1;

@end

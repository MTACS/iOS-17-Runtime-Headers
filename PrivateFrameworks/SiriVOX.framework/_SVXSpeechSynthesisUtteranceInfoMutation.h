
@interface _SVXSpeechSynthesisUtteranceInfoMutation : NSObject <SVXSpeechSynthesisUtteranceInfoMutating> {
    SVXSpeechSynthesisUtteranceInfo * _baseModel;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasUtterance : 1; 
        unsigned int hasWordTimings : 1; 
    }  _mutationFlags;
    NSString * _utterance;
    NSArray * _wordTimings;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)generate;
- (id)init;
- (id)initWithBaseModel:(id)arg1;
- (void)setUtterance:(id)arg1;
- (void)setWordTimings:(id)arg1;

@end

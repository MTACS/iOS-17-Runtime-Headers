
@interface _SVXSpeechSynthesisResultMutation : NSObject <SVXSpeechSynthesisResultMutating> {
    SVXSpeechSynthesisResult * _baseModel;
    NSError * _error;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasType : 1; 
        unsigned int hasUtteranceInfo : 1; 
        unsigned int hasError : 1; 
    }  _mutationFlags;
    long long  _type;
    SVXSpeechSynthesisUtteranceInfo * _utteranceInfo;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)generate;
- (id)init;
- (id)initWithBaseModel:(id)arg1;
- (void)setError:(id)arg1;
- (void)setType:(long long)arg1;
- (void)setUtteranceInfo:(id)arg1;

@end

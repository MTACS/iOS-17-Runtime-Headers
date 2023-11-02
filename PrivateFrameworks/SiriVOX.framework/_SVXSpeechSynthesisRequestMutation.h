
@interface _SVXSpeechSynthesisRequestMutation : NSObject <SVXSpeechSynthesisRequestMutating> {
    SVXSpeechSynthesisRequest * _baseModel;
    NSString * _localizationKey;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasPriority : 1; 
        unsigned int hasOptions : 1; 
        unsigned int hasSpeakableText : 1; 
        unsigned int hasSpeakableContext : 1; 
        unsigned int hasLocalizationKey : 1; 
        unsigned int hasPresynthesizedAudio : 1; 
        unsigned int hasStreamID : 1; 
    }  _mutationFlags;
    unsigned long long  _options;
    SVXSpeechSynthesisAudio * _presynthesizedAudio;
    long long  _priority;
    NSDictionary * _speakableContext;
    NSString * _speakableText;
    NSString * _streamID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)generate;
- (id)init;
- (id)initWithBaseModel:(id)arg1;
- (void)setLocalizationKey:(id)arg1;
- (void)setOptions:(unsigned long long)arg1;
- (void)setPresynthesizedAudio:(id)arg1;
- (void)setPriority:(long long)arg1;
- (void)setSpeakableContext:(id)arg1;
- (void)setSpeakableText:(id)arg1;
- (void)setStreamID:(id)arg1;

@end

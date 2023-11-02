
@interface _SASTestingInputMutation : NSObject <SASTestingInputMutating> {
    SASTestingInput * _baseModel;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasType : 1; 
        unsigned int hasText : 1; 
        unsigned int hasRecordedSpeechURL : 1; 
    }  _mutationFlags;
    NSURL * _recordedSpeechURL;
    NSString * _text;
    long long  _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)generate;
- (id)init;
- (id)initWithBaseModel:(id)arg1;
- (void)setRecordedSpeechURL:(id)arg1;
- (void)setText:(id)arg1;
- (void)setType:(long long)arg1;

@end

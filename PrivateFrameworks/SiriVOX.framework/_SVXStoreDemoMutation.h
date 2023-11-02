
@interface _SVXStoreDemoMutation : NSObject <SVXStoreDemoMutating> {
    SVXStoreDemo * _baseModel;
    long long  _gender;
    NSString * _languageCode;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasTranscriptID : 1; 
        unsigned int hasLanguageCode : 1; 
        unsigned int hasGender : 1; 
        unsigned int hasOutputVolume : 1; 
    }  _mutationFlags;
    float  _outputVolume;
    long long  _transcriptID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)generate;
- (id)init;
- (id)initWithBaseModel:(id)arg1;
- (void)setGender:(long long)arg1;
- (void)setLanguageCode:(id)arg1;
- (void)setOutputVolume:(float)arg1;
- (void)setTranscriptID:(long long)arg1;

@end

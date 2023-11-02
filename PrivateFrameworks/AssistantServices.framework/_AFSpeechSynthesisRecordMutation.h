
@interface _AFSpeechSynthesisRecordMutation : NSObject <AFSpeechSynthesisRecordMutating> {
    AFSpeechSynthesisRecord * _base;
    unsigned long long  _beginTimestamp;
    unsigned long long  _endTimestamp;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasUtterance : 1; 
        unsigned int hasBeginTimestamp : 1; 
        unsigned int hasEndTimestamp : 1; 
    }  _mutationFlags;
    NSString * _utterance;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)getBeginTimestamp;
- (unsigned long long)getEndTimestamp;
- (id)getUtterance;
- (id)initWithBase:(id)arg1;
- (bool)isDirty;
- (void)setBeginTimestamp:(unsigned long long)arg1;
- (void)setEndTimestamp:(unsigned long long)arg1;
- (void)setUtterance:(id)arg1;

@end

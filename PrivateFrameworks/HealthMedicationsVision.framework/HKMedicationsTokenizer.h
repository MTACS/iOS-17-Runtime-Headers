
@interface HKMedicationsTokenizer : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NLTokenizer * _tokenizer;
}

@property (nonatomic, retain) NLTokenizer *tokenizer;

- (void).cxx_destruct;
- (id)init;
- (void)setTokenizer:(id)arg1;
- (id)tokenizer;
- (id)wordsFromTranscript:(id)arg1;

@end

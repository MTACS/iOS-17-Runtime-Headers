
@interface EARSentencePieceModule : NSObject {
    struct shared_ptr<sentencepiece::SentencePieceProcessor> { 
        struct SentencePieceProcessor {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _processor;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)encodeUtterance:(id)arg1;
- (id)initWithModelPath:(id)arg1;
- (long long)setEncodeOptions:(id)arg1;

@end

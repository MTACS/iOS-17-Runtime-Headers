
@interface SLSentencePieceModule : NSObject <SLODLDTokenizerComponent> {
    struct shared_ptr<sentencepiece::SentencePieceProcessor> { 
        struct SentencePieceProcessor {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _processor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)encodeUtterance:(id)arg1;
- (id)initWithConfigFile:(id)arg1;
- (id)initWithConfigFile:(id)arg1 isModelMmap:(bool)arg2;
- (long long)setSPMEncoderOptions:(id)arg1;

@end

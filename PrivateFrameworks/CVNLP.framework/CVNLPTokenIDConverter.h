
@interface CVNLPTokenIDConverter : NSObject {
    unsigned int  _bosTokenID;
    unsigned int  _eosTokenID;
    unsigned int  _unkTokenID;
    struct unique_ptr<cvnlp::AbstractVocabulary, std::default_delete<cvnlp::AbstractVocabulary>> { 
        struct __compressed_pair<cvnlp::AbstractVocabulary *, std::default_delete<cvnlp::AbstractVocabulary>> { 
            struct AbstractVocabulary {} *__value_; 
        } __ptr_; 
    }  _vocabTokenizer;
}

@property (readonly) unsigned int bosTokenID;
@property (readonly) unsigned int eosTokenID;
@property (readonly) unsigned int unkTokenID;

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned int)bosTokenID;
- (void)enumerateTokenIDsForText:(id)arg1 withBlock:(id /* block */)arg2;
- (unsigned int)eosTokenID;
- (id)initWithResource:(id)arg1 andTokenType:(int)arg2;
- (unsigned int)unkTokenID;

@end

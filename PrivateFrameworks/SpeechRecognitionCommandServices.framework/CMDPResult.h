
@interface CMDPResult : NSObject {
    struct unique_ptr<CMDPNormalizer, std::default_delete<CMDPNormalizer>> { 
        struct __compressed_pair<CMDPNormalizer *, std::default_delete<CMDPNormalizer>> { 
            struct CMDPNormalizer {} *__value_; 
        } __ptr_; 
    }  _normalizer;
    struct unique_ptr<fst::VectorFst<fst::ArcTpl<fst::TropicalWeightTpl<float>>>, std::default_delete<fst::VectorFst<fst::ArcTpl<fst::TropicalWeightTpl<float>>>>> { 
        struct __compressed_pair<fst::VectorFst<fst::ArcTpl<fst::TropicalWeightTpl<float>>> *, std::default_delete<fst::VectorFst<fst::ArcTpl<fst::TropicalWeightTpl<float>>>>> { 
            void *__value_; 
        } __ptr_; 
    }  _resultFst;
    struct vector<std::unique_ptr<CMDPToken>, std::allocator<std::unique_ptr<CMDPToken>>> { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<std::unique_ptr<CMDPToken> *, std::allocator<std::unique_ptr<CMDPToken>>> { 
            void *__value_; 
        } __end_cap_; 
    }  _resultNodes;
    struct set<std::string, std::less<std::string>, std::allocator<std::string>> { 
        struct __tree<std::string, std::less<std::string>, std::allocator<std::string>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::string, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::less<std::string>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _symbol_set;
}

+ (struct vector<std::vector<std::vector<std::unique_ptr<CMDPToken>>>, std::allocator<std::vector<std::vector<std::unique_ptr<CMDPToken>>>>> { void *x1; void *x2; struct __compressed_pair<std::vector<std::vector<std::unique_ptr<CMDPToken>>> *, std::allocator<std::vector<std::vector<std::unique_ptr<CMDPToken>>>>> { void *x_3_1_1; } x3; })CMDPTokenSausageFromAFSpeechPhraseArray:(id)arg1;
+ (struct vector<std::vector<std::vector<std::unique_ptr<CMDPToken>>>, std::allocator<std::vector<std::vector<std::unique_ptr<CMDPToken>>>>> { void *x1; void *x2; struct __compressed_pair<std::vector<std::vector<std::unique_ptr<CMDPToken>>> *, std::allocator<std::vector<std::vector<std::unique_ptr<CMDPToken>>>>> { void *x_3_1_1; } x3; })CMDPTokenSausageFromCFTokenSausage:(struct __CFArray { }*)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)createArrayFromNBestResults:(const void*)arg1 withGrammarData:(id)arg2;
- (id)initWithAFSpeechPhraseArray:(id)arg1 forLocaleIdentifier:(id)arg2;
- (id)initWithTokenSausage:(struct __CFArray { }*)arg1 forLocaleIdentifier:(id)arg2;
- (id)initWithTokenSausageVec:(void*)arg1 forLocaleIdentifier:(id)arg2;
- (id)matchWithGrammars:(id)arg1 winningIndex:(int*)arg2 winningDistance:(float*)arg3;

@end

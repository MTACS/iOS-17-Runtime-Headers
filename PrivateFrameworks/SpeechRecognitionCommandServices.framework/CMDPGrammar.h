
@interface CMDPGrammar : NSObject {
    bool  _addOptionalFst;
    NSString * _currentBuiltInLMString;
    NSString * _currentCommandIdentifier;
    NSMutableArray * _grammarDataArray;
    struct unique_ptr<fst::VectorFst<fst::ArcTpl<fst::TropicalWeightTpl<float>>>, std::default_delete<fst::VectorFst<fst::ArcTpl<fst::TropicalWeightTpl<float>>>>> { 
        struct __compressed_pair<fst::VectorFst<fst::ArcTpl<fst::TropicalWeightTpl<float>>> *, std::default_delete<fst::VectorFst<fst::ArcTpl<fst::TropicalWeightTpl<float>>>>> { 
            void *__value_; 
        } __ptr_; 
    }  _grammarFst;
    struct vector<std::pair<std::string, std::unique_ptr<fst::VectorFst<fst::ArcTpl<fst::TropicalWeightTpl<float>>>>>, std::allocator<std::pair<std::string, std::unique_ptr<fst::VectorFst<fst::ArcTpl<fst::TropicalWeightTpl<float>>>>>>> { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<std::pair<std::string, std::unique_ptr<fst::VectorFst<fst::ArcTpl<fst::TropicalWeightTpl<float>>>>> *, std::allocator<std::pair<std::string, std::unique_ptr<fst::VectorFst<fst::ArcTpl<fst::TropicalWeightTpl<float>>>>>>> { 
            void *__value_; 
        } __end_cap_; 
    }  _labelFstPairVector;
    int  _nextFstState;
    int  _nextLabelIndex;
    struct unique_ptr<CMDPNormalizer, std::default_delete<CMDPNormalizer>> { 
        struct __compressed_pair<CMDPNormalizer *, std::default_delete<CMDPNormalizer>> { 
            struct CMDPNormalizer {} *__value_; 
        } __ptr_; 
    }  _normalizer;
    bool  _rebuildGrammar;
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
    }  _special_symbol_set;
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

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addAdlibFstWithLabel:(const void*)arg1 outputIndex:(int)arg2;
- (void)addOptionalFstWithLabel;
- (void)addPhrase:(id)arg1 toFst:(void*)arg2 withArc:(struct _FstArc { int x1; int x2; })arg3;
- (void)buildGrammarFst:(void*)arg1 forCommandTree:(id)arg2 withFstArcDictionary:(id)arg3;
- (id)grammarData;
- (void*)grammarFst;
- (id)initWithCommandTreeDictionary:(id)arg1 forLocaleIdentifier:(id)arg2;

@end

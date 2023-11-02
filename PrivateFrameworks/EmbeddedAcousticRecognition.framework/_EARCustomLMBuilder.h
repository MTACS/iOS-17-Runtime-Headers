
@interface _EARCustomLMBuilder : NSObject {
    struct unique_ptr<quasar::CustomLMBuilder, std::default_delete<quasar::CustomLMBuilder>> { 
        struct __compressed_pair<quasar::CustomLMBuilder *, std::default_delete<quasar::CustomLMBuilder>> { 
            struct CustomLMBuilder {} *__value_; 
        } __ptr_; 
    }  _customLMBuilder;
    struct unique_ptr<quasar::TextTokenizer, std::default_delete<quasar::TextTokenizer>> { 
        struct __compressed_pair<quasar::TextTokenizer *, std::default_delete<quasar::TextTokenizer>> { 
            struct TextTokenizer {} *__value_; 
        } __ptr_; 
    }  _tokenizer;
}

+ (void)initialize;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)getFstGrammar:(id)arg1 overrideFolder:(id)arg2 weight:(float)arg3 errorOut:(id*)arg4;
- (id)initWithConfiguration:(id)arg1;

@end

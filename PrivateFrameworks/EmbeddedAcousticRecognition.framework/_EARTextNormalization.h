
@interface _EARTextNormalization : NSObject {
    struct unique_ptr<quasar::Munger, std::default_delete<quasar::Munger>> { 
        struct __compressed_pair<quasar::Munger *, std::default_delete<quasar::Munger>> { 
            struct Munger {} *__value_; 
        } __ptr_; 
    }  _munger;
    _EARTokenizer * _tokenizer;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)init;
- (id)initWithModelRoot:(id)arg1;
- (id)initWithModelRoot:(id)arg1 mungeRuleFile:(id)arg2;
- (id)initWithModelRoot:(id)arg1 mungeRules:(id)arg2;
- (id)initWithMungeRules:(id)arg1;
- (id)initWithNcsRoot:(id)arg1;
- (id)initWithNcsRoot:(id)arg1 mungeRuleFile:(id)arg2;
- (id)initWithNcsRoot:(id)arg1 mungeRules:(id)arg2;
- (id)munge:(id)arg1;
- (id)normalize:(id)arg1;
- (id)tokenize:(id)arg1;

@end

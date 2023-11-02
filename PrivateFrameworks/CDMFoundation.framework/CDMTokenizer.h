
@interface CDMTokenizer : NSObject {
    void * _analyzer;
    NSString * _language;
    struct unique_ptr<morphun::util::ULocale, std::default_delete<morphun::util::ULocale>> { 
        struct __compressed_pair<morphun::util::ULocale *, std::default_delete<morphun::util::ULocale>> { 
            struct ULocale {} *__value_; 
        } __ptr_; 
    }  _locale;
    int  _maxTokens;
    NSObject<OS_dispatch_queue> * _morphunForceUpdateQueue;
    void * _normalizer;
    struct unique_ptr<morphun::Tokenizer, std::default_delete<morphun::Tokenizer>> { 
        struct __compressed_pair<morphun::Tokenizer *, std::default_delete<morphun::Tokenizer>> { 
            struct Tokenizer {} *__value_; 
        } __ptr_; 
    }  _tokenizer;
}

+ (void*)analyzerFactory;
+ (void*)normalizerFactory;
+ (id)printableLocales:(id)arg1;
+ (void)registerMorphunAssetsPathForLocale:(id)arg1 withPath:(id)arg2;
+ (bool)registerTrialAsset:(id)arg1;
+ (bool)syncTrialAsset:(id)arg1;
+ (id)tokenizerForLocale:(id)arg1;
+ (bool)trialAssetUpdate:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)createTokenChain:(id)arg1;
- (id)initWithLocale:(id)arg1;
- (id)initWithLocale:(id)arg1 maxTokens:(int)arg2 maxInputSize:(int)arg3;

@end

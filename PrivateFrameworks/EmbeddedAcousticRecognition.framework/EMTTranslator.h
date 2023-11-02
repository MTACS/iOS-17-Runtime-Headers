
@interface EMTTranslator : NSObject {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    struct vector<quasar::SystemConfig, std::allocator<quasar::SystemConfig>> { 
        struct SystemConfig {} *__begin_; 
        struct SystemConfig {} *__end_; 
        struct __compressed_pair<quasar::SystemConfig *, std::allocator<quasar::SystemConfig>> { 
            struct SystemConfig {} *__value_; 
        } __end_cap_; 
    }  _configs;
    bool  _skipNonFinalToCatchup;
    NSLocale * _sourceLocale;
    NSLocale * _targetLocale;
    NSObject<OS_dispatch_queue> * _translationQueue;
    NSOperationQueue * _translationRequestsQueue;
    struct shared_ptr<quasar::Translator> { 
        struct Translator {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _translator;
    struct shared_ptr<quasar::TranslatorFactory> { 
        struct TranslatorFactory {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _translatorFactory;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *callbackQueue;

+ (void)initialize;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_dispatchTranslationRequest:(struct vector<std::string, std::allocator<std::string>> { void *x1; void *x2; struct __compressed_pair<std::string *, std::allocator<std::string>> { void *x_3_1_1; } x3; })arg1 isFinal:(bool)arg2 spans:(id)arg3 translator:(struct shared_ptr<quasar::Translator> { struct Translator {} *x1; struct __shared_weak_count {} *x2; })arg4 sourceLocale:(id)arg5 targetLocale:(id)arg6 options:(id)arg7 completion:(id /* block */)arg8;
- (struct shared_ptr<quasar::Translator> { struct Translator {} *x1; struct __shared_weak_count {} *x2; })_prepareFor:(id)arg1 to:(id)arg2;
- (struct vector<std::string, std::allocator<std::string>> { void *x1; void *x2; struct __compressed_pair<std::string *, std::allocator<std::string>> { void *x_3_1_1; } x3; })_tokenizeString:(id)arg1;
- (id)callbackQueue;
- (void)getTranslatorWithCompletion:(id /* block */)arg1;
- (id)initWithModelURL:(id)arg1;
- (id)initWithModelURL:(id)arg1 task:(id)arg2;
- (id)initWithModelURL:(id)arg1 task:(id)arg2 skipNonFinalToCatchup:(bool)arg3;
- (id)initWithModelURL:(id)arg1 task:(id)arg2 skipNonFinalToCatchup:(bool)arg3 translatorCacheSize:(long long)arg4;
- (id)initWithModelURLs:(id)arg1 task:(id)arg2;
- (id)initWithModelURLs:(id)arg1 task:(id)arg2 skipNonFinalToCatchup:(bool)arg3;
- (id)initWithModelURLs:(id)arg1 task:(id)arg2 skipNonFinalToCatchup:(bool)arg3 translatorCacheSize:(long long)arg4;
- (void)loadTranslatorFrom:(id)arg1 to:(id)arg2;
- (void)prepareFor:(id)arg1 to:(id)arg2;
- (void)setCallbackQueue:(id)arg1;
- (void)translateSpeech:(id)arg1 completion:(id /* block */)arg2;
- (void)translateSpeech:(id)arg1 from:(id)arg2 to:(id)arg3 completion:(id /* block */)arg4;
- (void)translateString:(id)arg1 completion:(id /* block */)arg2;
- (void)translateString:(id)arg1 from:(id)arg2 to:(id)arg3 completion:(id /* block */)arg4;
- (void)translateString:(id)arg1 from:(id)arg2 to:(id)arg3 options:(id)arg4 completion:(id /* block */)arg5;
- (void)translateString:(id)arg1 from:(id)arg2 to:(id)arg3 overrides:(id)arg4 completion:(id /* block */)arg5;
- (void)translateTokens:(id)arg1 from:(id)arg2 to:(id)arg3 completion:(id /* block */)arg4;
- (void)translateTokens:(id)arg1 from:(id)arg2 to:(id)arg3 spans:(id)arg4 completion:(id /* block */)arg5;
- (void)translateTokens:(id)arg1 from:(id)arg2 to:(id)arg3 spans:(id)arg4 options:(id)arg5 completion:(id /* block */)arg6;
- (void)translateTokens:(id)arg1 from:(id)arg2 to:(id)arg3 spans:(id)arg4 overrides:(id)arg5 completion:(id /* block */)arg6;
- (void)translateTokens:(id)arg1 isFinal:(bool)arg2 completion:(id /* block */)arg3;
- (void)translateTokens:(id)arg1 isFinal:(bool)arg2 spans:(id)arg3 completion:(id /* block */)arg4;
- (void)translateTokens:(id)arg1 isFinal:(bool)arg2 spans:(id)arg3 options:(id)arg4 completion:(id /* block */)arg5;
- (void)translateTokens:(id)arg1 isFinal:(bool)arg2 spans:(id)arg3 overrides:(id)arg4 completion:(id /* block */)arg5;

@end

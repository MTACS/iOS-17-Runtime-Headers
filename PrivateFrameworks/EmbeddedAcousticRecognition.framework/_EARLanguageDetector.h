
@interface _EARLanguageDetector : NSObject {
    unsigned int  _featureQueuePriority;
    struct unique_ptr<quasar::LanguageDetector, std::default_delete<quasar::LanguageDetector>> { 
        struct __compressed_pair<quasar::LanguageDetector *, std::default_delete<quasar::LanguageDetector>> { 
            struct LanguageDetector {} *__value_; 
        } __ptr_; 
    }  languageDetector;
}

@property (nonatomic) unsigned int featureQueuePriority;

+ (void)initialize;
+ (id)localesOfMessages:(id)arg1;
+ (struct vector<std::optional<quasar::language_detector::Locale>, std::allocator<std::optional<quasar::language_detector::Locale>>> { void *x1; void *x2; struct __compressed_pair<std::optional<quasar::language_detector::Locale> *, std::allocator<std::optional<quasar::language_detector::Locale>>> { void *x_3_1_1; } x3; })quasarLocalesOfMessages:(id)arg1;
+ (struct shared_ptr<const quasar::LDContext> { struct LDContext {} *x1; struct __shared_weak_count {} *x2; })updateContext:(const void*)arg1 withMessageLocales:(const void*)arg2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned int)featureQueuePriority;
- (id)initWithConfigFile:(id)arg1;
- (id)initWithConfigFile:(id)arg1 overrides:(id)arg2;
- (void)setFeatureQueuePriority:(unsigned int)arg1;
- (id)startRequestWith:(unsigned long long)arg1 context:(id)arg2 delegate:(id)arg3;

@end

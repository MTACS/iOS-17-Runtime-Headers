
@interface _EARPhoneticMatchBuilder : NSObject {
    struct shared_ptr<quasar::PMBuilder> { 
        struct PMBuilder {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _pmBuilder;
    struct shared_ptr<quasar::TextTokenizer> { 
        struct TextTokenizer {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _tokenizer;
}

@property (nonatomic, readonly) struct shared_ptr<quasar::PMBuilder> { struct PMBuilder {} *x1; struct __shared_weak_count {} *x2; } pmBuilder;
@property (nonatomic, readonly) struct shared_ptr<quasar::TextTokenizer> { struct TextTokenizer {} *x1; struct __shared_weak_count {} *x2; } tokenizer;

+ (bool)writePlaceholderFstToPath:(id)arg1;
+ (bool)writePlaceholderSymbolsToPath:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)buildAlignedLFst;
- (bool)buildGFsts;
- (bool)buildLFst;
- (bool)combineFsts;
- (bool)composeLGFsts;
- (id)initWithModelRoot:(id)arg1 jsonConfigFile:(id)arg2 dataFeeds:(id)arg3;
- (id)initWithModelRoot:(id)arg1 jsonConfigFile:(id)arg2 dataFeedsFile:(id)arg3;
- (id)initWithNcsRoot:(id)arg1 jsonConfigFile:(id)arg2 dataFeeds:(id)arg3;
- (id)initWithNcsRoot:(id)arg1 jsonConfigFile:(id)arg2 dataFeedsFile:(id)arg3;
- (id)lFstName;
- (id)lgFstName;
- (id)osymsName;
- (struct shared_ptr<quasar::PMBuilder> { struct PMBuilder {} *x1; struct __shared_weak_count {} *x2; })pmBuilder;
- (void)reset;
- (bool)supportPhoneticMatchBuilding;
- (struct shared_ptr<quasar::TextTokenizer> { struct TextTokenizer {} *x1; struct __shared_weak_count {} *x2; })tokenizer;
- (bool)writeAlignedLFstToPath:(id)arg1;
- (bool)writeGFstsToDirectory:(id)arg1;
- (bool)writeISymsToPath:(id)arg1 asText:(bool)arg2;
- (bool)writeIndividualLGFstsToDirectory:(id)arg1;
- (bool)writeLFstToPath:(id)arg1;
- (bool)writeLGFstToPath:(id)arg1;
- (bool)writeMetadataToPath:(id)arg1;
- (bool)writeOSymsToPath:(id)arg1 asText:(bool)arg2 quasarise:(bool)arg3;

@end

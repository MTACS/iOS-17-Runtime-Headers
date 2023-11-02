
@interface CRCtcPath : NSObject {
    unsigned long long  _beginningCurrentWord;
    struct vector<unsigned int, std::allocator<unsigned int>> { 
        unsigned int *__begin_; 
        unsigned int *__end_; 
        struct __compressed_pair<unsigned int *, std::allocator<unsigned int>> { 
            unsigned int *__value_; 
        } __end_cap_; 
    }  _histWordTokenIDs;
    struct _LXCursor { } * _lxDynamicCursor;
    struct _LXCursor { } * _lxStaticCursor;
    unsigned long long  _numCustomWords;
    double  _probBlank;
    double  _probCharNGram;
    double  _probLexCurrWord;
    double  _probLexHist;
    double  _probNonBlank;
    double  _probWM;
    NSString * _string;
    struct vector<unsigned int, std::allocator<unsigned int>> { 
        unsigned int *__begin_; 
        unsigned int *__end_; 
        struct __compressed_pair<unsigned int *, std::allocator<unsigned int>> { 
            unsigned int *__value_; 
        } __end_cap_; 
    }  _tokenString;
    struct vector<_NSRange, std::allocator<_NSRange>> { 
        struct _NSRange {} *__begin_; 
        struct _NSRange {} *__end_; 
        struct __compressed_pair<_NSRange *, std::allocator<_NSRange>> { 
            struct _NSRange {} *__value_; 
        } __end_cap_; 
    }  _whitespaceRanges;
}

@property (nonatomic) struct _LXCursor { }*lxDynamicCursor;
@property (nonatomic) struct _LXCursor { }*lxStaticCursor;
@property double probBlank;
@property double probCharNGram;
@property (readonly) double probLM;
@property double probLexCurrWord;
@property double probLexHist;
@property double probNonBlank;
@property (readonly) double probTotal;
@property (readonly) double probTotalNorm;
@property double probWM;
@property (retain) NSString *string;

+ (id)_getQueue;
+ (bool)_isWordCustom:(id)arg1 dynamicLexicon:(struct _LXLexicon { }*)arg2;
+ (double)lmProbForString:(id)arg1 forPath:(id)arg2 originalWordRanges:(id)arg3 originalWordIDs:(id)arg4 wordRanges:(id)arg5 wordIDs:(id)arg6 wordModel:(void*)arg7;
+ (unsigned int)normalizeLMTokenIDForWord:(id)arg1 withTokenID:(unsigned int)arg2 outScore:(double*)arg3 wordModel:(void*)arg4;
+ (void)updateLexiconProbForPath:(id)arg1 stemmingFromPath:(id)arg2 staticLexicon:(struct _LXLexicon { }*)arg3 dynamicLexicon:(struct _LXLexicon { }*)arg4 forChar:(unsigned short)arg5;
+ (void)updateNGramProbForPath:(id)arg1 stemmingFromPath:(id)arg2 withModel:(void*)arg3 forChar:(unsigned short)arg4;
+ (void)updateWMProbForPath:(id)arg1 stemmingFromPath:(id)arg2 wordModel:(void*)arg3 locale:(id)arg4 forChar:(unsigned short)arg5;
+ (void)useLMTokenizerOnString:(id)arg1 outTokenIDs:(id*)arg2 outTokenRanges:(id*)arg3 wordModel:(void*)arg4 locale:(id)arg5;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)childPathWithBlankProb:(double)arg1;
- (long long)compare:(id)arg1;
- (bool)containsCustomWords:(struct _LXLexicon { }*)arg1;
- (void)dealloc;
- (id)init;
- (struct _LXCursor { }*)lxDynamicCursor;
- (struct _LXCursor { }*)lxStaticCursor;
- (void)merge:(id)arg1 replaceWhiteSpaces:(bool)arg2;
- (id)pathByExtendingWithCharacter:(unsigned short)arg1 characterNGramModel:(void*)arg2 staticLexicon:(struct _LXLexicon { }*)arg3 dynamicLexicon:(struct _LXLexicon { }*)arg4 wordModel:(void*)arg5 locale:(id)arg6 forTimeSample:(unsigned long long)arg7;
- (double)probBlank;
- (double)probCharNGram;
- (double)probLM;
- (double)probLexCurrWord;
- (double)probLexHist;
- (double)probNonBlank;
- (double)probTotal;
- (double)probTotalNorm;
- (double)probWM;
- (void)setLxDynamicCursor:(struct _LXCursor { }*)arg1;
- (void)setLxStaticCursor:(struct _LXCursor { }*)arg1;
- (void)setProbBlank:(double)arg1;
- (void)setProbCharNGram:(double)arg1;
- (void)setProbLexCurrWord:(double)arg1;
- (void)setProbLexHist:(double)arg1;
- (void)setProbNonBlank:(double)arg1;
- (void)setProbWM:(double)arg1;
- (void)setString:(id)arg1;
- (id)string;
- (void)updateWhitespacesForTimeSample:(unsigned long long)arg1;
- (id)whiteSpaceRangesExcludingTrailing;

@end

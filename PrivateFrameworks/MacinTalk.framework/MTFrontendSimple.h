
@interface MTFrontendSimple : NSEnumerator {
    struct MTFEBuilder { int (**x1)(); struct SLLexer {} *x2; struct MTFESentence {} *x3; struct MTFEIntonationalPhrase {} *x4; struct MTFEIntermediatePhrase {} *x5; struct MTFEWord {} *x6; struct MTFEHomograph {} *x7; struct MTFEPhoneme {} *x8; bool x9; bool x10; bool x11; bool x12; bool x13; bool x14; bool x15; float x16; float x17; float x18; unsigned int x19; struct SLToken {} *x20; short x21; } * _builder;
    struct SLDictLookup { int (**x1)(); struct SLDictionary {} *x2; struct SLDictionary {} *x3; struct SLDictionary {} *x4; struct SLAgglomerate {} *x5; } * _fDictLookup;
    struct SLLexer { int (**x1)(); } * _fLexer;
    struct SLPronouncer { int (**x1)(); } * _fPronouncer;
    struct SLCFStringTextSource { int (**x1)(); bool x2; long long x3; struct __CFString {} *x4; unsigned short x5[129]; } * _fTextSource;
}

@property struct MTFEBuilder { int (**x1)(); struct SLLexer {} *x2; struct MTFESentence {} *x3; struct MTFEIntonationalPhrase {} *x4; struct MTFEIntermediatePhrase {} *x5; struct MTFEWord {} *x6; struct MTFEHomograph {} *x7; struct MTFEPhoneme {} *x8; bool x9; bool x10; bool x11; bool x12; bool x13; bool x14; bool x15; float x16; float x17; float x18; unsigned int x19; struct SLToken {} *x20; short x21; }*builder;
@property struct SLDictLookup { int (**x1)(); struct SLDictionary {} *x2; struct SLDictionary {} *x3; struct SLDictionary {} *x4; struct SLAgglomerate {} *x5; }*fDictLookup;
@property struct SLLexer { int (**x1)(); }*fLexer;
@property struct SLPronouncer { int (**x1)(); }*fPronouncer;
@property struct SLCFStringTextSource { int (**x1)(); bool x2; long long x3; struct __CFString {} *x4; unsigned short x5[129]; }*fTextSource;

- (struct MTFEBuilder { int (**x1)(); struct SLLexer {} *x2; struct MTFESentence {} *x3; struct MTFEIntonationalPhrase {} *x4; struct MTFEIntermediatePhrase {} *x5; struct MTFEWord {} *x6; struct MTFEHomograph {} *x7; struct MTFEPhoneme {} *x8; bool x9; bool x10; bool x11; bool x12; bool x13; bool x14; bool x15; float x16; float x17; float x18; unsigned int x19; struct SLToken {} *x20; short x21; }*)builder;
- (void)dealloc;
- (struct SLDictLookup { int (**x1)(); struct SLDictionary {} *x2; struct SLDictionary {} *x3; struct SLDictionary {} *x4; struct SLAgglomerate {} *x5; }*)fDictLookup;
- (struct SLLexer { int (**x1)(); }*)fLexer;
- (struct SLPronouncer { int (**x1)(); }*)fPronouncer;
- (struct SLCFStringTextSource { int (**x1)(); bool x2; long long x3; struct __CFString {} *x4; unsigned short x5[129]; }*)fTextSource;
- (id)initWithString:(id)arg1;
- (id)initWithStringAndLocale:(id)arg1 locale:(id)arg2;
- (id)nextObject;
- (void)setBuilder:(struct MTFEBuilder { int (**x1)(); struct SLLexer {} *x2; struct MTFESentence {} *x3; struct MTFEIntonationalPhrase {} *x4; struct MTFEIntermediatePhrase {} *x5; struct MTFEWord {} *x6; struct MTFEHomograph {} *x7; struct MTFEPhoneme {} *x8; bool x9; bool x10; bool x11; bool x12; bool x13; bool x14; bool x15; float x16; float x17; float x18; unsigned int x19; struct SLToken {} *x20; short x21; }*)arg1;
- (void)setFDictLookup:(struct SLDictLookup { int (**x1)(); struct SLDictionary {} *x2; struct SLDictionary {} *x3; struct SLDictionary {} *x4; struct SLAgglomerate {} *x5; }*)arg1;
- (void)setFLexer:(struct SLLexer { int (**x1)(); }*)arg1;
- (void)setFPronouncer:(struct SLPronouncer { int (**x1)(); }*)arg1;
- (void)setFTextSource:(struct SLCFStringTextSource { int (**x1)(); bool x2; long long x3; struct __CFString {} *x4; unsigned short x5[129]; }*)arg1;

@end

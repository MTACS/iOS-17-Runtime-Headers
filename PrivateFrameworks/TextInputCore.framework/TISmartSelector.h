
@interface TISmartSelector : NSObject {
    struct _LXLexicon { } * _contactDictionary;
    id /* block */  _contactObserver;
    id /* block */  _dataChangedHandler;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSLocale * _locale;
    NLTagger * _namedEntityTagger;
    unsigned long long  _options;
    struct unique_ptr<KB::StaticDictionary, std::default_delete<KB::StaticDictionary>> { 
        struct __compressed_pair<KB::StaticDictionary *, std::default_delete<KB::StaticDictionary>> { 
            struct StaticDictionary {} *__value_; 
        } __ptr_; 
    }  _staticDictionary;
    TITransientLexiconManager * _transientLexiconManager;
}

@property (copy) id /* block */ dataChangedHandler;
@property (retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain) NSString *language;
@property (retain) NSLocale *locale;
@property (retain) NLTagger *namedEntityTagger;
@property unsigned long long options;
@property (retain) TITransientLexiconManager *transientLexiconManager;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id /* block */)dataChangedHandler;
- (void)dealloc;
- (id)dispatchQueue;
- (id)initWithOptions:(unsigned long long)arg1 language:(id)arg2 dataChangedHandler:(id /* block */)arg3;
- (id)language;
- (void)loadStaticPhraseDictionary;
- (id)locale;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })longestRangeEncapsulatingSubstringInDocument:(id)arg1 containingRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 tokenizedRanges:(id)arg3 meetingCondition:(id /* block */)arg4;
- (id)namedEntityTagger;
- (unsigned long long)options;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })selectionRangeForTextInDocument:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 language:(id)arg3 options:(unsigned long long)arg4;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })selectionRangeForTextInDocument:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 language:(id)arg3 tokenizedRanges:(id)arg4 options:(unsigned long long)arg5;
- (void)setDataChangedHandler:(id /* block */)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setLanguage:(id)arg1;
- (void)setLocale:(id)arg1;
- (void)setNamedEntityTagger:(id)arg1;
- (void)setOptions:(unsigned long long)arg1;
- (void)setTransientLexiconManager:(id)arg1;
- (id)transientLexiconManager;

@end

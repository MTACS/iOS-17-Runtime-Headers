
@interface TITransientLexiconManagerMock : NSObject {
    int  _acceptedCount;
    void * _addressBookLexicons;
    void * _appNameLexicons;
    NSDictionary * _contactCollection;
    struct _LXLexicon { } * _namedEntityLexiconRef;
    struct _LXLexicon { } * _namedEntityPhraseLexiconRef;
    NSMutableArray * _observers;
    int  _offeredCount;
    bool  _supplementalLexiconSearchEnabled;
}

@property (nonatomic) int acceptedCount;
@property (nonatomic, readonly) NSArray *observers;
@property (nonatomic) int offeredCount;
@property (getter=isSupplementalLexiconSearchEnabled, nonatomic) bool supplementalLexiconSearchEnabled;

+ (id)getEntries:(struct _LXLexicon { }*)arg1;
+ (id)tokenizeEntity:(id)arg1;

- (void).cxx_destruct;
- (int)acceptedCount;
- (id /* block */)addContactObserver:(id /* block */)arg1;
- (void)addEntry:(id)arg1 toLexicon:(struct _LXLexicon { }*)arg2;
- (struct _LXLexicon { }*)addressBookLexiconForLocale:(const char *)arg1;
- (struct _LXLexicon { }*)appNameLexiconForLocale:(const char *)arg1;
- (void)dealloc;
- (void)debugLogEntities;
- (id)ensureSupplementalLexicons;
- (void)getOnce:(id /* block */)arg1;
- (id)init;
- (id)initWithTransientData:(id)arg1 namedEntities:(id)arg2;
- (bool)isSupplementalLexiconSearchEnabled;
- (void)loadLexicons;
- (struct _LXLexicon { }*)namedEntityLexicon;
- (struct _LXLexicon { }*)namedEntityLexiconForLocale:(const char *)arg1;
- (struct _LXLexicon { }*)namedEntityPhraseLexicon;
- (struct _LXLexicon { }*)namedEntityPhraseLexiconForLocale:(const char *)arg1;
- (id)observers;
- (int)offeredCount;
- (void)provideFeedbackForString:(id)arg1 type:(unsigned char)arg2 style:(unsigned char)arg3;
- (void)removeContactObserver:(id /* block */)arg1;
- (bool)searchForWord:(id)arg1;
- (bool)searchForWordCaseInsensitive:(id)arg1;
- (bool)searchHelper:(struct _LXLexicon { }*)arg1 forWord:(struct __CFString { }*)arg2 caseSensitive:(bool)arg3;
- (void)setAcceptedCount:(int)arg1;
- (void)setNewContactCollection:(id)arg1;
- (void)setOfferedCount:(int)arg1;
- (void)setSupplementalLexiconSearchEnabled:(bool)arg1;
- (id)supplementalLexicons;
- (void)unload;

@end

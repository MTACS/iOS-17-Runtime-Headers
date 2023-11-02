
@interface TITransientLexiconManager : NSObject <TISupplementalLexiconControllerDelegate, TITransientLexiconManaging> {
    void * _addressBookLexicons;
    void * _appNameLexicons;
    NSObject<_ICLexiconManaging> * _inputContextLexiconManager;
    bool  _lexiconsLoaded;
    struct _LXLexicon { } * _namedEntityLexiconRef;
    void * _namedEntityLexicons;
    struct _LXLexicon { } * _namedEntityPhraseLexiconRef;
    void * _namedEntityPhraseLexicons;
    bool  _supplementalLexiconSearchEnabled;
    TISupplementalLexiconController * _supplementalLexicons;
}

@property (setter=_setOverridingCurrentConnectionForTesting:, nonatomic, retain) NSXPCConnection *_overridingCurrentConnectionForTesting;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) TISupplementalLexiconController *ensureSupplementalLexicons;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct _LXLexicon { }*namedEntityLexicon;
@property (nonatomic, readonly) struct _LXLexicon { }*namedEntityPhraseLexicon;
@property (readonly) Class superclass;
@property (getter=isSupplementalLexiconSearchEnabled, nonatomic) bool supplementalLexiconSearchEnabled;
@property (nonatomic, readonly) TISupplementalLexiconController *supplementalLexicons;

+ (id)getEntries:(struct _LXLexicon { }*)arg1;
+ (void)setSharedTITransientLexiconManager:(id)arg1;
+ (id)sharedInstance;
+ (id)singletonInstance;

- (void).cxx_destruct;
- (id)_currentConnection;
- (id)_overridingCurrentConnectionForTesting;
- (void)_setOverridingCurrentConnectionForTesting:(id)arg1;
- (id /* block */)addContactObserver:(id /* block */)arg1;
- (struct _LXLexicon { }*)addressBookLexiconForLocale:(const char *)arg1;
- (struct _LXLexicon { }*)appNameLexiconForLocale:(const char *)arg1;
- (void)dealloc;
- (void)debugLogEntities;
- (id)ensureSupplementalLexicons;
- (struct _LXLexicon { }*)filterLexicon:(struct _LXLexicon { }*)arg1 againstLocale:(struct String { unsigned short x1; unsigned short x2; unsigned short x3; unsigned char x4; char *x5; BOOL x6[16]; }*)arg2;
- (struct _LXLexicon { }*)filteredLexicon:(struct _LXLexicon { }*)arg1 fromLexiconCache:(void*)arg2 forLocale:(const char *)arg3;
- (void)getOnce:(id /* block */)arg1;
- (id)init;
- (bool)isSupplementalLexiconSearchEnabled;
- (void)loadLexicons;
- (void)namedEntitiesUpdateCallback;
- (struct _LXLexicon { }*)namedEntityLexicon;
- (struct _LXLexicon { }*)namedEntityLexiconForLocale:(const char *)arg1;
- (struct _LXLexicon { }*)namedEntityPhraseLexicon;
- (struct _LXLexicon { }*)namedEntityPhraseLexiconForLocale:(const char *)arg1;
- (void)performMaintenance;
- (void)provideFeedbackForString:(id)arg1 type:(unsigned char)arg2 style:(unsigned char)arg3;
- (void)registerNamedEntitiesUpdateCallback;
- (void)releaseCachedLexicons;
- (void)removeContactObserver:(id /* block */)arg1;
- (bool)searchForWord:(id)arg1;
- (bool)searchForWordCaseInsensitive:(id)arg1;
- (bool)searchHelper:(struct _LXLexicon { }*)arg1 forWord:(struct __CFString { }*)arg2 caseSensitive:(bool)arg3;
- (void)setSupplementalLexiconSearchEnabled:(bool)arg1;
- (void)supplementalLexiconControllerProcessDidTerminate:(id)arg1;
- (id)supplementalLexicons;

@end


@protocol TITransientLexiconManaging <NSObject>

@required

- (id /* block */)addContactObserver:(void *)arg1; // needs 1 arg types, found 11: id /* block */, NSDictionary *, void*, id, SEL, id /* block */, void*, void, id /* block */, NSDictionary *, void*
- (struct _LXLexicon { }*)addressBookLexiconForLocale:(const char *)arg1;
- (struct _LXLexicon { }*)appNameLexiconForLocale:(const char *)arg1;
- (void)debugLogEntities;
- (TISupplementalLexiconController *)ensureSupplementalLexicons;
- (void)getOnce:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (bool)isSupplementalLexiconSearchEnabled;
- (void)loadLexicons;
- (struct _LXLexicon { }*)namedEntityLexicon;
- (struct _LXLexicon { }*)namedEntityLexiconForLocale:(const char *)arg1;
- (struct _LXLexicon { }*)namedEntityPhraseLexicon;
- (struct _LXLexicon { }*)namedEntityPhraseLexiconForLocale:(const char *)arg1;
- (void)performMaintenance;
- (void)provideFeedbackForString:(NSString *)arg1 type:(unsigned char)arg2 style:(unsigned char)arg3;
- (void)removeContactObserver:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (bool)searchForWord:(NSString *)arg1;
- (bool)searchForWordCaseInsensitive:(NSString *)arg1;
- (void)setSupplementalLexiconSearchEnabled:(bool)arg1;
- (TISupplementalLexiconController *)supplementalLexicons;

@end

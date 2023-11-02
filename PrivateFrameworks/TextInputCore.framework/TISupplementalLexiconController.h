
@interface TISupplementalLexiconController : NSObject {
    unsigned long long  _activeLexiconIdentifier;
    int  _connectionIdentifier;
    <TISupplementalLexiconControllerDelegate> * _delegate;
    NSMutableDictionary * _entityStores;
    NSMutableDictionary * _lexicons;
    bool  _needsAtSignSearchPrefixQuirk;
    NSObject<OS_dispatch_source> * _processExitDispatchSource;
}

@property (nonatomic, readonly) TISupplementalLexicon *activeLexicon;
@property (nonatomic, readonly) struct _LXLexicon { }*activePhraseLexicon;
@property (nonatomic, readonly) struct _LXLexicon { }*activeWordLexicon;
@property (nonatomic, readonly) int connectionIdentifier;
@property (nonatomic) <TISupplementalLexiconControllerDelegate> *delegate;

- (void).cxx_destruct;
- (id)activeLexicon;
- (struct _LXLexicon { }*)activePhraseLexicon;
- (struct _LXLexicon { }*)activeWordLexicon;
- (void)addLexicon:(id)arg1;
- (void)clearActiveLexicon;
- (int)connectionIdentifier;
- (id)delegate;
- (id)identifiersOfItemsEqualToMecrabraCandidate:(id)arg1;
- (id)initWithConnection:(id)arg1;
- (id)lexiconIdentifiers;
- (id)lexiconWithIdentifier:(unsigned long long)arg1;
- (void)removeLexiconWithIdentifier:(unsigned long long)arg1;
- (void)setActiveLexiconWithIdentifier:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;

@end

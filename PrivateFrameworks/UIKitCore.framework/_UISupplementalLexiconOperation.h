
@interface _UISupplementalLexiconOperation : NSObject {
    _UISupplementalLexicon * _lexicon;
    unsigned long long  _lexiconIdentifier;
    unsigned long long  _type;
}

@property (nonatomic, readonly) _UISupplementalLexicon *lexicon;
@property (nonatomic, readonly) unsigned long long lexiconIdentifier;
@property (nonatomic, readonly) unsigned long long type;

- (void).cxx_destruct;
- (id)initAddOperationWithLexicon:(id)arg1;
- (id)initRemoveOperationWithLexiconIdentifier:(unsigned long long)arg1;
- (id)lexicon;
- (unsigned long long)lexiconIdentifier;
- (unsigned long long)type;

@end


@interface EMTAlternative : NSObject <NSCopying> {
    EMTAlternativeDescription * _alternativeDescription;
    unsigned long long  _selectionSpanIndex;
    unsigned long long  _translationPhraseIndex;
}

@property (nonatomic, readonly) EMTAlternativeDescription *alternativeDescription;
@property (nonatomic, readonly) unsigned long long selectionSpanIndex;
@property (nonatomic, readonly) unsigned long long translationPhraseIndex;

- (void).cxx_destruct;
- (id)alternativeDescription;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithDescription:(id)arg1 translationPhraseIndex:(unsigned long long)arg2 selectionSpanIndex:(unsigned long long)arg3;
- (bool)isEqual:(id)arg1;
- (unsigned long long)selectionSpanIndex;
- (unsigned long long)translationPhraseIndex;

@end


@interface EMFAnchoredSearchManager : NSObject {
    EMFAnchoredSearchAnchorsLoader * _anchorsLoader;
    EMFEmojiLocaleData * _localeData;
}

@property (nonatomic, readonly) EMFAnchoredSearchAnchorsLoader *anchorsLoader;
@property (nonatomic) EMFEmojiLocaleData *localeData;
@property (nonatomic, readonly) NSArray *localizedLeftHandAnchors;
@property (nonatomic, readonly) NSArray *localizedRightHandAnchors;

- (void).cxx_destruct;
- (void)_enumerateAnchoredReplacementCandidatesForContextLeft:(id)arg1 withOptions:(unsigned long long)arg2 usingBlock:(id /* block */)arg3;
- (void)_enumerateAnchoredReplacementCandidatesForContextOmnidirectional:(id)arg1 withOptions:(unsigned long long)arg2 usingBlock:(id /* block */)arg3;
- (void)_enumerateAnchoredReplacementCandidatesForContextRight:(id)arg1 withOptions:(unsigned long long)arg2 usingBlock:(id /* block */)arg3;
- (id)anchorsLoader;
- (void)enumerateAnchoredReplacementCandidatesForContext:(id)arg1 withOptions:(unsigned long long)arg2 usingBlock:(id /* block */)arg3;
- (id)initWithLocaleData:(id)arg1;
- (id)localeData;
- (id)localizedLeftHandAnchors;
- (id)localizedRightHandAnchors;
- (void)setLocaleData:(id)arg1;

@end

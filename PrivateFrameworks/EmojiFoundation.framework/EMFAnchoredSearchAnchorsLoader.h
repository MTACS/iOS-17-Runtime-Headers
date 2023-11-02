
@interface EMFAnchoredSearchAnchorsLoader : NSObject {
    EMFAnchoredSearchAnchorsCache * _anchorsCache;
    NSString * _localeIdentifier;
    EMFAnchoredSearchAnchorCollection * _locallyCachedAnchorCollection;
}

@property (nonatomic, retain) EMFAnchoredSearchAnchorsCache *anchorsCache;
@property (nonatomic, readonly) NSArray *leftHandAnchors;
@property (nonatomic, readonly) NSString *localeIdentifier;
@property (nonatomic) EMFAnchoredSearchAnchorCollection *locallyCachedAnchorCollection;
@property (nonatomic, readonly) NSArray *rightHandAnchors;

- (void).cxx_destruct;
- (void)_enumerateLanguageFallbackGraphForLocaleIdentifier:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)_loadAndCacheAnchorsForLocaleIdentifierIfNecessary:(id)arg1;
- (id)anchorsCache;
- (id)initWithLocaleIdentifier:(id)arg1;
- (id)leftHandAnchors;
- (id)localeIdentifier;
- (id)locallyCachedAnchorCollection;
- (id)rightHandAnchors;
- (void)setAnchorsCache:(id)arg1;
- (void)setLocallyCachedAnchorCollection:(id)arg1;

@end

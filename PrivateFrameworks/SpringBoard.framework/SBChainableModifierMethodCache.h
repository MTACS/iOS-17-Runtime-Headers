
@interface SBChainableModifierMethodCache : NSObject <NSCopying> {
    SBModifierCacheCoordinator * _cacheCoordinator;
    struct SBModifierCacheDispatchData { id x1; int (*x2)(); } * _dispatchCache;
    unsigned long long  _genCount;
    int (** _imps;
    SBChainableModifier * _modifier;
    int (* _nextFunc;
    long long  _selectorCount;
    SEL * _selectors;
}

@property (nonatomic, retain) SBModifierCacheCoordinator *cacheCoordinator;
@property (nonatomic, readonly) bool hasNonTrampolineIMPs;
@property (nonatomic) SBChainableModifier *modifier;

- (void).cxx_destruct;
- (id)cacheCoordinator;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (bool)hasNonTrampolineIMPs;
- (id)initWithIMPs:(int (**)arg1 selectorList:(id)arg2 subsequentMethodCacheFunc:(int (*)arg3;
- (id)modifier;
- (void)setCacheCoordinator:(id)arg1;
- (void)setModifier:(id)arg1;

@end

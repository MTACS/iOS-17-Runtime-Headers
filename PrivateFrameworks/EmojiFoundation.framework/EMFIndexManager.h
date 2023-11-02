
@interface EMFIndexManager : NSObject {
    EMFInvertedIndex * _defaultIndex;
    NSLock * _defaultIndexLock;
    NSBundle * _searchEngineBundle;
    EMFInvertedIndex * _stemmedIndex;
    NSLock * _stemmedIndexLock;
    bool  _triedLoadingDefaultIndex;
    bool  _triedLoadingStemmedIndex;
}

@property (nonatomic, copy) EMFInvertedIndex *defaultIndex;
@property (nonatomic, copy) EMFInvertedIndex *stemmedIndex;

- (void).cxx_destruct;
- (id)defaultIndex;
- (id)initWithBundle:(id)arg1;
- (void)preheatIndexes;
- (void)setDefaultIndex:(id)arg1;
- (void)setStemmedIndex:(id)arg1;
- (id)stemmedIndex;

@end

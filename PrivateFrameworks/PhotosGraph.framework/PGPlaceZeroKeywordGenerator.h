
@interface PGPlaceZeroKeywordGenerator : NSObject {
    void graph;
    void locationHelper;
    void locationOrAreaNodeByQueryToken;
    void options;
    void photoLibrary;
    void searchComputationCache;
}

- (void).cxx_destruct;
- (id)generatePlaceZeroKeywords;
- (id)init;
- (id)initWithGraph:(id)arg1 photoLibrary:(id)arg2 searchComputationCache:(id)arg3 options:(id)arg4;

@end

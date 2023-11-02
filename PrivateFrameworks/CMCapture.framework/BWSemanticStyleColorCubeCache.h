
@interface BWSemanticStyleColorCubeCache : NSObject {
    unsigned long long  _cacheMaxSize;
    bool  _cachingEnabled;
    BWColorLookupCache * _colorLookupCache;
    NSMutableDictionary * _cubeFilterCache;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _filterCacheLock;
    NSMutableArray * _recentFilterCacheKeys;
}

+ (void)initialize;

- (void)dealloc;
- (id)filtersForSemanticStyle:(id)arg1 sceneType:(int)arg2 personSegmentationEnabled:(bool)arg3 maskVisualizationEnabled:(bool)arg4 filtersToCombine:(id)arg5;
- (id)initWithColorLookupCache:(id)arg1;

@end


@interface SBUILegibilityCache : NSObject {
    NSHashTable * _cachedTemplatedImages;
    <SBUILegibilityEngine> * _engine;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _memoryPoolLock;
    NSMutableDictionary * _memoryPoolLock_memoryPoolsBySlotSize;
    NSMapTable * _sortedTemplateImageKeysBySizeForSettings;
    NSMapTable * _strengthForImageLookupMap;
    NSMapTable * _templateImagesBySizeForSettings;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _unfairLock;
}

@property (nonatomic, readonly) <SBUILegibilityEngine> *engine;

- (void).cxx_destruct;
- (void)_teardownMemoryPools;
- (void)cacheTemplateShadowImage:(id)arg1 settings:(id)arg2 maxSize:(struct CGSize { double x1; double x2; })arg3;
- (id)cachedStrengthForImage:(id)arg1 strength:(double)arg2 generator:(id /* block */)arg3;
- (bool)containsTemplateForSettings:(id)arg1;
- (id)engine;
- (id)initWithEngine:(id)arg1;
- (bool)isCachedTemplateImage:(id)arg1;
- (id)memoryPoolForGraphicsContextType:(long long)arg1 matchingSize:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3;
- (void)removeAllObjects;
- (id)templateImageForSettings:(id)arg1 matchingSize:(struct CGSize { double x1; double x2; })arg2;

@end

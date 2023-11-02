
@interface NSCache : NSObject {
    struct cache_s { } * _cache;
    <NSCacheDelegate> * _cacheDelegate;
    unsigned char  _discardableContentState;
    bool  _doDelegateWillEvictValue;
    bool  _evictOnSuspension;
    bool  _evictsDiscarded;
    bool  _moribund;
}

@property unsigned long long countLimit;
@property <NSCacheDelegate> *delegate;
@property bool evictsObjectsWithDiscardedContent;
@property (copy) NSString *name;
@property unsigned long long totalCostLimit;

// Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation

- (void)__apply:(id /* block */)arg1;
- (id)allObjects;
- (unsigned long long)countLimit;
- (void)dealloc;
- (id)delegate;
- (bool)evictsObjectsWhenApplicationEntersBackground;
- (bool)evictsObjectsWithDiscardedContent;
- (id)init;
- (unsigned long long)minimumObjectCount;
- (id)name;
- (id)objectForKey:(id)arg1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setCountLimit:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEvictsObjectsWhenApplicationEntersBackground:(bool)arg1;
- (void)setEvictsObjectsWithDiscardedContent:(bool)arg1;
- (void)setMinimumObjectCount:(unsigned long long)arg1;
- (void)setName:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2 cost:(unsigned long long)arg3;
- (void)setTotalCostLimit:(unsigned long long)arg1;
- (unsigned long long)totalCostLimit;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

- (id)mapTableRepresentation;

// Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation

- (id)CALobjectForKey:(id)arg1 calculatedWithBlock:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

- (id)objectForKeyedSubscript:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;

// Image: /System/Library/PrivateFrameworks/NanoTimeKit.framework/NanoTimeKit

- (id)ntkCachedObjectForKey:(id)arg1 creationBlock:(id /* block */)arg2;
- (id)ntkCachedObjectForKeyProvider:(id)arg1 creationBlock:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

- (id)px_objectForKey:(id)arg1 usingPromise:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/PodcastsFoundation

- (void)pf_setEvictsObjectsWhenApplicationEntersBackground:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/SeymourMedia.framework/SeymourMedia

- (void)smm_setEvictsObjectsWhenApplicationEntersBackground:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSPersistence.framework/TSPersistence

- (void)tsp_cacheComponent:(id)arg1;
- (id)tsp_currentComponent;
- (unsigned char)tsp_currentOperation;
- (void)tsp_flushComponent:(id)arg1;
- (void)tsp_performOperation:(unsigned char)arg1 forComponent:(id)arg2 usingBlock:(id /* block */)arg3;

@end

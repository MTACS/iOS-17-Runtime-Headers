
@interface MPMediaEntityCache : NSObject {
    struct __CFDictionary { } * _concreteEntitiesByDataProviderEntityClass;
    NSObject<OS_dispatch_queue> * _deallocLaterQueue;
    NSMutableArray * _entityTemporaryReferences;
    <MPMediaLibraryDataProviderPrivate> * _mediaLibraryDataProvider;
    bool  _mediaLibraryDataProviderRespondsToSupportsEntityChangeTrackingMethod;
    struct os_unfair_recursive_lock_s { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } ourl_lock; 
        unsigned int ourl_count; 
    }  _rwlock;
}

- (void).cxx_destruct;
- (void)_clearSomeGlobalEntityTemporaryReferences;
- (void*)_entityMapForDataProviderEntityClass:(Class)arg1;
- (id)_entityWithIdentifier:(long long)arg1 mediaEntityType:(long long)arg2 collectionGroupingType:(long long)arg3 loadEntityBlock:(id /* block */)arg4;
- (void)_performWithExclusiveAccessForDataProviderEntityClass:(Class)arg1 block:(id /* block */)arg2;
- (void)_performWithSharedAccessForDataProviderEntityClass:(Class)arg1 block:(id /* block */)arg2;
- (id)collectionWithIdentifier:(long long)arg1 grouping:(long long)arg2 loadEntityBlock:(id /* block */)arg3;
- (id)initWithMediaLibraryDataProvider:(id)arg1;
- (id)itemWithIdentifier:(long long)arg1;
- (id)itemWithIdentifier:(long long)arg1 loadEntityBlock:(id /* block */)arg2;
- (void)removeEntityWithIdentifier:(long long)arg1 dataProviderEntityClass:(Class)arg2;
- (void)updatePropertyValuesInEntityWithIdentifier:(long long)arg1 dataProviderEntityClass:(Class)arg2 deleted:(bool)arg3;

@end

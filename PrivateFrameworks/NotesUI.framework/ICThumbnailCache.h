
@interface ICThumbnailCache : NSObject <ICThumbnailCaching> {
    void $__lazy_storage_$_cacheKeyQueue;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  $__lazy_storage_$_cacheKeyQueueQos;
    void $__lazy_storage_$_objectIdentifiersToCacheKeys;
    void cache;
    void persistedCache;
}

+ (id)shared;

- (void).cxx_destruct;
- (id)creationDateFor:(id)arg1;
- (id)init;
- (void)invalidateForObjectIdentifiers:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;

@end

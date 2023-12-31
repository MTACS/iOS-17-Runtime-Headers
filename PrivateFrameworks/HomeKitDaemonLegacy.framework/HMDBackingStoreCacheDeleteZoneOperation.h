
@interface HMDBackingStoreCacheDeleteZoneOperation : HMDBackingStoreOperation {
    id /* block */  _creationBlock;
    HMDBackingStoreCacheZone * _zone;
}

@property (nonatomic, copy) id /* block */ creationBlock;
@property (nonatomic, retain) HMDBackingStoreCacheZone *zone;

- (void).cxx_destruct;
- (id /* block */)creationBlock;
- (id)initWithZone:(id)arg1 resultBlock:(id /* block */)arg2;
- (id)mainReturningError;
- (void)setCreationBlock:(id /* block */)arg1;
- (void)setZone:(id)arg1;
- (id)zone;

@end

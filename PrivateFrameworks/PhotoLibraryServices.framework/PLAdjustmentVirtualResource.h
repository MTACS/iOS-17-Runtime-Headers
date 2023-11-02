
@interface PLAdjustmentVirtualResource : PLVirtualResource {
    NSNumber * _cachedDataLength;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

@property (nonatomic, copy) NSNumber *cachedDataLength;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } lock;

- (void).cxx_destruct;
- (id)adjustmentDictionary;
- (id)cachedDataLength;
- (long long)dataLength;
- (long long)estimatedDataLength;
- (id)initWithAdjustmentFilePath:(id)arg1 forAsset:(id)arg2;
- (struct os_unfair_lock_s { unsigned int x1; })lock;
- (void)setCachedDataLength:(id)arg1;
- (void)setLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;

@end

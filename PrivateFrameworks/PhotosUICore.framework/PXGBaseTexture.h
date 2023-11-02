
@interface PXGBaseTexture : NSObject <PXGMutableSpriteTexture, PXGSpriteTexture> {
    bool  _isDegraded;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    struct { int x1; unsigned int x2; } * _lock_pendingImageRequestInfo;
    unsigned long long  _lock_pendingImageRequestInfoCapacity;
    unsigned long long  _lock_pendingImageRequestInfoCount;
    NSMutableIndexSet * _spriteIndexes;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long estimatedByteSize;
@property (nonatomic, readonly) bool hasSprites;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct CGImage { }*imageRepresentation;
@property (nonatomic, readonly) bool isDegraded;
@property (nonatomic, readonly) bool isOpaque;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } pixelSize;
@property (nonatomic, readonly) unsigned char presentationType;
@property (nonatomic, readonly) unsigned int spriteCount;
@property (nonatomic, readonly) NSIndexSet *spriteIndexes;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addSpriteIndex:(unsigned int)arg1;
- (void)_filterPendingTextureRequestIDsWithPredicate:(id /* block */)arg1;
- (void)_lock_resizeStorageIfNeeded;
- (void)addSpriteIndexRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)addSpriteWithTextureRequestID:(int)arg1 deliveryOrder:(unsigned int)arg2;
- (void)applyChangeDetails:(id)arg1;
- (bool)containsSpriteIndex:(unsigned int)arg1;
- (void)dealloc;
- (id)description;
- (void)enumerateSpriteIndexes:(id /* block */)arg1;
- (long long)estimatedByteSize;
- (void)getSpriteIndexes:(unsigned int*)arg1 maxSpriteCount:(unsigned int)arg2;
- (bool)hasPendingTextureRequestID:(int)arg1 deliveryOrder:(unsigned int)arg2;
- (bool)hasSprites;
- (struct CGImage { }*)imageRepresentation;
- (id)init;
- (bool)isDegraded;
- (bool)isOpaque;
- (struct CGSize { double x1; double x2; })pixelSize;
- (unsigned char)presentationType;
- (void)processPendingTextureRequestIDsWithHandler:(id /* block */)arg1;
- (void)removeAllSpriteIndexes;
- (bool)removePendingSpriteWithTextureRequestID:(int)arg1 ifDeliveredBefore:(unsigned int)arg2;
- (void)removeSpriteIndex:(unsigned int)arg1;
- (void)setIsDegraded:(bool)arg1;
- (unsigned int)spriteCount;
- (id)spriteIndexes;

@end

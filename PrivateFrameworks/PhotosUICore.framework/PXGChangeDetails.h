
@interface PXGChangeDetails : NSObject <NSCopying, PXGDiagnosticsProvider> {
    PXArrayChangeDetails * _cachedArrayChangeDetails;
    bool  _hasMoves;
    long long  _layoutVersionAfterChange;
    long long  _layoutVersionBeforeChange;
    unsigned int * _nextSpriteIndexByPreviousSpriteIndex;
    long long  _nextSpriteIndexByPreviousSpriteIndexCapacity;
    unsigned int  _numberOfSpritesAfterChange;
    unsigned int  _numberOfSpritesBeforeChange;
    NSIndexSet * _spriteIndexesThatWereInserted;
    NSIndexSet * _spriteIndexesThatWereModified;
    NSIndexSet * _spriteIndexesThatWereRemoved;
    char * _tempBuffer;
    long long  _tempBufferCapacity;
}

@property (nonatomic, readonly) PXArrayChangeDetails *arrayChangeDetails;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *diagnosticDescription;
@property (nonatomic, readonly) bool hasAnyInsertionsRemovalsOrMoves;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSIndexSet *insertedSpriteIndexes;
@property (nonatomic, readonly) PXGChangeDetails *inverse;
@property (nonatomic) long long layoutVersionAfterChange;
@property (nonatomic) long long layoutVersionBeforeChange;
@property (nonatomic, readonly) NSIndexSet *modifiedSpriteIndexes;
@property (nonatomic, readonly) unsigned int numberOfSpritesAfterChange;
@property (nonatomic, readonly) unsigned int numberOfSpritesBeforeChange;
@property (nonatomic, readonly) NSIndexSet *removedSpriteIndexes;
@property (nonatomic, readonly) const unsigned int*spriteIndexAfterChangeBySpriteIndexBeforeChange;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_invalidateCachedArrayChangeDetails;
- (void)_invalidateLayoutVersions;
- (void)_resizeStorageIfNeeded;
- (void)applySpriteTransferMap:(const unsigned int*)arg1;
- (void)applyToArray:(void*)arg1 elementSize:(unsigned long long)arg2 countAfterChanges:(unsigned long long)arg3 insertionHandler:(id /* block */)arg4 modifiedHandler:(id /* block */)arg5;
- (void)applyToDictionary:(id)arg1 removalHandler:(id /* block */)arg2;
- (void)applyToSpriteIndexes:(unsigned int*)arg1 atIndexes:(id)arg2;
- (id)arrayChangeDetails;
- (void)configureWithNumberOfSpritesAfterChange:(unsigned int)arg1 changeDetails:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)diagnosticDescription;
- (bool)hasAnyInsertionsRemovalsOrMoves;
- (void)increaseNumberOfSpritesBy:(unsigned int)arg1;
- (id)indexSetAfterApplyingChangeDetails:(id)arg1;
- (id)insertedSpriteIndexes;
- (id)inverse;
- (long long)layoutVersionAfterChange;
- (long long)layoutVersionBeforeChange;
- (id)modifiedSpriteIndexes;
- (unsigned int)numberOfSpritesAfterChange;
- (unsigned int)numberOfSpritesBeforeChange;
- (void)removeSpritesAtIndexes:(id)arg1;
- (id)removedSpriteIndexes;
- (struct _PXGSpriteIndexRange { unsigned int x1; unsigned int x2; })replaceRemovalsWithMovesToEndForIndexes:(id)arg1;
- (void)setLayoutVersionAfterChange:(long long)arg1;
- (void)setLayoutVersionBeforeChange:(long long)arg1;
- (struct _PXGSpriteIndexRange { unsigned int x1; unsigned int x2; })splitIndexesIntoMovesToEndAndReinsertions:(id)arg1;
- (const unsigned int*)spriteIndexAfterChangeBySpriteIndexBeforeChange;

@end

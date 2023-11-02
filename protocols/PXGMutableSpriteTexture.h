
@protocol PXGMutableSpriteTexture <PXGSpriteTexture>

@required

- (void)addSpriteWithTextureRequestID:(int)arg1 deliveryOrder:(unsigned int)arg2;
- (void)applyChangeDetails:(PXGChangeDetails *)arg1;
- (bool)isDegraded;
- (void)processPendingTextureRequestIDsWithHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, unsigned int, id /* block */, int, unsigned int, void*
- (bool)removePendingSpriteWithTextureRequestID:(int)arg1 ifDeliveredBefore:(unsigned int)arg2;
- (void)removeSpriteIndex:(unsigned int)arg1;
- (void)setIsDegraded:(bool)arg1;

@end

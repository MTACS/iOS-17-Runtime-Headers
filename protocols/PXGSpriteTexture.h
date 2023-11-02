
@protocol PXGSpriteTexture <NSObject>

@required

- (bool)containsSpriteIndex:(unsigned int)arg1;
- (void)enumerateSpriteIndexes:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned int, bool*, void*
- (long long)estimatedByteSize;
- (void)getSpriteIndexes:(unsigned int*)arg1 maxSpriteCount:(unsigned int)arg2;
- (bool)hasPendingTextureRequestID:(int)arg1 deliveryOrder:(unsigned int)arg2;
- (bool)hasSprites;
- (struct CGImage { }*)imageRepresentation;
- (bool)isDegraded;
- (bool)isOpaque;
- (struct CGSize { double x1; double x2; })pixelSize;
- (unsigned char)presentationType;
- (unsigned int)spriteCount;
- (NSIndexSet *)spriteIndexes;

@end

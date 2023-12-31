
@protocol TSCH3DOptimizedTextureResource

@required

- (bool)canLoadCachedFullMipmapBufferForDataCache:(TSCH3DDocumentDataCache *)arg1;
- (TSCH3DDataBuffer *)databufferForDataCache:(TSCH3DDocumentDataCache *)arg1;
- (TSCH3DDataBuffer *)optimizedMipmapBuffer;
- (TSCH3DDataBuffer *)representativeColorBuffer;

@end

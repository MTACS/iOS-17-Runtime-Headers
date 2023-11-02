
@protocol PXGRenderer <NSObject>

@required

- (struct PXGCameraConfiguration { struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_1_1_1[4]; } x1; struct { void*x_2_1_1[4]; } x2; })cameraConfiguration;
- (<PXGRendererDelegate> *)delegate;
- (unsigned long long)destinationColorSpaceName;
- (PXGEntityManager *)entityManager;
- (struct { long long x1; bool x2; bool x3; bool x4; unsigned long long x5; bool x6; bool x7; bool x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; })interactionState;
- (bool)lowMemoryMode;
- (unsigned char)presentationType;
- (void)releaseResources;
- (void)renderImmediately;
- (void)renderSpritesWithTextures:(NSArray *)arg1 dataStore:(PXGSpriteDataStore *)arg2 presentationDataStore:(PXGSpriteDataStore *)arg3 presentationMetadataStore:(PXGSpriteMetadataStore *)arg4 layout:(PXGLayout *)arg5;
- (void)setCameraConfiguration:(struct PXGCameraConfiguration { struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_1_1_1[4]; } x1; struct { void*x_2_1_1[4]; } x2; })arg1;
- (void)setDelegate:(id <PXGRendererDelegate>)arg1;
- (void)setEntityManager:(PXGEntityManager *)arg1;
- (void)setInteractionState:(struct { long long x1; bool x2; bool x3; bool x4; unsigned long long x5; bool x6; bool x7; bool x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; })arg1;
- (void)setLowMemoryMode:(bool)arg1;
- (void)setNeedsRender;
- (void)setVisibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (<PXGTungstenRecordingSession> *)startRecordingToDirectoryURL:(NSURL *)arg1;
- (<PXGTextureConverter> *)textureConverter;
- (void)updateWithChangeDetails:(PXGChangeDetails *)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleRect;
- (bool)wantsBGRATextures;
- (bool)wantsMipmaps;
- (bool)wantsToDriveRender;

@optional

- (PXScrollViewController *)scrollViewController;
- (void)setScrollViewController:(PXScrollViewController *)arg1;
- (void)setTest_renderSnapshotHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, void*
- (id /* block */)test_renderSnapshotHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, id, void*, id, SEL

@end

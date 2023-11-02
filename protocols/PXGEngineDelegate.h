
@protocol PXGEngineDelegate <NSObject>

@required

- (bool)engine:(PXGEngine *)arg1 shouldRenderLayout:(PXGLayout *)arg2 sprites:(PXGSpriteDataStore *)arg3;
- (void)engineSetNeedsUpdate:(PXGEngine *)arg1;

@optional

- (void)engine:(PXGEngine *)arg1 updateDebugHUDWithStats:(struct { double x1[6]; double x2[6]; long long x3[6]; double x4[6]; double x5[6]; }*)arg2;

@end


@interface AKInkRendererHelper : NSObject

+ (double)_calculateMaxRenderingSize;
+ (id)_createFullSizeRenderer;
+ (id)_sharedOfflineInkRendererSmallSize;
+ (double)maxRenderingSize;
+ (void)purgeSharedRenderer;
+ (id)renderDrawing:(id)arg1 clippedToStrokeSpaceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 scale:(double)arg3;

@end

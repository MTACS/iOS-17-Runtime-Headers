
@interface _PXAssetsSceneAnchor : NSObject {
    struct CGPoint { 
        double x; 
        double y; 
    }  _anchorOrigin;
    PXAssetReference * _assetReference;
    double  _distance;
}

@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } anchorOrigin;
@property (nonatomic, readonly) PXAssetReference *assetReference;
@property (nonatomic, readonly) double distance;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })anchorOrigin;
- (id)assetReference;
- (double)distance;
- (id)initWithAssetReference:(id)arg1 anchorOrigin:(struct CGPoint { double x1; double x2; })arg2 distance:(double)arg3;

@end

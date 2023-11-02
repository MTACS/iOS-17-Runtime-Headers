
@interface ASVHitTestResult : NSObject {
    void _assetPosition;
    void _cameraPosition;
    void _imagePoint;
    void _synthesizedPlaneNormal;
    long long  _type;
    void _worldPosition;
}

@property (nonatomic, readonly) void assetPosition;
@property (nonatomic, readonly) void cameraPosition;
@property (nonatomic, readonly) float distanceFromAsset;
@property (nonatomic, readonly) float distanceFromCamera;
@property (nonatomic, readonly) void imagePoint;
@property (nonatomic, readonly) bool isRealPlane;
@property (nonatomic, readonly) bool isSynthesizedVeritcalPlane;
@property (nonatomic) void synthesizedPlaneNormal;
@property (nonatomic) long long type;
@property (nonatomic, readonly) void worldPosition;

- (void)assetPosition;
- (void)cameraPosition;
- (void)cameraToPosition;
- (float)distanceFromAsset;
- (float)distanceFromCamera;
- (void)imagePoint;
- (id)initWithType:(void *)arg1 worldPosition:(void *)arg2 imagePoint:(void *)arg3 assetPosition:(void *)arg4 cameraPosition:(void *)arg5; // needs 5 arg types, found 1: long long
- (bool)isRealPlane;
- (bool)isSynthesizedVeritcalPlane;
- (void)setSynthesizedPlaneNormal;
- (void)setType:(long long)arg1;
- (void)synthesizedPlaneNormal;
- (long long)type;
- (void)worldPosition;

@end


@interface ASVRealHitTestResult : ASVHitTestResult {
    long long  _alignment;
    void _localPosition;
    NSUUID * _planeIdentifier;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _worldTransform;
}

@property (nonatomic, readonly) long long alignment;
@property (nonatomic, readonly) float distanceFromFeaturePoint;
@property (nonatomic, readonly) void localPosition;
@property (nonatomic, readonly) NSUUID *planeIdentifier;
@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } worldTransform;

- (void).cxx_destruct;
- (long long)alignment;
- (float)distanceFromFeaturePoint;
- (id)initWithHitTestResult:(void *)arg1 imagePoint:(void *)arg2 assetPosition:(void *)arg3 cameraPosition:(void *)arg4; // needs 4 arg types, found 1: id
- (id)initWithRaycastResult:(void *)arg1 imagePoint:(void *)arg2 assetPosition:(void *)arg3 cameraPosition:(void *)arg4; // needs 4 arg types, found 1: id
- (id)initWithType:(void *)arg1 worldPosition:(void *)arg2 worldTransform:(void *)arg3 localPosition:(void *)arg4 imagePoint:(void *)arg5 assetPosition:(void *)arg6 cameraPosition:(void *)arg7 planeIdentifier:(void *)arg8 planeAlignment:(void *)arg9; // needs 9 arg types, found 4: long long, struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }, id, long long
- (void)localPosition;
- (id)planeIdentifier;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })worldTransform;

@end

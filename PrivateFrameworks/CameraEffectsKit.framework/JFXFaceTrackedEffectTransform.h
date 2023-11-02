
@interface JFXFaceTrackedEffectTransform : NSObject <NSCopying> {
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _billboardTransform;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _cameraProjection;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _cameraTransform;
    NSDictionary * _effectParametersForOnBillboardTracking;
    NSDictionary * _effectParametersForOnFaceTracking;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _onFaceTransform;
}

@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } billboardTransform;
@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } cameraProjection;
@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } cameraTransform;
@property (nonatomic, readonly) NSDictionary *effectParametersForOnBillboardTracking;
@property (nonatomic, readonly) NSDictionary *effectParametersForOnFaceTracking;
@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } onFaceTransform;

- (void).cxx_destruct;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })billboardTransform;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })cameraProjection;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })cameraTransform;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)effectParametersForOnBillboardTracking;
- (id)effectParametersForOnFaceTracking;
- (id)effectParametersForTrackingType:(long long)arg1;
- (id)initWithCameraProjection:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1 cameraTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2 onFaceTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg3 billboardTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg4;
- (bool)isEqual:(id)arg1 forTrackingType:(long long)arg2;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })onFaceTransform;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })transformForTrackingType:(long long)arg1;

@end

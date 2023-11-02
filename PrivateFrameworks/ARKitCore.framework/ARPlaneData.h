
@interface ARPlaneData : NSObject <ARQATraceable, ARResultData> {
    bool  _applyPivotRotation;
    ARCV3DPlaneDetectionPlaneList * _detectionResult;
    unsigned long long  _detectionTypeMask;
    NSDictionary * _planeIdentifiers;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _renderingFromVision;
    bool  _sceneUnderstandingEnabled;
    double  _timestamp;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) ARCV3DPlaneDetectionPlaneList *detectionResult;
@property (nonatomic, readonly) unsigned long long detectionTypeMask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) double timestamp;
@property (nonatomic, readonly) NSDictionary *tracingEntry;

+ (float)_pivotForPlane:(struct CV3DPlaneDetectionPlane { }*)arg1;
+ (float)_surfacePivotForPlane:(struct CV3DSurfaceDetectionPlane { struct CV3DSurfaceDetectionPoint3D { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; double x2[3]; double x3[16]; int x4; struct CV3DSurfaceDetectionAlignedBoundingBox {} *x5; struct CV3DSurfaceDetectionRect {} *x6; struct CV3DSurfaceDetectionPoints2D {} *x7; struct CV3DSurfaceDetectionExtentGrid {} *x8; struct __CFUUID {} *x9; unsigned long long x10; struct __CFUUID {} **x11; unsigned long long x12; double x13; struct CV3DSurfaceDetectionSemantics {} *x14; }*)arg1;
+ (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })_surfaceToWorldTransformForPlane:(struct CV3DSurfaceDetectionPlane { struct CV3DSurfaceDetectionPoint3D { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; double x2[3]; double x3[16]; int x4; struct CV3DSurfaceDetectionAlignedBoundingBox {} *x5; struct CV3DSurfaceDetectionRect {} *x6; struct CV3DSurfaceDetectionPoints2D {} *x7; struct CV3DSurfaceDetectionExtentGrid {} *x8; struct __CFUUID {} *x9; unsigned long long x10; struct __CFUUID {} **x11; unsigned long long x12; double x13; struct CV3DSurfaceDetectionSemantics {} *x14; }*)arg1 pivot:(float)arg2;
+ (id)anchorForDetectionResult:(struct CV3DSurfaceDetectionResult { struct CV3DSurfaceDetectionPlane {} *x1; unsigned long long x2; }*)arg1;
+ (void)setSemanticsFromCV3D:(int)arg1 labelProbabilities:(id)arg2 sceneUnderstandingEnabled:(bool)arg3 onPlane:(id)arg4;

- (void).cxx_destruct;
- (id)anchorsForCameraWithTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1 referenceOriginTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2 existingAnchors:(id)arg3 anchorsToRemove:(id)arg4;
- (bool)applyPivotRotation;
- (id)detectionResult;
- (unsigned long long)detectionTypeMask;
- (id)initWithDetectionResult:(struct CV3DPlaneDetectionPlaneList { }*)arg1 detectionTypeMask:(unsigned long long)arg2 sceneUnderstandingEnabled:(bool)arg3;
- (id)initWithDetectionResult:(struct CV3DPlaneDetectionPlaneList { }*)arg1 detectionTypeMask:(unsigned long long)arg2 sceneUnderstandingEnabled:(bool)arg3 renderingFromVision:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg4 atTimestamp:(double)arg5;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;
- (id)tracingEntry;

@end

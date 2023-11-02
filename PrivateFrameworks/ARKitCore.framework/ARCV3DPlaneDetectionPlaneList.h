
@interface ARCV3DPlaneDetectionPlaneList : NSObject {
    struct CV3DPlaneDetectionPlaneList { } * _cv3dPlaneDetections;
}

@property (nonatomic, readonly) struct CV3DPlaneDetectionPlaneList { }*cv3dPlaneDetections;

- (struct CV3DPlaneDetectionPlaneList { }*)cv3dPlaneDetections;
- (void)dealloc;
- (id)initWithDetectionResult:(struct CV3DPlaneDetectionPlaneList { }*)arg1;
- (unsigned long long)numberOfPlanes;
- (struct CV3DPlaneDetectionPlane { }*)planeAtIndex:(unsigned long long)arg1;

@end

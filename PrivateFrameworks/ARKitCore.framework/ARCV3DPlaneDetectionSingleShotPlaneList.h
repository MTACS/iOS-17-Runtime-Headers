
@interface ARCV3DPlaneDetectionSingleShotPlaneList : NSObject {
    struct CV3DPlaneDetectionSingleShotPlaneList { } * _cv3dPlaneDetections;
}

@property (nonatomic, readonly) struct CV3DPlaneDetectionSingleShotPlaneList { }*cv3dPlaneDetections;

- (struct CV3DPlaneDetectionSingleShotPlaneList { }*)cv3dPlaneDetections;
- (void)dealloc;
- (id)initWithDetectionResult:(struct CV3DPlaneDetectionSingleShotPlaneList { }*)arg1;

@end

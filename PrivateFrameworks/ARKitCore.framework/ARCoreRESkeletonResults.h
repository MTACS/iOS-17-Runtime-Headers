
@interface ARCoreRESkeletonResults : NSObject <ARResultData, NSCopying> {
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[3]; 
    }  _cameraIntrinsics;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageResolution;
    NSArray * _retargetedSkeletons;
    double  _timestamp;
}

@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; } cameraIntrinsics;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGSize { double x1; double x2; } imageResolution;
@property (nonatomic, copy) NSArray *retargetedSkeletons;
@property (readonly) Class superclass;
@property (nonatomic) double timestamp;

- (void).cxx_destruct;
- (id)anchorsForCameraWithTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1 referenceOriginTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2 existingAnchors:(id)arg3 anchorsToRemove:(id)arg4;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })cameraIntrinsics;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct CGSize { double x1; double x2; })imageResolution;
- (bool)isEqual:(id)arg1;
- (id)retargetedSkeletons;
- (void)setCameraIntrinsics:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1;
- (void)setImageResolution:(struct CGSize { double x1; double x2; })arg1;
- (void)setRetargetedSkeletons:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;

@end

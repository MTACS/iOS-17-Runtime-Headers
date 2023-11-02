
@interface VCPPhotosFacePair : NSObject {
    double  _distance;
    VCPPhotosFace * _face1;
    VCPPhotosFace * _face2;
}

@property (nonatomic, readonly) double distance;
@property (nonatomic, readonly) VCPPhotosFace *face1;
@property (nonatomic, readonly) VCPPhotosFace *face2;

+ (id)pairWithFace:(id)arg1 andFace:(id)arg2 distance:(double)arg3;

- (void).cxx_destruct;
- (double)distance;
- (id)face1;
- (id)face2;
- (id)initWithFace:(id)arg1 andFace:(id)arg2 distance:(double)arg3;

@end

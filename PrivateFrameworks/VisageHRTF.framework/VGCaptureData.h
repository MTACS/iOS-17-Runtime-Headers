
@interface VGCaptureData : NSObject <NSCopying, NSSecureCoding> {
    struct __CVBuffer { } * _depth;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[3]; 
    }  _depthIntrinsics;
    VGFaceMetadata * _face;
    NSDictionary * _faceTrackingResult;
    struct __CVBuffer { } * _rgbRectified;
    VGSkeleton * _skeleton;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _timestamp;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[3]; 
    }  _videoIntrinsics;
    struct __CVBuffer { } * _yuvRectified;
}

@property (nonatomic) struct __CVBuffer { }*depth;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; } depthIntrinsics;
@property (nonatomic, retain) VGFaceMetadata *face;
@property (nonatomic, retain) NSDictionary *faceTrackingResult;
@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; } fixedDepthIntrinsics_rdar92226535;
@property (nonatomic) struct __CVBuffer { }*rgbRectified;
@property (nonatomic, retain) VGSkeleton *skeleton;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } timestamp;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; } videoIntrinsics;
@property (nonatomic) struct __CVBuffer { }*yuvRectified;

+ (struct __CVBuffer { }*)_createColorFromYCbCr:(struct __CVBuffer { }*)arg1;
+ (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })_dataToMatrix33:(id)arg1;
+ (id)_matrix33ToData:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (struct __CVBuffer { }*)depth;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })depthIntrinsics;
- (void)encodeWithCoder:(id)arg1;
- (id)face;
- (id)faceTrackingResult;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })fixedDepthIntrinsics_rdar92226535;
- (id)getFaceCaptureData;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (struct __CVBuffer { }*)rgbRectified;
- (void)saveAtPath:(id)arg1;
- (void)setDepth:(struct __CVBuffer { }*)arg1;
- (void)setDepthIntrinsics:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1;
- (void)setFace:(id)arg1;
- (void)setFaceTrackingResult:(id)arg1;
- (void)setRgbRectified:(struct __CVBuffer { }*)arg1;
- (void)setSkeleton:(id)arg1;
- (void)setTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setVideoIntrinsics:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1;
- (void)setYuvRectified:(struct __CVBuffer { }*)arg1;
- (id)skeleton;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })timestamp;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })videoIntrinsics;
- (struct __CVBuffer { }*)yuvRectified;

@end

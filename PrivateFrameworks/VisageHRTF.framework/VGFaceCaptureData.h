
@interface VGFaceCaptureData : NSObject <NSCopying> {
    struct __CVBuffer { } * _depth;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[3]; 
    }  _depthIntrinsics;
    VGFaceMetadata * _face;
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
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } timestamp;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; } videoIntrinsics;
@property (nonatomic) struct __CVBuffer { }*yuvRectified;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (struct __CVBuffer { }*)depth;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })depthIntrinsics;
- (id)face;
- (void)saveAtPath:(id)arg1;
- (void)setDepth:(struct __CVBuffer { }*)arg1;
- (void)setDepthIntrinsics:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1;
- (void)setFace:(id)arg1;
- (void)setTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setVideoIntrinsics:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1;
- (void)setYuvRectified:(struct __CVBuffer { }*)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })timestamp;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })videoIntrinsics;
- (struct __CVBuffer { }*)yuvRectified;

@end

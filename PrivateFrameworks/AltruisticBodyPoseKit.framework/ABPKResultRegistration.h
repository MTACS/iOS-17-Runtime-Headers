
@interface ABPKResultRegistration : NSObject {
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _cameraFromBodyPose;
    void _distortion;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSize;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[3]; 
    }  _intrinsics;
    /* Warning: Unrecognized filer type: '' using 'void*' */ void** _joints2d;
    /* Warning: Unrecognized filer type: '' using 'void*' */ void** _joints3dWrtBody;
    /* Warning: Unrecognized filer type: '' using 'void*' */ void** _joints3dWrtCamera;
    bool  _success;
}

@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } cameraFromBodyPose;
@property (nonatomic) void distortion;
@property (nonatomic) struct CGSize { double x1; double x2; } imageSize;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; } intrinsics;
@property (nonatomic) /* Warning: Unrecognized filer type: '' using 'void*' */ void**joints2d;
@property (nonatomic) /* Warning: Unrecognized filer type: '' using 'void*' */ void**joints3dWrtBody;
@property (nonatomic) /* Warning: Unrecognized filer type: '' using 'void*' */ void**joints3dWrtCamera;
@property (nonatomic) bool success;

- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })cameraFromBodyPose;
- (void)distortion;
- (struct CGSize { double x1; double x2; })imageSize;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })intrinsics;
- (/* Warning: Unrecognized filer type: '1' using 'void*' */ void**)joints2d;
- (/* Warning: Unrecognized filer type: '1' using 'void*' */ void**)joints3dWrtBody;
- (/* Warning: Unrecognized filer type: '1' using 'void*' */ void**)joints3dWrtCamera;
- (void)setCameraFromBodyPose:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setDistortion;
- (void)setImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setIntrinsics:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1;
- (void)setJoints2d:(/* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1;
- (void)setJoints3dWrtBody:(/* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1;
- (void)setJoints3dWrtCamera:(/* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1;
- (void)setSuccess:(bool)arg1;
- (bool)success;

@end

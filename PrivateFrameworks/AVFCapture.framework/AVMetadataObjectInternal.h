
@interface AVMetadataObjectInternal : NSObject {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _bounds;
    long long  _detectionSource;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _duration;
    long long  _groupID;
    AVCaptureInput * _input;
    AVMetadataObject * _originalMetadataObject;
    unsigned long long  _syntheticFocusMode;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _time;
    NSString * _type;
}

@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property long long detectionSource;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } duration;
@property long long groupID;
@property (retain) AVCaptureInput *input;
@property (retain) AVMetadataObject *originalMetadataObject;
@property unsigned long long syntheticFocusMode;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } time;
@property (retain) NSString *type;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (void)dealloc;
- (long long)detectionSource;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (long long)groupID;
- (id)init;
- (id)input;
- (id)originalMetadataObject;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDetectionSource:(long long)arg1;
- (void)setDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setGroupID:(long long)arg1;
- (void)setInput:(id)arg1;
- (void)setOriginalMetadataObject:(id)arg1;
- (void)setSyntheticFocusMode:(unsigned long long)arg1;
- (void)setTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setType:(id)arg1;
- (unsigned long long)syntheticFocusMode;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })time;
- (id)type;

@end

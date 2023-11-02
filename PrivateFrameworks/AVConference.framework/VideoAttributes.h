
@interface VideoAttributes : NSObject <NSCoding, NSCopying> {
    int  camera;
    bool  cameraSwitching;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  contentsRect;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  framePresentationTime;
    int  orientation;
    struct CGSize { 
        double width; 
        double height; 
    }  ratio;
    float  scaleFactor;
    bool  videoMirrored;
    bool  videoSourceScreen;
}

@property (nonatomic) int camera;
@property (nonatomic) bool cameraSwitching;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentsRect;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } framePresentationTime;
@property (nonatomic) int orientation;
@property (nonatomic) struct CGSize { double x1; double x2; } ratio;
@property (nonatomic) float scaleFactor;
@property (nonatomic) bool videoMirrored;
@property (nonatomic) bool videoSourceScreen;

+ (id)cameraUIDForVideoAttributeCamera:(int)arg1;
+ (int)videoAttributeCameraForCameraUID:(id)arg1;
+ (id)videoAttributesWithVideoAttributes:(id)arg1;

- (int)camera;
- (bool)cameraSwitching;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentsRect;
- (id)copyEncodedDictionary;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)decodeFromNSDictionary:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })framePresentationTime;
- (id)init;
- (id)initWithCameraStatusBits:(unsigned char)arg1 aspectRatio:(struct CGSize { double x1; double x2; })arg2 contentsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 scaleFactor:(float)arg4;
- (id)initWithCoder:(id)arg1;
- (id)initWithEncodedDictionary:(id)arg1;
- (int)orientation;
- (struct CGSize { double x1; double x2; })ratio;
- (float)scaleFactor;
- (void)setCamera:(int)arg1;
- (void)setCameraSwitching:(bool)arg1;
- (void)setContentsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFramePresentationTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setOrientation:(int)arg1;
- (void)setRatio:(struct CGSize { double x1; double x2; })arg1;
- (void)setScaleFactor:(float)arg1;
- (void)setVideoMirrored:(bool)arg1;
- (void)setVideoSourceScreen:(bool)arg1;
- (void)updateCameraStatusBits:(unsigned char)arg1;
- (bool)videoMirrored;
- (bool)videoSourceScreen;

@end

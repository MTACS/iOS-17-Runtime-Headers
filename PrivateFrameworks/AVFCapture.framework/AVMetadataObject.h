
@interface AVMetadataObject : NSObject {
    AVMetadataObjectInternal * _objectInternal;
}

@property (readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } duration;
@property (nonatomic, readonly) bool isCat;
@property (nonatomic, readonly) bool isDog;
@property (nonatomic, readonly) bool isHuman;
@property (nonatomic, readonly) bool isHumanBody;
@property (nonatomic, readonly) bool isHumanFace;
@property (nonatomic, readonly) bool isHumanHead;
@property (nonatomic, readonly) bool isPetBody;
@property (nonatomic, readonly) bool isPetHead;
@property (nonatomic, readonly) bool isSalientObject;
@property (readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } time;
@property (readonly) NSString *type;

// Image: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture

+ (id)derivedMetadataObjectFromMetadataObject:(id)arg1 withTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 isVideoMirrored:(bool)arg3 rollAdjustment:(double)arg4;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (void)dealloc;
- (long long)detectionSource;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (long long)groupID;
- (id)init;
- (id)initDerivedMetadataObjectFromMetadataObject:(id)arg1 withTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 isVideoMirrored:(bool)arg3 rollAdjustment:(double)arg4;
- (id)initWithType:(id)arg1 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 duration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 optionalInfoDict:(id)arg5 originalMetadataObject:(id)arg6 sourceCaptureInput:(id)arg7;
- (id)input;
- (bool)isEqual:(id)arg1;
- (id)originalMetadataObject;
- (void)setDetectionSource:(long long)arg1;
- (unsigned long long)syntheticFocusMode;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })time;
- (id)type;

// Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI

- (bool)isCat;
- (bool)isDog;
- (bool)isHuman;
- (bool)isHumanBody;
- (bool)isHumanFace;
- (bool)isHumanHead;
- (bool)isPetBody;
- (bool)isPetHead;
- (bool)isSalientObject;

@end

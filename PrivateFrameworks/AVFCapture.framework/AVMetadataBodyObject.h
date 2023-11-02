
@interface AVMetadataBodyObject : AVMetadataObject <NSCopying> {
    long long  _bodyID;
}

@property (readonly) long long bodyID;

- (long long)bodyID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initDerivedMetadataObjectFromMetadataObject:(id)arg1 withTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 isVideoMirrored:(bool)arg3 rollAdjustment:(double)arg4 type:(id)arg5 bodyID:(long long)arg6;
- (id)initWithFigEmbeddedCaptureDeviceObjectDictionary:(id)arg1 input:(id)arg2 timeStamp:(id)arg3 type:(id)arg4;
- (id)initWithType:(id)arg1 bodyID:(long long)arg2 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 duration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 optionalInfoDict:(id)arg6 originalMetadataObject:(id)arg7 sourceCaptureInput:(id)arg8;

@end

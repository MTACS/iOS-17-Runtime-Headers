
@interface AVMetadataTrackedFacesObject : AVMetadataObject <NSCopying> {
    AVMetadataTrackedFacesObjectInternal * _trackedFacesObjectInternal;
}

@property (readonly) NSDictionary *payload;

+ (id)trackedFacesWithTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 faceTrackingDictionary:(id)arg2 input:(id)arg3;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)initDerivedMetadataObjectFromMetadataObject:(id)arg1 withTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 isVideoMirrored:(bool)arg3 rollAdjustment:(double)arg4;
- (id)initWithTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 faceTrackingDictionary:(id)arg2 input:(id)arg3;
- (id)payload;

@end

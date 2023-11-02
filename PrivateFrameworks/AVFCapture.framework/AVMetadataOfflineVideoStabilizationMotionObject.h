
@interface AVMetadataOfflineVideoStabilizationMotionObject : AVMetadataObject <NSCopying> {
    AVMetadataOfflineVideoStabilizationMotionObjectInternal * _offlineVISMotionObjectInternal;
}

@property (readonly) NSDictionary *payload;

+ (id)offlineVideoStabilizationMotionObjectWithTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 motionDictionary:(id)arg2 input:(id)arg3;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 motionDictionary:(id)arg2 input:(id)arg3;
- (id)payload;

@end

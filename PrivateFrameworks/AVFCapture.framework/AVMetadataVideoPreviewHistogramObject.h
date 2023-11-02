
@interface AVMetadataVideoPreviewHistogramObject : AVMetadataObject <NSCopying> {
    NSData * _lumaHistogramData;
}

@property (readonly) unsigned long long lumaHistogramBinCount;
@property (readonly) NSData *lumaHistogramData;

+ (id)videoPreviewHistogramObjectWithLumaHistogramData:(id)arg1 input:(id)arg2 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)initDerivedMetadataObjectFromMetadataObject:(id)arg1 withTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 isVideoMirrored:(bool)arg3 rollAdjustment:(double)arg4;
- (id)initWithLumaHistogramData:(id)arg1 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 sourceCaptureInput:(id)arg3;
- (unsigned long long)lumaHistogramBinCount;
- (id)lumaHistogramData;

@end

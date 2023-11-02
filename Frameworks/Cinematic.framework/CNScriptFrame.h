
@interface CNScriptFrame : NSObject <NSCopying> {
    PTCinematographyFrame * _internalFrame;
}

@property (readonly) NSArray *allDetections;
@property (readonly) CNDetection *focusDetection;
@property (readonly) float focusDisparity;
@property (retain) PTCinematographyFrame *internalFrame;
@property (readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } time;

+ (id)_copyFrameFromInternal:(id)arg1;
+ (id)_copyFramesFromInternal:(id)arg1;
+ (id)_copyInternalFromFrames:(id)arg1;

- (void).cxx_destruct;
- (id)_initCopyingInternalFrame:(id)arg1;
- (id)_initTakingInternalFrame:(id)arg1;
- (id)_initWithTimedData:(id)arg1;
- (id)allDetections;
- (id)bestDetectionForGroupID:(long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)detectionForID:(long long)arg1;
- (id)focusDetection;
- (float)focusDisparity;
- (unsigned long long)hash;
- (id)initWithSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (id)initWithTimedMetadataGroup:(id)arg1;
- (id)internalFrame;
- (bool)isEqual:(id)arg1;
- (void)setInternalFrame:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })time;

@end

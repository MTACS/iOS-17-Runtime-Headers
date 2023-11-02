
@interface CAMVideoCaptureResponse : CAMCaptureResponse <CAMTransientAssetConvertible> {
    NSDate * _captureDate;
    long long  _captureMode;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _duration;
    struct CGSize { 
        double width; 
        double height; 
    }  _finalExpectedPixelSize;
    UIImage * _imageWellImage;
    NSURL * _localPersistenceURL;
    NSString * _persistenceUUID;
    UIImage * _previewImage;
    long long  _reason;
    bool  _slowWriterFrameDrops;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _stillDisplayTime;
    NSString * _stillPersistenceUUID;
    double  _videoZoomFactor;
}

@property (nonatomic, readonly, copy) NSString *burstIdentifier;
@property (nonatomic, readonly) NSDate *captureDate;
@property (nonatomic, readonly) long long captureMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } duration;
@property (getter=isExpectingPairedVideo, nonatomic, readonly) bool expectingPairedVideo;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } finalExpectedPixelSize;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIImage *imageWellImage;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } irisStillDisplayTime;
@property (nonatomic, readonly) NSString *irisStillImageUUID;
@property (nonatomic, readonly) NSURL *irisVideoPersistenceURL;
@property (nonatomic, readonly, copy) NSURL *localPersistenceURL;
@property (nonatomic, readonly) unsigned long long mediaSubtypes;
@property (nonatomic, readonly) unsigned long long mediaType;
@property (nonatomic, readonly) unsigned long long numberOfRepresentedAssets;
@property (nonatomic, readonly, copy) NSURL *persistenceURL;
@property (nonatomic, readonly, copy) NSString *persistenceUUID;
@property (nonatomic, readonly) UIImage *placeholderImage;
@property (nonatomic, readonly) UIImage *previewImage;
@property (nonatomic, readonly) long long reason;
@property (nonatomic, readonly) unsigned short sessionIdentifier;
@property (nonatomic, readonly) bool slowWriterFrameDrops;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } stillDisplayTime;
@property (nonatomic, readonly, copy) NSDictionary *stillImageMetadata;
@property (nonatomic, readonly, copy) NSString *stillPersistenceUUID;
@property (nonatomic, readonly) bool stoppedUnexpectedly;
@property (readonly) Class superclass;
@property (getter=isTransientAssetTemporaryPlaceholder, nonatomic, readonly) bool transientAssetTemporaryPlaceholder;
@property (nonatomic, readonly) NSString *uuid;
@property (nonatomic, readonly) double videoZoomFactor;

- (void).cxx_destruct;
- (id)burstIdentifier;
- (id)captureDate;
- (long long)captureMode;
- (id)description;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (struct CGSize { double x1; double x2; })finalExpectedPixelSize;
- (id)imageWellImage;
- (id)initWithUUID:(id)arg1 captureMode:(long long)arg2 captureSession:(unsigned short)arg3 url:(id)arg4 captureDate:(id)arg5 duration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg6 stillPersistenceUUID:(id)arg7 stillDisplayTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg8 reason:(long long)arg9 videoZoomFactor:(double)arg10 finalExpectedPixelSize:(struct CGSize { double x1; double x2; })arg11 imageWellImage:(id)arg12 previewImage:(id)arg13 coordinationInfo:(id)arg14 slowWriterFrameDrops:(bool)arg15;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })irisStillDisplayTime;
- (id)irisStillImageUUID;
- (id)irisVideoPersistenceURL;
- (bool)isExpectingPairedVideo;
- (bool)isTransientAssetTemporaryPlaceholder;
- (id)localPersistenceURL;
- (unsigned long long)mediaSubtypes;
- (unsigned long long)mediaType;
- (unsigned long long)numberOfRepresentedAssets;
- (id)persistenceURL;
- (id)persistenceUUID;
- (id)placeholderImage;
- (id)previewImage;
- (long long)reason;
- (bool)slowWriterFrameDrops;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })stillDisplayTime;
- (id)stillImageMetadata;
- (id)stillPersistenceUUID;
- (bool)stoppedUnexpectedly;
- (id)uuid;
- (double)videoZoomFactor;

@end


@interface CAMVideoPersistenceResponse : CAMPersistenceResponse <CAMTransientAssetConvertible> {
    long long  _captureMode;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _duration;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _stillDisplayTime;
    NSString * _stillPersistenceUUID;
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
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } irisStillDisplayTime;
@property (nonatomic, readonly) NSString *irisStillImageUUID;
@property (nonatomic, readonly) NSURL *irisVideoPersistenceURL;
@property (nonatomic, readonly) unsigned long long mediaSubtypes;
@property (nonatomic, readonly) unsigned long long mediaType;
@property (nonatomic, readonly) unsigned long long numberOfRepresentedAssets;
@property (nonatomic, readonly, copy) NSURL *persistenceURL;
@property (nonatomic, readonly) UIImage *placeholderImage;
@property (nonatomic, readonly) unsigned short sessionIdentifier;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } stillDisplayTime;
@property (nonatomic, readonly, copy) NSDictionary *stillImageMetadata;
@property (nonatomic, readonly, copy) NSString *stillPersistenceUUID;
@property (readonly) Class superclass;
@property (getter=isTransientAssetTemporaryPlaceholder, nonatomic, readonly) bool transientAssetTemporaryPlaceholder;
@property (nonatomic, readonly) NSString *uuid;

- (void).cxx_destruct;
- (id)burstIdentifier;
- (id)captureDate;
- (long long)captureMode;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (struct CGSize { double x1; double x2; })finalExpectedPixelSize;
- (id)initWithUUID:(id)arg1 captureMode:(long long)arg2 captureSession:(unsigned short)arg3 url:(id)arg4 creationDate:(id)arg5 scrubberImage:(id)arg6 finalExpectedPixelSize:(struct CGSize { double x1; double x2; })arg7 duration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg8 stillPersistenceUUID:(id)arg9 stillDisplayTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg10 coordinationInfo:(id)arg11;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })irisStillDisplayTime;
- (id)irisStillImageUUID;
- (id)irisVideoPersistenceURL;
- (bool)isExpectingPairedVideo;
- (bool)isTransientAssetTemporaryPlaceholder;
- (unsigned long long)mediaSubtypes;
- (unsigned long long)mediaType;
- (unsigned long long)numberOfRepresentedAssets;
- (id)placeholderImage;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })stillDisplayTime;
- (id)stillImageMetadata;
- (id)stillPersistenceUUID;
- (id)uuid;

@end

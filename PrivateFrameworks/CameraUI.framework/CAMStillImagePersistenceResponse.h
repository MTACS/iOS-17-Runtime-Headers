
@interface CAMStillImagePersistenceResponse : CAMPersistenceResponse <CAMTransientAssetConvertible> {
    NSString * _burstIdentifier;
    unsigned long long  _burstRepresentedCount;
    bool  _expectingPairedVideo;
    NSDictionary * _metadata;
}

@property (nonatomic, readonly, copy) NSString *burstIdentifier;
@property (nonatomic, readonly) unsigned long long burstRepresentedCount;
@property (nonatomic, readonly) NSDate *captureDate;
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
@property (nonatomic, readonly, copy) NSDictionary *metadata;
@property (nonatomic, readonly) unsigned long long numberOfRepresentedAssets;
@property (nonatomic, readonly, copy) NSURL *persistenceURL;
@property (nonatomic, readonly) UIImage *placeholderImage;
@property (nonatomic, readonly) unsigned short sessionIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *stillImageMetadata;
@property (readonly) Class superclass;
@property (getter=isTransientAssetTemporaryPlaceholder, nonatomic, readonly) bool transientAssetTemporaryPlaceholder;
@property (nonatomic, readonly) NSString *uuid;

- (void).cxx_destruct;
- (id)burstIdentifier;
- (unsigned long long)burstRepresentedCount;
- (id)captureDate;
- (id)description;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (struct CGSize { double x1; double x2; })finalExpectedPixelSize;
- (id)initWithUUID:(id)arg1 captureSession:(unsigned short)arg2 url:(id)arg3 creationDate:(id)arg4 scrubberImage:(id)arg5 finalExpectedPixelSize:(struct CGSize { double x1; double x2; })arg6 metadata:(id)arg7 burstIdentifier:(id)arg8 burstRepresentedCount:(unsigned long long)arg9 expectingPairedVideo:(bool)arg10 coordinationInfo:(id)arg11;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })irisStillDisplayTime;
- (id)irisStillImageUUID;
- (id)irisVideoPersistenceURL;
- (bool)isExpectingPairedVideo;
- (bool)isTransientAssetTemporaryPlaceholder;
- (unsigned long long)mediaSubtypes;
- (unsigned long long)mediaType;
- (id)metadata;
- (unsigned long long)numberOfRepresentedAssets;
- (id)placeholderImage;
- (id)stillImageMetadata;
- (id)uuid;

@end

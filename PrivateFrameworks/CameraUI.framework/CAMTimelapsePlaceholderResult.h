
@interface CAMTimelapsePlaceholderResult : NSObject <CAMTransientAssetConvertible> {
    NSString * _assetUUID;
    long long  _captureDevice;
    long long  _captureOrientation;
    NSDate * _creationDate;
    NSURL * _localPrivateMetadataFileURL;
    void * _previewImageSurface;
    unsigned short  _sessionIdentifier;
    double  _timelapseDuration;
    struct CGSize { 
        double width; 
        double height; 
    }  _videoDimensions;
}

@property (nonatomic, readonly, copy) NSString *assetUUID;
@property (nonatomic, readonly, copy) NSString *burstIdentifier;
@property (nonatomic, readonly) NSDate *captureDate;
@property (nonatomic, readonly) long long captureDevice;
@property (nonatomic, readonly) long long captureOrientation;
@property (nonatomic, readonly, copy) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } duration;
@property (getter=isExpectingPairedVideo, nonatomic, readonly) bool expectingPairedVideo;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } finalExpectedPixelSize;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } irisStillDisplayTime;
@property (nonatomic, readonly) NSString *irisStillImageUUID;
@property (nonatomic, readonly) NSURL *irisVideoPersistenceURL;
@property (nonatomic, readonly, copy) NSURL *localPrivateMetadataFileURL;
@property (nonatomic, readonly) unsigned long long mediaSubtypes;
@property (nonatomic, readonly) unsigned long long mediaType;
@property (nonatomic, readonly) unsigned long long numberOfRepresentedAssets;
@property (nonatomic, readonly, copy) NSURL *persistenceURL;
@property (nonatomic, readonly) UIImage *placeholderImage;
@property (nonatomic, readonly) void*previewImageSurface;
@property (nonatomic, readonly) unsigned short sessionIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *stillImageMetadata;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double timelapseDuration;
@property (getter=isTransientAssetTemporaryPlaceholder, nonatomic, readonly) bool transientAssetTemporaryPlaceholder;
@property (nonatomic, readonly) NSString *uuid;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } videoDimensions;

- (void).cxx_destruct;
- (id)assetUUID;
- (id)burstIdentifier;
- (id)captureDate;
- (long long)captureDevice;
- (long long)captureOrientation;
- (id)creationDate;
- (void)dealloc;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (struct CGSize { double x1; double x2; })finalExpectedPixelSize;
- (id)initWithAssetUUID:(id)arg1 captureSession:(unsigned short)arg2 creationDate:(id)arg3 captureOrientation:(long long)arg4 captureDevice:(long long)arg5 videoDimensions:(struct CGSize { double x1; double x2; })arg6 duration:(double)arg7 previewImageSurface:(void*)arg8 localPrivateMetadataFileURL:(id)arg9;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })irisStillDisplayTime;
- (id)irisStillImageUUID;
- (id)irisVideoPersistenceURL;
- (bool)isExpectingPairedVideo;
- (bool)isTransientAssetTemporaryPlaceholder;
- (id)localPrivateMetadataFileURL;
- (unsigned long long)mediaSubtypes;
- (unsigned long long)mediaType;
- (unsigned long long)numberOfRepresentedAssets;
- (id)persistenceURL;
- (id)placeholderImage;
- (void*)previewImageSurface;
- (unsigned short)sessionIdentifier;
- (id)stillImageMetadata;
- (double)timelapseDuration;
- (id)uuid;
- (struct CGSize { double x1; double x2; })videoDimensions;

@end

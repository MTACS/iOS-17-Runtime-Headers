
@interface CAMStillImageCaptureResponse : CAMCaptureResponse <CAMTransientAssetConvertible> {
    NSString * _burstIdentifier;
    unsigned long long  _burstRepresentedCount;
    NSDate * _captureDate;
    long long  _captureID;
    bool  _expectingPairedVideo;
    struct CGSize { 
        double width; 
        double height; 
    }  _finalExpectedPixelSize;
    UIImage * _imageWellImage;
    NSDictionary * _metadata;
    NSString * _persistenceUUID;
    long long  _semanticEnhanceScene;
    UIImage * _textAnalysisImage;
}

@property (nonatomic, readonly, copy) NSString *burstIdentifier;
@property (nonatomic, readonly) unsigned long long burstRepresentedCount;
@property (nonatomic, readonly) NSDate *captureDate;
@property (nonatomic, readonly) long long captureID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } duration;
@property (getter=isExpectingPairedVideo, nonatomic, readonly) bool expectingPairedVideo;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } finalExpectedPixelSize;
@property (nonatomic, readonly) bool flashFired;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIImage *imageWellImage;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } irisStillDisplayTime;
@property (nonatomic, readonly) NSString *irisStillImageUUID;
@property (nonatomic, readonly) NSURL *irisVideoPersistenceURL;
@property (nonatomic, readonly) unsigned long long mediaSubtypes;
@property (nonatomic, readonly) unsigned long long mediaType;
@property (nonatomic, readonly, copy) NSDictionary *metadata;
@property (nonatomic, readonly) unsigned long long numberOfRepresentedAssets;
@property (nonatomic, readonly, copy) NSURL *persistenceURL;
@property (nonatomic, readonly, copy) NSString *persistenceUUID;
@property (nonatomic, readonly) UIImage *placeholderImage;
@property (nonatomic, readonly) long long semanticEnhanceScene;
@property (nonatomic, readonly) unsigned short sessionIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *stillImageMetadata;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIImage *textAnalysisImage;
@property (getter=isTransientAssetTemporaryPlaceholder, nonatomic, readonly) bool transientAssetTemporaryPlaceholder;
@property (nonatomic, readonly) NSString *uuid;

- (void).cxx_destruct;
- (id)burstIdentifier;
- (unsigned long long)burstRepresentedCount;
- (id)captureDate;
- (long long)captureID;
- (id)description;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (struct CGSize { double x1; double x2; })finalExpectedPixelSize;
- (bool)flashFired;
- (id)imageWellImage;
- (id)initWithUUID:(id)arg1 captureSession:(unsigned short)arg2 captureDate:(id)arg3 metadata:(id)arg4 burstIdentifier:(id)arg5 burstRepresentedCount:(unsigned long long)arg6 imageWellImage:(id)arg7 textAnalysisImage:(id)arg8 coordinationInfo:(id)arg9 finalExpectedPixelSize:(struct CGSize { double x1; double x2; })arg10 expectingPairedVideo:(bool)arg11 captureID:(long long)arg12 semanticEnhanceScene:(long long)arg13;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })irisStillDisplayTime;
- (id)irisStillImageUUID;
- (id)irisVideoPersistenceURL;
- (bool)isExpectingPairedVideo;
- (bool)isTransientAssetTemporaryPlaceholder;
- (unsigned long long)mediaSubtypes;
- (unsigned long long)mediaType;
- (id)metadata;
- (unsigned long long)numberOfRepresentedAssets;
- (id)persistenceURL;
- (id)persistenceUUID;
- (id)placeholderImage;
- (long long)semanticEnhanceScene;
- (id)stillImageMetadata;
- (id)textAnalysisImage;
- (id)uuid;

@end

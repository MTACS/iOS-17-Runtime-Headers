
@protocol CAMTransientAssetConvertible <NSObject>

@required

- (NSString *)burstIdentifier;
- (NSDate *)captureDate;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (struct CGSize { double x1; double x2; })finalExpectedPixelSize;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })irisStillDisplayTime;
- (NSString *)irisStillImageUUID;
- (NSURL *)irisVideoPersistenceURL;
- (bool)isExpectingPairedVideo;
- (bool)isTransientAssetTemporaryPlaceholder;
- (unsigned long long)mediaSubtypes;
- (unsigned long long)mediaType;
- (unsigned long long)numberOfRepresentedAssets;
- (NSURL *)persistenceURL;
- (UIImage *)placeholderImage;
- (unsigned short)sessionIdentifier;
- (NSDictionary *)stillImageMetadata;
- (NSString *)uuid;

@end

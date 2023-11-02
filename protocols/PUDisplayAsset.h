
@protocol PUDisplayAsset <NSObject, NSCopying>

@required

- (double)aspectRatio;
- (bool)canPlayLoopingVideo;
- (bool)canPlayPhotoIris;
- (NSDate *)creationDate;
- (unsigned long long)deferredLogInfo;
- (double)duration;
- (bool)hasPhotoColorAdjustments;
- (bool)isAnimatedImage;
- (unsigned long long)isContentEqualTo:(id <PUDisplayAsset>)arg1;
- (bool)isFavorite;
- (bool)isHidden;
- (bool)isLivePhoto;
- (bool)isPhotoIrisPlaceholder;
- (bool)isTemporaryPlaceholder;
- (NSDate *)localCreationDate;
- (NSString *)localizedGeoDescription;
- (CLLocation *)location;
- (unsigned long long)mediaSubtypes;
- (unsigned long long)mediaType;
- (NSDate *)modificationDate;
- (unsigned long long)originalFilesize;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })photoIrisStillDisplayTime;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })photoIrisVideoDuration;
- (unsigned long long)pixelHeight;
- (unsigned long long)pixelWidth;
- (long long)playbackStyle;
- (unsigned short)playbackVariation;
- (NSString *)uniformTypeIdentifier;
- (NSString *)uuid;

@optional

- (unsigned long long)contentChangeFromDisplayAsset:(id <PUDisplayAsset>)arg1;
- (unsigned short)deferredProcessingNeeded;
- (bool)hasSyndicationInformation;
- (bool)isGuestAsset;
- (bool)needsDeferredProcessing;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })videoKeyFrameSourceTime;

@end

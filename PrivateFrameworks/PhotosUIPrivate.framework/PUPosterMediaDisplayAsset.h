
@interface PUPosterMediaDisplayAsset : NSObject <PXDisplayAsset> {
    PFPosterMedia * _posterMedia;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } acceptableCropRect;
@property (nonatomic, readonly) double aspectRatio;
@property (nonatomic, readonly) float audioScore;
@property (nonatomic, readonly) unsigned long long burstSelectionTypes;
@property (nonatomic, readonly) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) Class defaultImageProviderClass;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } faceAreaRect;
@property (getter=isFavorite, nonatomic, readonly) bool favorite;
@property (nonatomic, readonly) NSData *fetchColorNormalizationData;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSNumber *hdrGain;
@property (nonatomic, readonly) NSDate *importDate;
@property (nonatomic, readonly) bool isAutoPlaybackEligibilityEstimated;
@property (nonatomic, readonly) bool isEligibleForAutoPlayback;
@property (nonatomic, readonly) bool isInCloud;
@property (nonatomic, readonly) bool isInSharedLibrary;
@property (nonatomic, readonly) bool isSpatialMedia;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } livePhotoVideoDuration;
@property (nonatomic, readonly) NSDate *localCreationDate;
@property (nonatomic, readonly) NSString *localizedGeoDescription;
@property (nonatomic, readonly) unsigned long long mediaSubtypes;
@property (nonatomic, readonly) long long mediaType;
@property (nonatomic, readonly) long long originalFileSize;
@property (nonatomic, readonly) unsigned long long pixelHeight;
@property (nonatomic, readonly) unsigned long long pixelWidth;
@property (nonatomic, readonly) long long playbackStyle;
@property (nonatomic, readonly) unsigned short playbackVariation;
@property (nonatomic, readonly) PFPosterMedia *posterMedia;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } preferredCropRect;
@property (nonatomic, readonly) bool representsBurst;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long thumbnailIndex;
@property (nonatomic, readonly) unsigned long long thumbnailVersion;
@property (nonatomic, readonly) NSString *uuid;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })acceptableCropRect;
- (float)audioScore;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (Class)defaultImageProviderClass;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })faceAreaRect;
- (unsigned long long)hash;
- (id)init;
- (id)initWithPosterMedia:(id)arg1;
- (long long)isContentEqualTo:(id)arg1;
- (bool)isEligibleForAutoPlayback;
- (bool)isEqual:(id)arg1;
- (bool)isFavorite;
- (bool)isInCloud;
- (bool)isInSharedLibrary;
- (id)localCreationDate;
- (unsigned long long)mediaSubtypes;
- (long long)mediaType;
- (unsigned long long)pixelHeight;
- (unsigned long long)pixelWidth;
- (long long)playbackStyle;
- (id)posterMedia;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })preferredCropRect;
- (bool)representsBurst;
- (unsigned long long)thumbnailIndex;
- (id)uuid;

@end


@interface _ImageAsset : NSObject {
    UIImage * _image;
}

@property (nonatomic, readonly) UIImage *image;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })acceptableCropRect;
- (float)audioScore;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (Class)defaultImageProviderClass;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })faceAreaRect;
- (id)image;
- (id)initWithImage:(id)arg1;
- (long long)isContentEqualTo:(id)arg1;
- (bool)isEligibleForAutoPlayback;
- (bool)isFavorite;
- (bool)isInCloud;
- (bool)isInSharedLibrary;
- (id)localCreationDate;
- (unsigned long long)mediaSubtypes;
- (long long)mediaType;
- (unsigned long long)pixelHeight;
- (unsigned long long)pixelWidth;
- (long long)playbackStyle;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })preferredCropRect;
- (bool)representsBurst;
- (unsigned long long)thumbnailIndex;

@end

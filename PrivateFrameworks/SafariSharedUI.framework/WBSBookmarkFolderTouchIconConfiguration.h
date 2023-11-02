
@interface WBSBookmarkFolderTouchIconConfiguration : NSObject {
    UIColor * _backgroundColorForEmptySlots;
    UIColor * _colorForDarkeningThumbnailBackground;
    bool  _fillIconWithBackgroundColor;
    unsigned long long  _maximumNumberOfThumbnailIcons;
    unsigned long long  _maximumNumberOfThumbnailRows;
    unsigned long long  _maximumNumberOfThumbnailsPerRow;
    double  _shadowBlurRadius;
    struct CGSize { 
        double width; 
        double height; 
    }  _shadowOffset;
    double  _thumbnailIconInnerMarginScaleFactor;
    double  _thumbnailIconOuterMarginScaleFactor;
    double  _thumbnailIconScaleFactor;
}

@property (nonatomic, readonly) UIColor *backgroundColorForEmptySlots;
@property (nonatomic, readonly) UIColor *colorForDarkeningThumbnailBackground;
@property (nonatomic, readonly) bool fillIconWithBackgroundColor;
@property (nonatomic, readonly) unsigned long long maximumNumberOfThumbnailIcons;
@property (nonatomic, readonly) unsigned long long maximumNumberOfThumbnailRows;
@property (nonatomic, readonly) unsigned long long maximumNumberOfThumbnailsPerRow;
@property (nonatomic, readonly) double shadowBlurRadius;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } shadowOffset;
@property (nonatomic, readonly) double thumbnailIconInnerMarginScaleFactor;
@property (nonatomic, readonly) double thumbnailIconOuterMarginScaleFactor;
@property (nonatomic, readonly) double thumbnailIconScaleFactor;

- (void).cxx_destruct;
- (void)_commonWBSBookmarkFolderIconConfigurationInit;
- (id)backgroundColorForEmptySlots;
- (id)colorForDarkeningThumbnailBackground;
- (bool)fillIconWithBackgroundColor;
- (id)initFor2x2Layout;
- (id)initFor3x3Layout;
- (id)initForTabGroup;
- (unsigned long long)maximumNumberOfThumbnailIcons;
- (unsigned long long)maximumNumberOfThumbnailRows;
- (unsigned long long)maximumNumberOfThumbnailsPerRow;
- (double)shadowBlurRadius;
- (struct CGSize { double x1; double x2; })shadowOffset;
- (double)thumbnailIconInnerMarginScaleFactor;
- (double)thumbnailIconOuterMarginScaleFactor;
- (double)thumbnailIconScaleFactor;

@end

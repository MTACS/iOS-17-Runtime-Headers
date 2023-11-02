
@interface DOCThumbnailFolderIcon : NSObject {
    struct CGSize { 
        double width; 
        double height; 
    }  _badgeSize;
    double  _bottomInset;
    UIImage * _desktopBadge;
    NSString * _desktopBadgeName;
    UIImage * _documentsBadge;
    NSString * _documentsBadgeName;
    UIImage * _downloadsBadge;
    NSString * _downloadsBadgeName;
    UIImage * _genericSharepointBadge;
    NSString * _genericSharepointBadgeName;
    double  _imageDimension;
    NSString * _imageName;
    UIImage * _plainFolderImage;
    UIImage * _sharedBadge;
    double  _sharedBadgeBottomInset;
    NSString * _sharedBadgeName;
    struct CGSize { 
        double width; 
        double height; 
    }  _sharedBadgeSize;
}

@property (nonatomic, readonly) struct CGSize { double x1; double x2; } badgeSize;
@property (nonatomic, readonly) double bottomInset;
@property (nonatomic, readonly) UIImage *desktopBadge;
@property (nonatomic, readonly) UIImage *documentsBadge;
@property (nonatomic, readonly) UIImage *downloadsBadge;
@property (nonatomic, readonly) UIImage *genericSharepointBadge;
@property (nonatomic, readonly) double imageDimension;
@property (nonatomic, readonly) NSString *imageName;
@property (nonatomic, readonly) UIImage *plainFolderImage;
@property (nonatomic, readonly) UIImage *sharedBadge;

+ (id)_folderIconForSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;
+ (id)_folderIconsForImageNamePattern:(id)arg1 documentsBadgeNamePattern:(id)arg2 desktopBadgeNamePattern:(id)arg3 sharedBadgeNamePattern:(id)arg4 downloadsBadgeNamePattern:(id)arg5 genericSharepointBadgeNamePattern:(id)arg6;
+ (id)folderIconForDescriptor:(id)arg1;
+ (id)folderIcons;
+ (id)imageWithStyle:(unsigned long long)arg1 assetImage:(id)arg2;

- (void).cxx_destruct;
- (id)_badgedFolderIconForBadge:(id)arg1 badgeSize:(struct CGSize { double x1; double x2; })arg2 bottomInset:(double)arg3 style:(unsigned long long)arg4;
- (id)badgeForFolderType:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })badgeSize;
- (struct CGSize { double x1; double x2; })badgeSizeForFolderType:(unsigned long long)arg1;
- (id)badgedFolderIconForBadge:(id)arg1 style:(unsigned long long)arg2;
- (id)badgedFolderIconForFolderType:(unsigned long long)arg1 style:(unsigned long long)arg2;
- (double)bottomInset;
- (double)bottomInsetForFolderType:(unsigned long long)arg1;
- (id)desktopBadge;
- (id)documentsBadge;
- (id)downloadsBadge;
- (id)genericSharepointBadge;
- (id)image;
- (double)imageDimension;
- (id)imageName;
- (id)initWithImageName:(id)arg1 documentsBadgeName:(id)arg2 dekstopBadgeName:(id)arg3 sharedBadgeName:(id)arg4 downloadsBadgeName:(id)arg5 genericSharepointBadgeName:(id)arg6 imageDimension:(double)arg7 badgeDimension:(double)arg8 badgeBottomInset:(double)arg9 sharedBadgeDimension:(double)arg10 sharedBadgeBottomInset:(double)arg11;
- (id)plainFolderImage;
- (id)plainFolderImageWithStyle:(unsigned long long)arg1;
- (void)resolveImage;
- (id)sharedBadge;

@end

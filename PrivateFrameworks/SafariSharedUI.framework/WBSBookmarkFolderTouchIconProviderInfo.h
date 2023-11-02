
@interface WBSBookmarkFolderTouchIconProviderInfo : NSObject {
    NSArray * _backgroundColors;
    NSArray * _thumbnailImages;
    UIImage * _touchIcon;
}

@property (nonatomic, readonly, copy) NSArray *backgroundColors;
@property (nonatomic, readonly, copy) NSArray *thumbnailImages;
@property (nonatomic, readonly) UIImage *touchIcon;

+ (id)new;

- (void).cxx_destruct;
- (id)backgroundColors;
- (id)init;
- (id)initWithThumbnailImages:(id)arg1 backgroundColors:(id)arg2 touchIcon:(id)arg3;
- (id)thumbnailImages;
- (id)touchIcon;

@end

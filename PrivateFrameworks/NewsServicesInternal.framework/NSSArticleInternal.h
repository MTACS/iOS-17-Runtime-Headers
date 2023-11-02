
@interface NSSArticleInternal : NSObject <NSCoding> {
    NSDate * _publishDate;
    UIImage * _publisherLogoImage;
    UIImage * _publisherLogoMaskImage;
    NSString * _publisherName;
    NSString * _shortExcerpt;
    UIImage * _thumbnailImage;
    NSString * _title;
}

@property (nonatomic, readonly) NSDate *publishDate;
@property (nonatomic, readonly) UIImage *publisherLogoImage;
@property (nonatomic, readonly) UIImage *publisherLogoMaskImage;
@property (nonatomic, readonly) NSString *publisherName;
@property (nonatomic, readonly) NSString *shortExcerpt;
@property (nonatomic, readonly) UIImage *thumbnailImage;
@property (nonatomic, readonly) NSString *title;

+ (void)_articleFromCoreSpotlightIdentifier:(id)arg1 domain:(id)arg2 completion:(id /* block */)arg3;
+ (void)articleFromCoreSpotlightIdentifier:(id)arg1 completion:(id /* block */)arg2;
+ (void)articleFromNotification:(id)arg1 completion:(id /* block */)arg2;
+ (void)articleFromNotificationUserInfo:(id)arg1 thumbnailFileURL:(id)arg2 publisherLogoFileURL:(id)arg3 publisherLogoMaskFileURL:(id)arg4 completion:(id /* block */)arg5;
+ (bool)coreSpotlightIdentifierRepresentsArticleIdentifier:(id)arg1;
+ (id)imageWithURL:(id)arg1;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithThumbnailImage:(id)arg1 title:(id)arg2 shortExcerpt:(id)arg3 publishDate:(id)arg4 publisherName:(id)arg5 publisherLogoImage:(id)arg6 publisherLogoMaskImage:(id)arg7;
- (id)publishDate;
- (id)publisherLogoImage;
- (id)publisherLogoMaskImage;
- (id)publisherName;
- (id)shortExcerpt;
- (id)thumbnailImage;
- (id)title;

@end

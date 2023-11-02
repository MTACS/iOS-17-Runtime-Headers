
@protocol WKThumbnailRepresentable <NSCopying>

@required

- (UIImage *)thumbnailImage;
- (NSURL *)thumbnailImageURL;

@end

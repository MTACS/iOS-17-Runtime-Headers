
@protocol WBSSiteMetadataImageCacheDelegate <NSObject>

@optional

- (NSString *)siteMetadataImageCache:(WBSSiteMetadataImageCache *)arg1 customFileNameForKeyString:(NSString *)arg2;
- (void)siteMetadataImageCache:(WBSSiteMetadataImageCache *)arg1 didFinishLoadingImage:(UIImage *)arg2 forKeyString:(NSString *)arg3;
- (void)siteMetadataImageCache:(WBSSiteMetadataImageCache *)arg1 didRemoveImageFromCacheForKeyString:(NSString *)arg2;
- (void)siteMetadataImageCacheDidEmptyCache:(WBSSiteMetadataImageCache *)arg1;
- (void)siteMetadataImageCacheDidFinishLoadingSettings:(WBSSiteMetadataImageCache *)arg1;

@end


@protocol PHImageCacheDelegate <NSObject>

@required

- (void)imageCache:(PHImageCache *)arg1 didEvictCacheEntry:(PHImageCacheEntry *)arg2;

@end

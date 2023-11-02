
@protocol AVTImageCache <AVTResourceCache>

@required

- (UIImage *)imageForItem:(id <AVTCacheableResource>)arg1 scope:(id <AVTCacheableResourceScope>)arg2;
- (UIImage *)imageForItem:(void *)arg1 scope:(void *)arg2 cacheMissHandler:(void *)arg3; // needs 3 arg types, found 9: <AVTCacheableResource> *, <AVTCacheableResourceScope> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, UIImage *, id /* block */, <AVTCacheableResource> *, <AVTCacheableResourceScope> *, void*

@end

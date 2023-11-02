
@interface AVTInMemoryImageCache : AVTInMemoryResourceCache <AVTImageCache>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)imageForItem:(id)arg1 scope:(id)arg2;
- (id)imageForItem:(id)arg1 scope:(id)arg2 cacheMissHandler:(id /* block */)arg3;
- (id)initWithLockProvider:(id /* block */)arg1 logger:(id)arg2;

@end

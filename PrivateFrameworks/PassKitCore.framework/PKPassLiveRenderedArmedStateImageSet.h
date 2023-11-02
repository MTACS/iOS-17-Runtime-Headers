
@interface PKPassLiveRenderedArmedStateImageSet : PKPassLiveRenderedImageSet

+ (id)archiveName;
+ (unsigned int)currentVersion;
+ (long long)imageSetType;
+ (bool)shouldCache;

- (id)initWithDisplayProfile:(id)arg1 fileURL:(id)arg2 screenScale:(double)arg3 suffix:(id)arg4;

@end

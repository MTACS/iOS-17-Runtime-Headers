
@interface PKImageSet : NSObject <NSSecureCoding> {
    NSURL * _originCacheURL;
    long long  _version;
}

@property (nonatomic, copy) NSURL *originCacheURL;
@property (nonatomic) long long version;

+ (id)_archiveImageSetIfAppropriate:(id)arg1 screenScale:(double)arg2 screenSize:(struct CGSize { double x1; double x2; })arg3 archiveURL:(id)arg4 cacheURL:(id)arg5;
+ (id)_archiveURL:(id)arg1;
+ (id)_createXPCContainerForImageSetWithType:(long long)arg1 displayProfile:(id)arg2 screenScale:(double)arg3 screenSize:(struct CGSize { double x1; double x2; })arg4 suffix:(id)arg5 fileURL:(id)arg6 cacheURL:(id)arg7 imageSetOut:(id*)arg8;
+ (id)archiveName;
+ (id)cachedXPCContainerForImageSetWithType:(long long)arg1 displayProfile:(id)arg2 displayTraits:(id)arg3 cacheURL:(id)arg4;
+ (Class)classForDisplayProfile:(id)arg1 imageSetType:(long long)arg2;
+ (Class)classForImageSetType:(long long)arg1;
+ (id)createXPCContainerForImageSet:(id)arg1 screenScale:(double)arg2 screenSize:(struct CGSize { double x1; double x2; })arg3 cacheURL:(id)arg4;
+ (id)createXPCContainerForImageSetWithType:(long long)arg1 displayProfile:(id)arg2 screenScale:(double)arg3 screenSize:(struct CGSize { double x1; double x2; })arg4 suffix:(id)arg5 fileURL:(id)arg6 cacheURL:(id)arg7;
+ (unsigned int)currentVersion;
+ (id)imageSetForType:(long long)arg1 screenScale:(double)arg2 suffix:(id)arg3 displayProfile:(id)arg4 fileURL:(id)arg5;
+ (long long)imageSetType;
+ (bool)shouldCache;
+ (bool)shouldCacheForDisplayProfile:(id)arg1 imageSetType:(long long)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_isSetImage:(id)arg1 equalToImage:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDisplayProfile:(id)arg1 fileURL:(id)arg2 screenScale:(double)arg3 suffix:(id)arg4;
- (id)originCacheURL;
- (void)preheatImages;
- (void)setOriginCacheURL:(id)arg1;
- (void)setVersion:(long long)arg1;
- (long long)version;

@end

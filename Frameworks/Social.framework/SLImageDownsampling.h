
@interface SLImageDownsampling : NSObject

+ (id)createThumbnailWithData:(id)arg1 adjustSmallestSideToSize:(unsigned long long)arg2;
+ (id)downsampleImageData:(id)arg1 toMaxByteSize:(unsigned long long)arg2;
+ (void)downsampleImageData:(id)arg1 toMaxByteSize:(unsigned long long)arg2 resultsHandler:(id /* block */)arg3;
+ (void)generateThumbnailFromImageData:(id)arg1 adjustSmallestSideToSize:(unsigned long long)arg2 resultsHandler:(id /* block */)arg3;
+ (struct { long long x1; long long x2; })imageSizeWithData:(id)arg1;

@end

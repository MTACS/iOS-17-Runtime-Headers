
@protocol NUImageProperties <NSObject, NSCopying>

@required

- (long long)alphaInfo;
- (NSDictionary *)auxiliaryImagesProperties;
- (NUColorSpace *)colorSpace;
- (long long)componentInfo;
- (NSString *)fileUTI;
- (double)gainMapHeadroom;
- (NUVersion *)gainMapVersion;
- (bool)hasGainMap;
- (bool)isHDR;
- (NSDictionary *)metadata;
- (long long)orientation;
- (<NURAWImageProperties> *)rawProperties;
- (struct { long long x1; long long x2; })size;
- (NSURL *)url;

@end

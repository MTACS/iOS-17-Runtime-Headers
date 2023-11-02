
@protocol IMImageModifier <NSObject>

@required

- (bool)hasModifications;
- (UIImage *)imageFromSourceImage:(UIImage *)arg1;
- (NSString *)modificationCacheKey;

@end

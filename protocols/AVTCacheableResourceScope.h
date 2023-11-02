
@protocol AVTCacheableResourceScope <NSObject>

@required

- (unsigned long long)cacheableResourceAssociatedCost;
- (NSString *)cacheableResourceAssociatedIdentifier;

@end

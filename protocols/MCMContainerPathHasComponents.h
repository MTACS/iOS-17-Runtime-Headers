
@protocol MCMContainerPathHasComponents <NSObject, NSCopying>

@required

- (NSURL *)baseURL;
- (NSURL *)categoryURL;
- (NSURL *)classURL;

@end

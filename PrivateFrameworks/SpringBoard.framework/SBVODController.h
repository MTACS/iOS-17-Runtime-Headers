
@interface SBVODController : NSObject

+ (id)sharedInstance;

- (void)_launchIPodIfNecessary;
- (void)dealloc;
- (id)init;

@end

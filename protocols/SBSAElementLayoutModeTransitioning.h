
@protocol SBSAElementLayoutModeTransitioning <NSObject>

@required

- (bool)isInitialized;
- (long long)previousElementLayoutMode;
- (long long)targetElementLayoutMode;

@end

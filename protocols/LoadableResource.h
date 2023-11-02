
@protocol LoadableResource <NSObject>

@required

- (double)estimatedProgress;
- (bool)isActive;
- (bool)isContentReady;

@end


@protocol NULoadable <NSObject>

@required

- (<NULoadingDelegate> *)loadingDelegate;
- (void)setLoadingDelegate:(id <NULoadingDelegate>)arg1;

@end

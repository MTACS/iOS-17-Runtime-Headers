
@protocol PXAutoloopVideoTaskDelegate <NSObject>

@optional

- (void)autoloopVideoTaskProgressDidChange:(PXAutoloopVideoTask *)arg1;
- (void)autoloopVideoTaskStatusDidChange:(PXAutoloopVideoTask *)arg1;

@end

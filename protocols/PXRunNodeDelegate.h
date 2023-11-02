
@protocol PXRunNodeDelegate <NSObject>

@optional

- (void)runNode:(id <PXRunNode>)arg1 didCancelWithError:(NSError *)arg2;
- (void)runNode:(id <PXRunNode>)arg1 didCompleteWithError:(NSError *)arg2;
- (void)runNodeWillStartRunning:(id <PXRunNode>)arg1;

@end

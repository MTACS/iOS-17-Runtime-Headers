
@protocol PNPPlatterViewController

@required

- (<PNPPlatterViewControllerPlatterDelegate> *)platterDelegate;
- (unsigned long long)preferredEdge;
- (void)setPlatterDelegate:(id <PNPPlatterViewControllerPlatterDelegate>)arg1;

@optional

- (double)preferredCornerRadius;

@end

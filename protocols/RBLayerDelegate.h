
@protocol RBLayerDelegate <CALayerDelegate>

@optional

- (void)RBLayer:(RBLayer *)arg1 draw:(RBDisplayList *)arg2;
- (RBDevice *)RBLayerDefaultDevice:(RBLayer *)arg1;

@end

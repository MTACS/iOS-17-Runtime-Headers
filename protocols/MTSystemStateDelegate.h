
@protocol MTSystemStateDelegate <NSObject>

@required

- (void)handleF5Reset;
- (void)restoreDidFinish;

@end

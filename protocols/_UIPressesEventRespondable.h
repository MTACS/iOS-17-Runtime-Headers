
@protocol _UIPressesEventRespondable <NSObject>

@required

- (void)pressesBegan:(NSSet *)arg1 withEvent:(UIPressesEvent *)arg2;
- (void)pressesCancelled:(NSSet *)arg1 withEvent:(UIPressesEvent *)arg2;
- (void)pressesChanged:(NSSet *)arg1 withEvent:(UIPressesEvent *)arg2;
- (void)pressesEnded:(NSSet *)arg1 withEvent:(UIPressesEvent *)arg2;

@end

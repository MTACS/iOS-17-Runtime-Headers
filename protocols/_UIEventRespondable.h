
@protocol _UIEventRespondable <NSObject>

@required

- (void)_componentsBegan:(NSSet *)arg1 withEvent:(UIEvent *)arg2;
- (void)_componentsCancelled:(NSSet *)arg1 withEvent:(UIEvent *)arg2;
- (void)_componentsChanged:(NSSet *)arg1 withEvent:(UIEvent *)arg2;
- (void)_componentsEnded:(NSSet *)arg1 withEvent:(UIEvent *)arg2;

@end

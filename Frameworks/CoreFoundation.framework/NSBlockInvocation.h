
@interface NSBlockInvocation : NSInvocation

- (void)invoke;
- (void)invokeSuper;
- (void)invokeUsingIMP:(int (*)arg1;
- (SEL)selector;
- (void)setSelector:(SEL)arg1;

@end

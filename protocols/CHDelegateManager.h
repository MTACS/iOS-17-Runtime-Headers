
@protocol CHDelegateManager <NSObject>

@required

- (void)performDelegateSelector:(SEL)arg1 withDelegate:(id <CHDelegate>)arg2;

@end

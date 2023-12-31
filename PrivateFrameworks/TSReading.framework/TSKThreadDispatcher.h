
@interface TSKThreadDispatcher : NSObject

+ (id)sharedInstance;

- (void)dispatch:(id /* block */)arg1;
- (void)dispatchSelector:(SEL)arg1 target:(id)arg2 argument:(id)arg3;
- (id)p_dispatchQueue;

@end

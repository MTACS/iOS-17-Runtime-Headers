
@interface AXUIReachabilityHelper : NSObject

+ (id)sharedHelper;

- (void)animateForReachability:(id /* block */)arg1 payload:(id)arg2 completion:(id /* block */)arg3;
- (double)reachabilityOffsetForPayload:(id)arg1;

@end

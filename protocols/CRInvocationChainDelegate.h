
@protocol CRInvocationChainDelegate <NSObject>

@required

- (bool)invocationChain:(CRInvocationChain *)arg1 shouldForwardInvocation:(NSInvocation *)arg2 toTarget:(id)arg3;

@end

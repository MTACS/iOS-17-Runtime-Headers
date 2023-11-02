
@protocol ACFHTTPMethodInvocationDelegate <NSObject>

@required

- (void)httpMethodInvocation:(ACFHTTPMethodInvocation *)arg1 didFailWithError:(NSError *)arg2;
- (void)httpMethodInvocation:(ACFHTTPMethodInvocation *)arg1 didFinishWithResult:(NSData *)arg2;

@end

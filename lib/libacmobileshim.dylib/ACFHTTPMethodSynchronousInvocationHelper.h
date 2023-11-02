
@interface ACFHTTPMethodSynchronousInvocationHelper : NSObject <ACFHTTPMethodInvocationDelegate> {
    NSError * _error;
    NSData * _result;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSError *error;
@property (readonly) unsigned long long hash;
@property (retain) NSData *result;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)error;
- (void)httpMethodInvocation:(id)arg1 didFailWithError:(id)arg2;
- (void)httpMethodInvocation:(id)arg1 didFinishWithResult:(id)arg2;
- (id)result;
- (void)setError:(id)arg1;
- (void)setResult:(id)arg1;

@end


@protocol AMSRequestEncoding <NSObject>

@optional

- (AMSPromise *)requestByEncodingRequest:(NSURLRequest *)arg1 parameters:(id)arg2;
- (NSMutableURLRequest *)requestByEncodingRequest:(NSURLRequest *)arg1 parameters:(id)arg2 error:(id*)arg3;

@end

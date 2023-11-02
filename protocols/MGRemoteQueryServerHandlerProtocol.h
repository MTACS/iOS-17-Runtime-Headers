
@protocol MGRemoteQueryServerHandlerProtocol <NSObject>

@required

+ (id)handlerForRequest:(NSURLRequest *)arg1;
+ (NSString *)urlPath;

- (int)prepareResponse:(NSObject<OS_nw_http_fields> *)arg1;
- (void)provideResponseData:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*

@optional

- (bool)validateRequest;

@end


@protocol OspreyRPC <NSObject>

@required

- (<OspreyClientStreamingContext> *)bidirectionalStreamingRequestWithMethodName:(void *)arg1 requestBuilder:(void *)arg2 streamingResponseHandler:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 19: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, OspreyMutableRequest *, void*, id /* block */, void*, void, id /* block */, NSData *, void*, id /* block */, void*, void, id /* block */, NSError *, void*
- (<OspreyClientStreamingContext> *)clientStreamingRequestWithMethodName:(void *)arg1 requestBuilder:(void *)arg2 responseHandler:(void *)arg3; // needs 3 arg types, found 14: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, OspreyMutableRequest *, void*, id /* block */, void*, void, id /* block */, NSData *, NSError *, void*
- (void)serverStreamingRequestWithMethodName:(void *)arg1 requestData:(void *)arg2 requestBuilder:(void *)arg3 streamingResponseHandler:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 20: NSString *, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, OspreyMutableRequest *, void*, id /* block */, void*, void, id /* block */, NSData *, void*, id /* block */, void*, void, id /* block */, NSError *, void*
- (void)unaryRequestWithMethodName:(void *)arg1 requestData:(void *)arg2 requestBuilder:(void *)arg3 responseHandler:(void *)arg4; // needs 4 arg types, found 15: NSString *, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, OspreyMutableRequest *, void*, id /* block */, void*, void, id /* block */, NSData *, NSError *, void*

@end

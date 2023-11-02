
@interface SPRSecureChannel : SPRObject

+ (id)secureChannelWithName:(id)arg1 error:(id*)arg2;
+ (id)serverResponseBody;
+ (id)serverResponseHeader;

- (id)init;
- (id)initWithName:(id)arg1 error:(id*)arg2;
- (id)securingRequest:(id)arg1 error:(id*)arg2;
- (id)startDataTaskWithRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)startDownloadTaskWithRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)startSessionAsyncWithRequest:(id)arg1 configuration:(id)arg2 delegate:(id)arg3 error:(id*)arg4;
- (bool)startSessionAsyncWithRequest:(id)arg1 delegate:(id)arg2 error:(id*)arg3;
- (id)startSessionWithRequest:(id)arg1 configuration:(id)arg2 error:(id*)arg3;
- (id)startSessionWithRequest:(id)arg1 error:(id*)arg2;

@end

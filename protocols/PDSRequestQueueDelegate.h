
@protocol PDSRequestQueueDelegate <NSObject>

@required

- (void)requestQueue:(PDSRequestQueue *)arg1 processedRequest:(PDSRequest *)arg2 withResponse:(PDSResponse *)arg3;
- (long long)ttlForRequest:(PDSRequest *)arg1;

@end

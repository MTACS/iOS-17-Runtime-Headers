
@protocol IKNetworkRequestRecord <NSObject>

@required

- (void)didCompleteLoadingFromCache:(long long)arg1 mimeType:(NSString *)arg2 withResponseBody:(NSData *)arg3;
- (void)didCompleteLoadingFromCache:(void *)arg1 withResponseBodyBlock:(void *)arg2; // needs 2 arg types, found 14: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id /* block */, void*, void, id /* block */, NSData *, NSString *, NSError *, void*, void*
- (void)didCompleteLoadingFromMemoryWithRequest:(void *)arg1 response:(void *)arg2 withResponseBodyBlock:(void *)arg3; // needs 3 arg types, found 15: NSURLRequest *, NSURLResponse *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id /* block */, void*, void, id /* block */, NSData *, NSString *, NSError *, void*, void*
- (void)didCompleteLoadingWithResponseBody:(NSData *)arg1;
- (void)didFailWithError:(NSError *)arg1;
- (void)didReceiveData:(NSData *)arg1;
- (void)didReceiveResponse:(NSHTTPURLResponse *)arg1 timingData:(NSDictionary *)arg2;
- (NSString *)identifier;
- (long long)initiatorType;
- (long long)resourceType;
- (long long)state;
- (void)willSendRequest:(NSURLRequest *)arg1;
- (void)willSendRequest:(NSURLRequest *)arg1 redirectResponse:(NSHTTPURLResponse *)arg2;

@end


@protocol PEResourceLoaderDelegate <NSObject>

@required

- (void)resourceLoader:(PEResourceLoader *)arg1 request:(PEResourceLoadRequest *)arg2 didCompleteWithResult:(PEResourceLoadResult *)arg3;
- (void)resourceLoader:(PEResourceLoader *)arg1 request:(PEResourceLoadRequest *)arg2 downloadProgress:(double)arg3;
- (void)resourceLoader:(PEResourceLoader *)arg1 request:(PEResourceLoadRequest *)arg2 mediaLoadDidFailWithError:(NSError *)arg3;

@optional

- (OS_dispatch_queue *)callbackQueue;
- (void)photoEditResourceLoadRequestDidCompleteDownload:(PEResourceLoadRequest *)arg1;
- (void)photoEditResourceLoadRequestResourcesAvailabilityChanged:(PEResourceLoadRequest *)arg1 previousAvailability:(long long)arg2 currentAvailability:(long long)arg3;
- (void)photoEditResourceLoadRequestWillBeginDownload:(PEResourceLoadRequest *)arg1;

@end

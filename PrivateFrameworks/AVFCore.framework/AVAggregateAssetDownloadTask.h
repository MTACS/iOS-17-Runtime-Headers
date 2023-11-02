
@interface AVAggregateAssetDownloadTask : NSURLSessionTask

@property (nonatomic, readonly) AVURLAsset *URLAsset;
@property (readonly, copy) NSURLRequest *currentRequest;
@property (readonly, copy) NSURLRequest *originalRequest;
@property (readonly, copy) NSURLResponse *response;

- (id)URLAsset;
- (id)currentRequest;
- (id)originalRequest;
- (id)response;

@end


@interface NSURLSessionAVAssetDownloadTask : NSURLSessionTask {
    unsigned long long  _AVAssetDownloadToken;
}

@property (readonly) unsigned long long AVAssetDownloadToken;
@property (readonly, copy) NSURL *URL;
@property (readonly, copy) NSURL *destinationURL;

- (unsigned long long)AVAssetDownloadToken;
- (id)URL;
- (id)destinationURL;

@end


@interface HMCameraClipDownloadAssetDataTask : NSObject {
    <HMCameraClipDownloadAssetDataTaskHandling> * _handler;
    NSMutableURLRequest * _urlRequest;
}

@property (readonly) <HMCameraClipDownloadAssetDataTaskHandling> *handler;
@property (readonly) NSMutableURLRequest *urlRequest;

- (void).cxx_destruct;
- (id)downloadDataForByteRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)handler;
- (id)initWithURL:(id)arg1 httpHeaderFields:(id)arg2;
- (id)initWithURL:(id)arg1 httpHeaderFields:(id)arg2 handler:(id)arg3;
- (id)urlRequest;

@end

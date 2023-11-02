
@interface TKCloudKitFetch : NSObject {
    bool  _active;
    bool  _cancelled;
    <TKNetworkTask> * _downloadTask;
    NSURL * _downloadURL;
    NSError * _error;
    <TKNetworkTask> * _queryTask;
    TMLJSONObject * _response;
    NSMutableURLRequest * _urlRequest;
}

@property (nonatomic, readonly) bool active;
@property (nonatomic, readonly) bool cancelled;
@property (nonatomic, retain) NSURL *downloadURL;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) TMLJSONObject *response;
@property (nonatomic, retain) NSMutableURLRequest *urlRequest;

- (void).cxx_destruct;
- (bool)active;
- (void)cancel;
- (bool)cancelled;
- (void)dealloc;
- (void)downloadAssetFromCloudKit;
- (id)downloadURL;
- (id)error;
- (void)handleDownloadResponse:(id)arg1 error:(id)arg2;
- (void)handleResponse:(id)arg1 data:(id)arg2 responseError:(id)arg3;
- (id)init;
- (id)response;
- (void)send;
- (void)setDownloadURL:(id)arg1;
- (void)setResponse:(id)arg1;
- (void)setUrlRequest:(id)arg1;
- (void)tmlDispose;
- (id)urlRequest;

@end

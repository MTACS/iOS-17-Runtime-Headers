
@interface CKStreamingAssetAppendContext : NSObject <C2RequestDelegate> {
    NSObject<OS_dispatch_queue> * _appendQueue;
    bool  _appending;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    id /* block */  _completionHandler;
    bool  _currentAppendCancelled;
    unsigned long long  _currentSegmentLength;
    NSURLSessionDataTask * _dataTask;
    bool  _fakeMissingUploadReceipt;
    NSObject<OS_os_activity> * _osActivity;
    NSString * _requestUUID;
    CKStreamingAsset * _streamingAsset;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *appendQueue;
@property (getter=isAppending, nonatomic) bool appending;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (getter=isCurrentAppendCancelled, nonatomic) bool currentAppendCancelled;
@property (nonatomic) unsigned long long currentSegmentLength;
@property (nonatomic, retain) NSURLSessionDataTask *dataTask;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool fakeMissingUploadReceipt;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_os_activity> *osActivity;
@property (nonatomic, retain) NSString *requestUUID;
@property (nonatomic, readonly) CKStreamingAsset *streamingAsset;
@property (readonly) Class superclass;

+ (id)requestToAppendSegmentData:(id)arg1 uploadURL:(id)arg2 requestUUID:(id)arg3 offset:(unsigned long long)arg4;

- (void).cxx_destruct;
- (id)CKDescriptionPropertiesWithPublic:(bool)arg1 private:(bool)arg2 shouldExpand:(bool)arg3;
- (void)URLSession:(id)arg1 _taskIsWaitingForConnection:(id)arg2;
- (void)URLSession:(id)arg1 _willRetryBackgroundDataTask:(id)arg2 withError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 _conditionalRequirementsChanged:(bool)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 _willSendRequestForEstablishedConnection:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(id /* block */)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)abort;
- (id)appendQueue;
- (void)appendSegmentWithData:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)appendSegmentWithData:(id)arg1 error:(id*)arg2;
- (bool)appendSegmentWithData:(id)arg1 newStreamingAsset:(id*)arg2 error:(id*)arg3;
- (id)callbackQueue;
- (id /* block */)completionHandler;
- (unsigned long long)currentSegmentLength;
- (id)dataTask;
- (id)description;
- (bool)fakeMissingUploadReceipt;
- (id)init;
- (id)initWithStreamingAsset:(id)arg1;
- (bool)isAppending;
- (bool)isCurrentAppendCancelled;
- (id)osActivity;
- (id)requestUUID;
- (void)setAppending:(bool)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setCurrentAppendCancelled:(bool)arg1;
- (void)setCurrentSegmentLength:(unsigned long long)arg1;
- (void)setDataTask:(id)arg1;
- (void)setFakeMissingUploadReceipt:(bool)arg1;
- (void)setOsActivity:(id)arg1;
- (void)setRequestUUID:(id)arg1;
- (id)streamingAsset;

@end

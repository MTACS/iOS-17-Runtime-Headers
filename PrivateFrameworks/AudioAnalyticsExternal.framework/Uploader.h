
@interface Uploader : NSObject {
    NSDictionary * _bucketInfo;
    NSObject<OS_dispatch_semaphore> * _concurrentUploadSemaphore;
    NSObject<OS_os_log> * _logger;
    NSObject<OS_dispatch_queue> * _queue;
    NSURLSession * _session;
}

@property (retain) NSDictionary *bucketInfo;
@property (retain) NSObject<OS_dispatch_semaphore> *concurrentUploadSemaphore;
@property (retain) NSObject<OS_os_log> *logger;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) NSURLSession *session;

- (void).cxx_destruct;
- (id)_authorizationHeaderWithRequest:(id)arg1 withContentType:(id)arg2 withContentMD5:(id)arg3 withDate:(id)arg4;
- (id)_dateStringForHeaderForDate:(id)arg1;
- (id)_hmacSHA1WithKey:(id)arg1 forData:(id)arg2;
- (id)_md5OfData:(id)arg1;
- (void)_uploadFile:(id)arg1 bucket:(id)arg2 prefix:(id)arg3 withCompletion:(id /* block */)arg4;
- (id)_urlRequestForFileAtPath:(id)arg1 bucket:(id)arg2 prefix:(id)arg3 error:(id*)arg4;
- (id)bucketInfo;
- (id)concurrentUploadSemaphore;
- (id)init:(id)arg1;
- (void)invalidateConnection;
- (id)logger;
- (id)queue;
- (id)session;
- (void)setBucketInfo:(id)arg1;
- (void)setConcurrentUploadSemaphore:(id)arg1;
- (void)setLogger:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setSession:(id)arg1;
- (void)uploadFile:(id)arg1 bucket:(id)arg2 subfolder:(id)arg3 withCompletion:(id /* block */)arg4;

@end

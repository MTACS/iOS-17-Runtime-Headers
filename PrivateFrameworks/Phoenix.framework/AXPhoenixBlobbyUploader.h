
@interface AXPhoenixBlobbyUploader : NSObject {
    NSDictionary * _bucketInfo;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_semaphore> * _semaphore;
    NSURLSession * _session;
}

+ (id)_getStringforDate:(id)arg1;
+ (id)sharedUploader;

- (void).cxx_destruct;
- (void)_completeUploadRequestWithData:(id)arg1 urlResponse:(id)arg2 error:(id)arg3 forPackagePath:(id)arg4 withCompletion:(id /* block */)arg5;
- (id)_dateStringForHeaderForDate:(id)arg1;
- (id)_getAuthorizationForRequest:(id)arg1 headers:(id)arg2;
- (id)_hmacSHA1WithKey:(id)arg1 forData:(id)arg2;
- (id)_md5OfData:(id)arg1;
- (id)_prefixFromPackageFilePath:(id)arg1;
- (void)_uploadPackage:(id)arg1 bucket:(id)arg2 prefix:(id)arg3 withCompletion:(id /* block */)arg4;
- (void)_uploadPackagePath:(id)arg1 bucket:(id)arg2 prefix:(id)arg3 withCompletion:(id /* block */)arg4;
- (id)_urlRequestForFileAtPath:(id)arg1 bucket:(id)arg2 prefix:(id)arg3 error:(id*)arg4;
- (id)init;
- (void)uploadPackages:(id)arg1 toBucket:(id)arg2 withCompletion:(id /* block */)arg3;

@end

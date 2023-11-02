
@interface _HDOntologyShardDownloadTask : NSObject <NSURLSessionTaskDelegate> {
    HDOntologyShardDownloader * _downloader;
    HKOntologyShardRegistryEntry * _entry;
    NSError * _error;
    NSObject<OS_dispatch_group> * _group;
    NSURLSession * _session;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (bool)_handleResponse:(id)arg1 task:(id)arg2;
- (id)error;
- (id)init;
- (id)initForEntry:(id)arg1 downloader:(id)arg2 session:(id)arg3 group:(id)arg4;
- (void)resume;
- (void)setError:(id)arg1;

@end

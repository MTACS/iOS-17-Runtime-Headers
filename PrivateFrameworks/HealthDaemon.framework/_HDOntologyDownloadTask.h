
@interface _HDOntologyDownloadTask : NSObject {
    NSObject<OS_dispatch_group> * _downloadGroup;
    NSArray * _downloadTasks;
    HDOntologyShardDownloader * _downloader;
    NSObject<OS_dispatch_queue> * _queue;
    NSURLSession * _session;
}

- (void).cxx_destruct;
- (id)_taskError;
- (void)downloadShardsForEntries:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)initForDownloader:(id)arg1 session:(id)arg2 queue:(id)arg3;

@end

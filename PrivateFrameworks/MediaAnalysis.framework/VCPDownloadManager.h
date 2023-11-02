
@interface VCPDownloadManager : NSObject {
    NSMutableData * _buffer;
    id /* block */  _cancel;
    NSURLSessionDataTask * _dataTask;
    unsigned long long  _length;
    NSString * _localIdentifier;
    NSObject<OS_dispatch_semaphore> * _mutex;
    NSObject<OS_dispatch_semaphore> * _semaphore;
}

@property (nonatomic, copy) id /* block */ cancel;

+ (void)_reportDownload:(unsigned long long)arg1;
+ (unsigned long long)maxSizeBytes;
+ (id)sharedManager;

- (void).cxx_destruct;
- (id /* block */)cancel;
- (void)flush;
- (id)init;
- (id)requestDownloadOfResource:(id)arg1;
- (void)setCancel:(id /* block */)arg1;

@end

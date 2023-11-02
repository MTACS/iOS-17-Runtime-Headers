
@interface HFCameraTimelapseVideoProvider : NSObject {
    NSObject<OS_dispatch_queue> * _bookkeepingQueue;
    NSOperationQueue * _downloadQueue;
    <HFCameraVideoDownloader> * _timelapseVideoDownloader;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *bookkeepingQueue;
@property (nonatomic, retain) NSOperationQueue *downloadQueue;
@property (nonatomic, retain) <HFCameraVideoDownloader> *timelapseVideoDownloader;

+ (id)sharedProvider;

- (void).cxx_destruct;
- (void)_getVideoForTimelapseClip:(id)arg1 taskType:(unsigned long long)arg2 delegate:(id)arg3;
- (id)bookkeepingQueue;
- (id)downloadQueue;
- (void)getVideoForTimelapseClip:(id)arg1 taskType:(unsigned long long)arg2 delegate:(id)arg3;
- (id)init;
- (void)setBookkeepingQueue:(id)arg1;
- (void)setDownloadQueue:(id)arg1;
- (void)setTimelapseVideoDownloader:(id)arg1;
- (id)timelapseVideoDownloader;

@end

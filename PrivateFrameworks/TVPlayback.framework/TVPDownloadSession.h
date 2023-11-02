
@interface TVPDownloadSession : NSObject <AVAssetDownloadDelegatePrivate> {
    <TVPDownloadSessionDelegate> * _delegate;
    AVAssetDownloadURLSession * _downloadSession;
    NSMutableDictionary * _taskIDsToDownloads;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <TVPDownloadSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) AVAssetDownloadURLSession *downloadSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableDictionary *taskIDsToDownloads;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 assetDownloadTask:(id)arg2 didLoadTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg3 totalTimeRangesLoaded:(id)arg4 timeRangeExpectedToLoad:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg5;
- (void)URLSession:(id)arg1 assetDownloadTask:(id)arg2 willDownloadToURL:(id)arg3;
- (void)URLSession:(id)arg1 assetDownloadTask:(id)arg2 willDownloadVariants:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSessionDidFinishEventsForBackgroundURLSession:(id)arg1;
- (id)assetDownloadTaskWithConfiguration:(id)arg1;
- (id)delegate;
- (id)downloadForMediaItem:(id)arg1;
- (id)downloadSession;
- (id)init;
- (void)initializeWithDownloadingMediaItems:(id)arg1;
- (void)registerDownloadTask:(id)arg1 forDownload:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setDownloadSession:(id)arg1;
- (void)setTaskIDsToDownloads:(id)arg1;
- (id)taskIDsToDownloads;
- (void)unregisterDownloadTaskForDownload:(id)arg1;

@end


@interface HMCameraClipFetchVideoAssetContextOperation : HMFOperation {
    HMCameraClip * _clip;
    NSURL * _clipDestinationFileURL;
    HMCameraClipManager * _clipManager;
    <HMCameraClipFetchAssetContextOperationDataSource> * _dataSource;
    id /* block */  _downloadProgressHandler;
    id /* block */  _fetchVideoAssetContextCompletionBlock;
    NSURL * _hlsPlaylistDestinationFileURL;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _videoDataSegmentsRange;
    unsigned long long  _videoSegmentsDownloadBatchSize;
}

@property (readonly) HMCameraClip *clip;
@property (copy) NSURL *clipDestinationFileURL;
@property (readonly) HMCameraClipManager *clipManager;
@property (readonly) <HMCameraClipFetchAssetContextOperationDataSource> *dataSource;
@property (copy) id /* block */ downloadProgressHandler;
@property (copy) id /* block */ fetchVideoAssetContextCompletionBlock;
@property (copy) NSURL *hlsPlaylistDestinationFileURL;
@property struct _NSRange { unsigned long long x1; unsigned long long x2; } videoDataSegmentsRange;
@property unsigned long long videoSegmentsDownloadBatchSize;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)cancelWithError:(id)arg1;
- (id)clip;
- (id)clipDestinationFileURL;
- (id)clipManager;
- (id)dataSource;
- (id)decryptData:(id)arg1;
- (id)description;
- (id /* block */)downloadProgressHandler;
- (id)downloadVideoAsset:(id)arg1;
- (id)downloadVideoSegments:(id)arg1 forDataTask:(id)arg2 andAppendToOutputStream:(id)arg3;
- (id)fetchVideoAssetContext;
- (id /* block */)fetchVideoAssetContextCompletionBlock;
- (void)finishWithVideoAssetContext:(id)arg1;
- (id)hlsPlaylistDestinationFileURL;
- (id)initWithClipManager:(id)arg1 clip:(id)arg2;
- (id)initWithClipManager:(id)arg1 clip:(id)arg2 dataSource:(id)arg3;
- (id)logIdentifier;
- (void)main;
- (void)setClipDestinationFileURL:(id)arg1;
- (void)setDownloadProgressHandler:(id /* block */)arg1;
- (void)setFetchVideoAssetContextCompletionBlock:(id /* block */)arg1;
- (void)setHlsPlaylistDestinationFileURL:(id)arg1;
- (void)setVideoDataSegmentsRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setVideoSegmentsDownloadBatchSize:(unsigned long long)arg1;
- (void)updateDownloadProgressToPercentageComplete:(unsigned long long)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })videoDataSegmentsRange;
- (unsigned long long)videoSegmentsDownloadBatchSize;
- (id)videoSegmentsToDownload;
- (id)writeHLSPlaylistForVideoAssetContext:(id)arg1;

@end

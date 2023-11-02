
@interface HFCameraVideoDownloadOperation : NSBlockOperation {
    HMCameraClip * _clip;
    <HFCameraVideoDownloaderDelegate> * _delegate;
    NSURL * _destinationURL;
    id /* block */  _downloadBlock;
    bool  _fileAlreadyExists;
    HFCameraAnalyticsCameraTimelapseLoadEvent * _timelapseLoadEvent;
}

@property (nonatomic, retain) HMCameraClip *clip;
@property (nonatomic) <HFCameraVideoDownloaderDelegate> *delegate;
@property (nonatomic, retain) NSURL *destinationURL;
@property (nonatomic, copy) id /* block */ downloadBlock;
@property (nonatomic) bool fileAlreadyExists;
@property (nonatomic, retain) HFCameraAnalyticsCameraTimelapseLoadEvent *timelapseLoadEvent;

+ (id)downloadOperationForClip:(id)arg1;

- (void).cxx_destruct;
- (id)clip;
- (id)delegate;
- (id)description;
- (id)destinationURL;
- (id /* block */)downloadBlock;
- (bool)fileAlreadyExists;
- (void)fileDownloadFailedWithError:(id)arg1;
- (void)fileDownloadFinishedWithElapsedTime:(double)arg1;
- (void)fileDownloadNotNeeded;
- (void)fileDownloadProgress:(unsigned long long)arg1;
- (id)init;
- (void)setClip:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDestinationURL:(id)arg1;
- (void)setDownloadBlock:(id /* block */)arg1;
- (void)setFileAlreadyExists:(bool)arg1;
- (void)setTimelapseLoadEvent:(id)arg1;
- (id)timelapseLoadEvent;

@end

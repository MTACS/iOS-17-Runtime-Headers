
@interface HFCameraPosterFrameProvider : NSObject <HFCameraTimelapsePosterFrameGeneratorDelegate, HFCameraVideoDownloaderDelegate> {
    NSObject<OS_dispatch_queue> * _bookkeepingQueue;
    HFCameraImageCache * _imageCache;
    HFCameraTimelapsePosterFrameGenerator * _posterFrameGenerator;
    HFCameraPosterFrameRequests * _posterFrameRequests;
    struct CGSize { 
        double width; 
        double height; 
    }  _posterFrameSize;
    <HFCameraTimelapseClipInfoProvider> * _timelapseClipInfoProvider;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *bookkeepingQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) HFCameraImageCache *imageCache;
@property (nonatomic, retain) HFCameraTimelapsePosterFrameGenerator *posterFrameGenerator;
@property (nonatomic, retain) HFCameraPosterFrameRequests *posterFrameRequests;
@property (nonatomic) struct CGSize { double x1; double x2; } posterFrameSize;
@property (readonly) Class superclass;
@property (nonatomic) <HFCameraTimelapseClipInfoProvider> *timelapseClipInfoProvider;

- (void).cxx_destruct;
- (void)_checkImageCacheForDelegate:(id)arg1 forHighQualityClip:(id)arg2 atOffset:(double)arg3;
- (void)_generateImageForDelegate:(id)arg1 forHighQualityClip:(id)arg2 atOffset:(double)arg3;
- (void)_requestTimelapseFileForDelegate:(id)arg1 forHighQualityClip:(id)arg2 atOffset:(double)arg3;
- (void)_requestTimelapsePosterFrameGenerationForTimelapseClip:(id)arg1;
- (id)_timelapseClipForHighQualityClip:(id)arg1;
- (void)_updateDelegate:(id)arg1 withPosterFrame:(id)arg2 atOffset:(double)arg3 ForHighQualityClip:(id)arg4;
- (id)bookkeepingQueue;
- (void)didDownloadVideoFileForClip:(id)arg1 toURL:(id)arg2;
- (void)didGeneratePosterFrame:(id)arg1 forHighQualityClip:(id)arg2 atOffset:(double)arg3 withTimelapseOffset:(double)arg4;
- (void)failedToDownloadVideoFileForClip:(id)arg1;
- (void)failedToFindTimelapseClipForHighQualityClip:(id)arg1;
- (void)failedToGeneratePosterFrameForHighQualityClip:(id)arg1 atOffset:(double)arg2;
- (void)foundVideoFileForClip:(id)arg1 atURL:(id)arg2;
- (void)getPosterFrameForDelegate:(id)arg1 forHighQualityClip:(id)arg2 atOffset:(double)arg3;
- (id)imageCache;
- (id)initWithImageCache:(id)arg1 andTimelapseClipInfoProvider:(id)arg2;
- (id)posterFrameGenerator;
- (id)posterFrameRequests;
- (struct CGSize { double x1; double x2; })posterFrameSize;
- (void)setBookkeepingQueue:(id)arg1;
- (void)setImageCache:(id)arg1;
- (void)setPosterFrameGenerator:(id)arg1;
- (void)setPosterFrameRequests:(id)arg1;
- (void)setPosterFrameSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setTimelapseClipInfoProvider:(id)arg1;
- (id)timelapseClipInfoProvider;

@end

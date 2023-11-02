
@interface HFCameraTimelapsePosterFrameGenerator : NSObject <HFCameraImageGeneratorDelegate> {
    <HFCameraTimelapsePosterFrameGeneratorDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _generationQueue;
    NSMutableDictionary * _posterFrameGenerationRequests;
    <HFCameraTimelapseClipInfoProvider> * _timelapseClipInfoProvider;
}

@property (nonatomic) <HFCameraTimelapsePosterFrameGeneratorDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *generationQueue;
@property (nonatomic, retain) NSMutableDictionary *posterFrameGenerationRequests;
@property (nonatomic) <HFCameraTimelapseClipInfoProvider> *timelapseClipInfoProvider;

- (void).cxx_destruct;
- (id)_generateOffsetsForHighQualityClip:(id)arg1 withStep:(unsigned long long)arg2;
- (void)_generatePosterFramesForAsset:(id)arg1 forOffsets:(id)arg2 atSize:(struct CGSize { double x1; double x2; })arg3 withHighQualityClip:(id)arg4 andTimelapseOffset:(double)arg5;
- (void)_generatePosterFramesForTimelapseClip:(id)arg1 withHighQualityClip:(id)arg2 forOffsets:(id)arg3 atSize:(struct CGSize { double x1; double x2; })arg4;
- (id)_generateTimelapseOffsetsFromOffsets:(id)arg1 forTimelapseDiff:(double)arg2;
- (id)_generationRequestForImageGenerator:(id)arg1 withKey:(id)arg2;
- (void)_removeGenerationRequestForImageGenerator:(id)arg1 withKey:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (id)generatePosterFramesForHighQualityClip:(id)arg1 withStep:(unsigned long long)arg2 atSize:(struct CGSize { double x1; double x2; })arg3;
- (id)generationQueue;
- (void)imageGenerator:(id)arg1 didGenerateImage:(id)arg2 requestedTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 actualTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4 forKey:(id)arg5;
- (void)imageGenerator:(id)arg1 failedToGenerateImageForRequestedTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 actualTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 forKey:(id)arg4;
- (void)imageGenerator:(id)arg1 finishedGeneratingImagesForKey:(id)arg2;
- (id)initWithTimelapseClipInfoProvider:(id)arg1 andDelegate:(id)arg2;
- (id)posterFrameGenerationRequests;
- (void)setDelegate:(id)arg1;
- (void)setGenerationQueue:(id)arg1;
- (void)setPosterFrameGenerationRequests:(id)arg1;
- (void)setTimelapseClipInfoProvider:(id)arg1;
- (id)timelapseClipInfoProvider;

@end

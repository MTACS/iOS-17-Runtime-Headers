
@interface HFCameraPosterFrameRequests : NSObject {
    NSMutableDictionary * _generationRequests;
    NSMutableDictionary * _timelapseRequests;
}

@property (nonatomic, retain) NSMutableDictionary *generationRequests;
@property (nonatomic, retain) NSMutableDictionary *timelapseRequests;

- (void).cxx_destruct;
- (void)addRequestForTimelapseFileForDelegate:(id)arg1 forHighQualityClip:(id)arg2 andTimelapseClip:(id)arg3 atOffset:(double)arg4;
- (void)addRequestsForPosterFrameGeneration:(id)arg1 forHighQualityClip:(id)arg2;
- (id)fulfillAllRequestsForPosterFrameGenerationForHighQualityClip:(id)arg1;
- (id)fulfillRequestForPosterFrameGenerationForHighQualityClip:(id)arg1 atOffset:(double)arg2;
- (id)fulfillRequestsForTimelapseFileForTimelapseClip:(id)arg1;
- (id)generationRequests;
- (id)init;
- (void)setGenerationRequests:(id)arg1;
- (void)setTimelapseRequests:(id)arg1;
- (id)timelapseRequests;

@end

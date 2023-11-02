
@interface FigCaptureCinematographyPipeline : FigCapturePipeline {
    BWRealtimeCinematographyNode * _cinematographyNode;
    NSString * _sourceID;
    BWFusionTrackerNode * _trackerNode;
    BWVideoDepthNode * _videoDepthNode;
}

+ (void)initialize;

- (void)dealloc;

@end

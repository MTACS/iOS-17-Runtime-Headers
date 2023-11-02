
@interface PLVideoPlaybackResourceChoiceOptimizer : NSObject {
    bool  _masterVideoIsPlayable;
    bool  _masterVideoIsPresent;
    NSArray * _playableVideos;
    NSArray * _videoResources;
}

@property (nonatomic, readonly) NSArray *preferredVideoResources;

- (void).cxx_destruct;
- (id)initWithVideoResources:(id)arg1;
- (id)preferredVideoResources;

@end

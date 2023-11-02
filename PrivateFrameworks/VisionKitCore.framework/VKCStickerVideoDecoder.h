
@interface VKCStickerVideoDecoder : NSObject {
    long long  _currentFrameIndex;
    <VKCStickerVideoDecoderDelegate> * _delegate;
    long long  _frameCount;
    NSArray * _frameDelays;
    NSMutableArray * _frames;
    bool  _paused;
    NSTimer * _timer;
    struct CGImageSource { } * _videoCGImageSource;
    NSData * _videoData;
    NSDictionary * _videoSourceProperties;
}

@property (nonatomic) long long currentFrameIndex;
@property (nonatomic) <VKCStickerVideoDecoderDelegate> *delegate;
@property (nonatomic) long long frameCount;
@property (nonatomic, retain) NSArray *frameDelays;
@property (nonatomic, retain) NSMutableArray *frames;
@property (getter=isPaused, nonatomic) bool paused;
@property (nonatomic, retain) NSTimer *timer;
@property (nonatomic) struct CGImageSource { }*videoCGImageSource;
@property (nonatomic, retain) NSData *videoData;
@property (nonatomic, retain) NSDictionary *videoSourceProperties;

- (void).cxx_destruct;
- (void)beginPlayback;
- (void)configureForVideoDataChange;
- (long long)currentFrameIndex;
- (id)delegate;
- (void)displayNextFrame;
- (struct CGImage { }*)frameAtIndex:(long long)arg1;
- (long long)frameCount;
- (id)frameDelays;
- (id)frames;
- (bool)isPaused;
- (void)setCurrentFrameIndex:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFrameCount:(long long)arg1;
- (void)setFrameDelays:(id)arg1;
- (void)setFrames:(id)arg1;
- (void)setPaused:(bool)arg1;
- (void)setTimer:(id)arg1;
- (void)setVideoCGImageSource:(struct CGImageSource { }*)arg1;
- (void)setVideoData:(id)arg1;
- (void)setVideoSourceProperties:(id)arg1;
- (id)timer;
- (struct CGImageSource { }*)videoCGImageSource;
- (id)videoData;
- (id)videoSourceProperties;

@end

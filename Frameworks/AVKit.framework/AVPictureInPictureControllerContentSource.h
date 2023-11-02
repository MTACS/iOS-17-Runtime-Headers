
@interface AVPictureInPictureControllerContentSource : NSObject {
    <AVPictureInPictureContentSource> * __activeVideoCallContentViewController;
    id  __activeVideoCallSourceView;
    AVPictureInPictureContentViewController * _activeContentViewController;
    UIView * _activeSourceView;
    bool  _hasInitialRenderSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _initialRenderSize;
    AVPlayerLayer * _playerLayer;
    AVSampleBufferDisplayLayer * _sampleBufferDisplayLayer;
    <AVPictureInPictureSampleBufferPlaybackDelegate> * _sampleBufferPlaybackDelegate;
}

@property (nonatomic, readonly) <AVPictureInPictureContentSource> *_activeVideoCallContentViewController;
@property (nonatomic, readonly) id _activeVideoCallSourceView;
@property (nonatomic, readonly) AVPictureInPictureContentViewController *activeContentViewController;
@property (nonatomic, readonly) UIView *activeSourceView;
@property (nonatomic, readonly) AVPictureInPictureVideoCallViewController *activeVideoCallContentViewController;
@property (nonatomic, readonly) UIView *activeVideoCallSourceView;
@property (nonatomic, readonly) bool hasInitialRenderSize;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } initialRenderSize;
@property (nonatomic, readonly) AVPlayerLayer *playerLayer;
@property (nonatomic, readonly) AVSampleBufferDisplayLayer *sampleBufferDisplayLayer;
@property (nonatomic, readonly) <AVPictureInPictureSampleBufferPlaybackDelegate> *sampleBufferPlaybackDelegate;
@property (nonatomic, readonly) <AVPictureInPictureContentSource> *source;

+ (long long)version;

- (void).cxx_destruct;
- (id)_activeVideoCallContentViewController;
- (id)_activeVideoCallSourceView;
- (id)activeContentViewController;
- (id)activeSourceView;
- (id)activeVideoCallContentViewController;
- (id)activeVideoCallSourceView;
- (void)dealloc;
- (bool)hasInitialRenderSize;
- (id)init;
- (id)initWithActiveVideoCallSourceView:(id)arg1 contentViewController:(id)arg2;
- (id)initWithPlayerLayer:(id)arg1;
- (id)initWithSampleBufferDisplayLayer:(id)arg1 initialRenderSize:(struct CGSize { double x1; double x2; })arg2 playbackDelegate:(id)arg3;
- (id)initWithSampleBufferDisplayLayer:(id)arg1 playbackDelegate:(id)arg2;
- (id)initWithSourceView:(id)arg1 contentViewController:(id)arg2 playerController:(id)arg3;
- (struct CGSize { double x1; double x2; })initialRenderSize;
- (id)playerLayer;
- (id)sampleBufferDisplayLayer;
- (id)sampleBufferPlaybackDelegate;
- (id)source;

@end

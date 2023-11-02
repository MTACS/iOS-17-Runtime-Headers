
@interface AVPlayerControllerWebKitData : NSObject {
    <AVPlayerControllerWebKitDelegate> * _delegate;
    AVPlayerController * _playerController;
    bool  _scrubbing;
    double  _seekToTime;
}

@property (nonatomic) <AVPlayerControllerWebKitDelegate> *delegate;
@property (getter=isScrubbing, nonatomic) bool scrubbing;
@property (nonatomic) double seekToTime;

- (void).cxx_destruct;
- (id)delegate;
- (id)initWithPlayerController:(id)arg1;
- (bool)isScrubbing;
- (double)seekToTime;
- (void)setDelegate:(id)arg1;
- (void)setScrubbing:(bool)arg1;
- (void)setSeekToTime:(double)arg1;

@end


@interface IMAVPlayerVideoViewController : AVPlayerViewController {
    IMAVPlayer * _im_player;
}

@property (nonatomic) IMAVPlayer *im_player;

- (void).cxx_destruct;
- (id)im_player;
- (id)initWithPlayer:(id)arg1;
- (void)mediaItemDidChange;
- (void)playbackSpeedDidChange;
- (void)setIm_player:(id)arg1;

@end

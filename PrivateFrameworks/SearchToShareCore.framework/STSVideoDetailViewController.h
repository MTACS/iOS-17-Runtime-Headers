
@interface STSVideoDetailViewController : STSResultDetailViewController <LPYouTubePlayerDelegate> {
    LPYouTubePlayerView * _playerView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)setContentURL:(id)arg1;
- (void)viewDidLoad;
- (void)youTubePlayer:(id)arg1 didChangeToState:(long long)arg2;

@end

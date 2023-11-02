
@interface UIContinuousPathIntroductionView : UIKBTutorialModalDisplay {
    UIView * _keyboardView;
    UIButton * _landscapeButton;
    NSArray * _landscapeConstraints;
    UILabel * _landscapeTextBody;
    double  _paddingAdjust;
    AVQueuePlayer * _player;
    AVPlayerLooper * _playerLooper;
    NSArray * _portraitConstraints;
    double  _textMargin;
    UIView * _textVideoContainer;
    NSLayoutConstraint * _videoHeight;
    AVPlayerLayer * _videoLayer;
    struct CGSize { 
        double width; 
        double height; 
    }  _videoSize;
    NSLayoutConstraint * _videoWidth;
}

@property (nonatomic, retain) UIView *keyboardView;
@property (nonatomic, retain) UIButton *landscapeButton;
@property (nonatomic, retain) NSArray *landscapeConstraints;
@property (nonatomic, retain) UILabel *landscapeTextBody;
@property (nonatomic, retain) NSArray *portraitConstraints;
@property (nonatomic, retain) UIView *textVideoContainer;
@property (nonatomic, retain) NSLayoutConstraint *videoHeight;
@property (nonatomic, retain) AVPlayerLayer *videoLayer;
@property (nonatomic, retain) NSLayoutConstraint *videoWidth;

- (void).cxx_destruct;
- (id)_introductionMovieAssetURL;
- (void)extraButtonTapAction;
- (id)initWithKeyboardAppearance:(long long)arg1;
- (id)keyboardView;
- (id)landscapeButton;
- (id)landscapeConstraints;
- (id)landscapeTextBody;
- (id)mediaContents;
- (double)mediaLayoutWidthAdjustment;
- (id)portraitConstraints;
- (void)removeFromSuperview;
- (void)setKeyboardView:(id)arg1;
- (void)setLandscapeButton:(id)arg1;
- (void)setLandscapeConstraints:(id)arg1;
- (void)setLandscapeTextBody:(id)arg1;
- (void)setPortraitConstraints:(id)arg1;
- (void)setTextVideoContainer:(id)arg1;
- (void)setVideoHeight:(id)arg1;
- (void)setVideoLayer:(id)arg1;
- (void)setVideoWidth:(id)arg1;
- (void)setupConstraintData;
- (id)textBodyDescriptions;
- (long long)textBodyMaxLines;
- (id)textTitleDescriptions;
- (id)textVideoContainer;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateVideoLayerWithNewVideo:(bool)arg1;
- (id)videoHeight;
- (id)videoLayer;
- (id)videoWidth;

@end

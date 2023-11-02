
@interface SFShareAudioHoldButtonViewController : SFShareAudioBaseViewController {
    UIButton * _cancelButton;
    unsigned int  _colorCode;
    UILabel * _infoLabel;
    NSLayoutConstraint * _movieViewHeightConstraint;
    NSLayoutConstraint * _movieViewLeadingConstraint;
    NSLayoutConstraint * _movieViewTrailingConstraint;
    unsigned int  _productID;
    SFMediaPlayerView * _productMovieView;
    UIImageView * _shareImageView;
}

@property (nonatomic, retain) UIButton *cancelButton;
@property (nonatomic) unsigned int colorCode;
@property (nonatomic, retain) UILabel *infoLabel;
@property (nonatomic, retain) NSLayoutConstraint *movieViewHeightConstraint;
@property (nonatomic, retain) NSLayoutConstraint *movieViewLeadingConstraint;
@property (nonatomic, retain) NSLayoutConstraint *movieViewTrailingConstraint;
@property (nonatomic) unsigned int productID;
@property (nonatomic, retain) SFMediaPlayerView *productMovieView;
@property (nonatomic, retain) UIImageView *shareImageView;

- (void).cxx_destruct;
- (void)_updateDeviceVisual:(id)arg1;
- (id)cancelButton;
- (unsigned int)colorCode;
- (void)eventCancel:(id)arg1;
- (id)infoLabel;
- (id)movieViewHeightConstraint;
- (id)movieViewLeadingConstraint;
- (id)movieViewTrailingConstraint;
- (unsigned int)productID;
- (id)productMovieView;
- (void)setCancelButton:(id)arg1;
- (void)setColorCode:(unsigned int)arg1;
- (void)setInfoLabel:(id)arg1;
- (void)setMovieViewHeightConstraint:(id)arg1;
- (void)setMovieViewLeadingConstraint:(id)arg1;
- (void)setMovieViewTrailingConstraint:(id)arg1;
- (void)setProductID:(unsigned int)arg1;
- (void)setProductMovieView:(id)arg1;
- (void)setShareImageView:(id)arg1;
- (id)shareImageView;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end


@interface SFShareAudioConnectingViewController : SFShareAudioBaseViewController {
    UIButton * _cancelButton;
    unsigned int  _colorCode;
    unsigned int  _productID;
    unsigned int  _productIDActive;
    UIImageView * _productImageView;
    SFMediaPlayerView * _productMovieView;
    UIActivityIndicatorView * _progressActivity;
    UILabel * _progressLabel;
    UIView * _progressView;
    UIImageView * _shareImageView;
}

@property (nonatomic, retain) UIButton *cancelButton;
@property (nonatomic) unsigned int colorCode;
@property (nonatomic) unsigned int productID;
@property (nonatomic, retain) UIImageView *productImageView;
@property (nonatomic, retain) SFMediaPlayerView *productMovieView;
@property (nonatomic, retain) UIActivityIndicatorView *progressActivity;
@property (nonatomic, retain) UILabel *progressLabel;
@property (nonatomic, retain) UIView *progressView;
@property (nonatomic, retain) UIImageView *shareImageView;

- (void).cxx_destruct;
- (void)_updateDeviceVisual:(id)arg1;
- (void)_updateForDeviceInfo;
- (id)cancelButton;
- (unsigned int)colorCode;
- (void)eventCancel:(id)arg1;
- (unsigned int)productID;
- (id)productImageView;
- (id)productMovieView;
- (id)progressActivity;
- (id)progressLabel;
- (id)progressView;
- (void)sessionProgressEvent:(int)arg1 info:(id)arg2;
- (void)setCancelButton:(id)arg1;
- (void)setColorCode:(unsigned int)arg1;
- (void)setProductID:(unsigned int)arg1;
- (void)setProductImageView:(id)arg1;
- (void)setProductMovieView:(id)arg1;
- (void)setProgressActivity:(id)arg1;
- (void)setProgressLabel:(id)arg1;
- (void)setProgressView:(id)arg1;
- (void)setShareImageView:(id)arg1;
- (id)shareImageView;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end

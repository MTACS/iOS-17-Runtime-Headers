
@interface BTShareAudioConfirmViewController : BTShareAudioBaseViewController {
    UIButton * _cancelButton;
    unsigned int  _colorCode;
    UIButton * _confirmButton;
    NSString * _deviceName;
    unsigned int  _productID;
    UIImageView * _productImageView;
    BTMediaPlayerView * _productMovieView;
    UIImageView * _shareImageView;
}

@property (nonatomic, retain) UIButton *cancelButton;
@property (nonatomic) unsigned int colorCode;
@property (nonatomic, retain) UIButton *confirmButton;
@property (nonatomic, copy) NSString *deviceName;
@property (nonatomic) unsigned int productID;
@property (nonatomic, retain) UIImageView *productImageView;
@property (nonatomic, retain) BTMediaPlayerView *productMovieView;
@property (nonatomic, retain) UIImageView *shareImageView;

- (void).cxx_destruct;
- (void)_updateDeviceVisual:(id)arg1;
- (id)cancelButton;
- (unsigned int)colorCode;
- (id)confirmButton;
- (id)deviceName;
- (void)eventCancel:(id)arg1;
- (void)eventPermanentButton:(id)arg1;
- (void)eventTemporarilyShareButton:(id)arg1;
- (unsigned int)productID;
- (id)productImageView;
- (id)productMovieView;
- (void)setCancelButton:(id)arg1;
- (void)setColorCode:(unsigned int)arg1;
- (void)setConfirmButton:(id)arg1;
- (void)setDeviceName:(id)arg1;
- (void)setProductID:(unsigned int)arg1;
- (void)setProductImageView:(id)arg1;
- (void)setProductMovieView:(id)arg1;
- (void)setShareImageView:(id)arg1;
- (id)shareImageView;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end

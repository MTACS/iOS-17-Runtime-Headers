
@interface BTShareAudioBringCloseViewController : BTShareAudioBaseViewController {
    UIImageView * _bannerImageView;
    UIButton * _cancelButton;
    NSMutableArray * _cycleImageArray;
    NSObject<OS_dispatch_source> * _cycleImageTimer;
    unsigned int  _cycleNextIndex;
    UILabel * _infoLabel;
    UIView * _productImageContainerView;
    UIImageView * _shareImageView;
}

@property (nonatomic, retain) UIImageView *bannerImageView;
@property (nonatomic, retain) UIButton *cancelButton;
@property (nonatomic, retain) UILabel *infoLabel;
@property (nonatomic, retain) UIView *productImageContainerView;
@property (nonatomic, retain) UIImageView *shareImageView;

- (void).cxx_destruct;
- (void)_cycleProductImage;
- (id)bannerImageView;
- (id)cancelButton;
- (void)eventCancel:(id)arg1;
- (id)infoLabel;
- (id)productImageContainerView;
- (void)setBannerImageView:(id)arg1;
- (void)setCancelButton:(id)arg1;
- (void)setInfoLabel:(id)arg1;
- (void)setProductImageContainerView:(id)arg1;
- (void)setShareImageView:(id)arg1;
- (id)shareImageView;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end


@interface SFShareAudioBringCloseViewController : SFShareAudioBaseViewController {
    UIButton * _cancelButton;
    NSMutableArray * _cycleImageArray;
    NSObject<OS_dispatch_source> * _cycleImageTimer;
    unsigned int  _cycleNextIndex;
    UILabel * _infoLabel;
    UIImageView * _shareImageView;
}

@property (nonatomic, retain) UIButton *cancelButton;
@property (nonatomic, retain) UILabel *infoLabel;
@property (nonatomic, retain) UIImageView *shareImageView;

- (void).cxx_destruct;
- (void)_cycleProductImage;
- (id)cancelButton;
- (void)eventCancel:(id)arg1;
- (id)infoLabel;
- (void)setCancelButton:(id)arg1;
- (void)setInfoLabel:(id)arg1;
- (void)setShareImageView:(id)arg1;
- (id)shareImageView;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end


@interface MFMailDropBannerView : MFMessageHeaderViewBlock {
    unsigned long long  _bannerState;
    <MFMailDropBannerDelegate> * _delegate;
    UIButton * _downloadIcon;
    UILabel * _downloadLabel;
    double  _downloadProgress;
    NSLayoutConstraint * _expirationBottom;
    NSLayoutConstraint * _expirationFirstBaseline;
    UILabel * _expirationLabel;
    bool  _hasLoaded;
    NSLayoutConstraint * _iconWrapperWidth;
    NSLayoutConstraint * _labelFirstBaseline;
    EMMailDropMetadata * _metaData;
    MFProgressView * _progressView;
}

@property (nonatomic) unsigned long long bannerState;
@property (nonatomic) <MFMailDropBannerDelegate> *delegate;
@property (nonatomic) double downloadProgress;
@property (nonatomic, retain) EMMailDropMetadata *metaData;

- (void).cxx_destruct;
- (bool)_hasDataLocally;
- (void)_setupDownloadIcon;
- (void)_setupDownloadLabel;
- (void)_setupExpirationLabel;
- (bool)_shouldDisplayProgress;
- (unsigned long long)bannerState;
- (void)contentSizeCategoryDidChangeNotification:(id)arg1;
- (id)delegate;
- (double)downloadProgress;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)metaData;
- (void)setBannerState:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDownloadProgress:(double)arg1;
- (void)setMetaData:(id)arg1;
- (void)setSeparatorIsHidden:(bool)arg1;
- (bool)shouldPresent;
- (void)startDownload:(id)arg1;
- (void)updateConstraints;

@end

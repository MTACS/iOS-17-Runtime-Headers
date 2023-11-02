
@interface _SFReaderFontDownloadAccessory : UIView {
    UIButton * _downloadButton;
    bool  _downloading;
    UIProgressView * _progressView;
    id /* block */  _tappedDownloadBlock;
}

@property (nonatomic, readonly) UIButton *downloadButton;
@property (getter=isDownloading, nonatomic) bool downloading;
@property (nonatomic, readonly) UIProgressView *progressView;
@property (nonatomic, copy) id /* block */ tappedDownloadBlock;

- (void).cxx_destruct;
- (void)_tappedDownloadButton:(id)arg1;
- (id)downloadButton;
- (id)initWithTappedDownloadBlock:(id /* block */)arg1;
- (bool)isDownloading;
- (id)progressView;
- (void)setDownloading:(bool)arg1;
- (void)setTappedDownloadBlock:(id /* block */)arg1;
- (id /* block */)tappedDownloadBlock;
- (id)viewForLastBaselineLayout;

@end


@interface AssistantVoiceDownloadingView : UIView {
    UILabel * _downloadLabel;
    UIActivityIndicatorView * _indicator;
}

@property (nonatomic, retain) UILabel *downloadLabel;
@property (nonatomic, retain) UIActivityIndicatorView *indicator;

- (void).cxx_destruct;
- (id)downloadLabel;
- (id)indicator;
- (id)initWithActivityIndicatorStyle:(long long)arg1;
- (void)layoutSubviews;
- (void)setDownloadLabel:(id)arg1;
- (void)setIndicator:(id)arg1;
- (void)sizeToFit;

@end

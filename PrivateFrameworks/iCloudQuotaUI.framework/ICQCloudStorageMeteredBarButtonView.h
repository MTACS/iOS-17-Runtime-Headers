
@interface ICQCloudStorageMeteredBarButtonView : UIView {
    double  _percentUsed;
    UIProgressView * _progressBar;
    UILabel * _storageString;
}

+ (id)barButtonItemWithString:(id)arg1 andPercentUsed:(double)arg2;

- (void).cxx_destruct;
- (id)initWithString:(id)arg1 andPercentUsed:(double)arg2;
- (void)layoutSubviews;
- (void)sizeToFit;

@end


@interface SFDownloadsUnifiedBarItemView : SFUnifiedBarItemView {
    SFDownloadsBarButtonItemView * _buttonView;
}

@property (nonatomic) double progress;

- (void).cxx_destruct;
- (id)init;
- (double)preferredWidth;
- (double)progress;
- (void)pulse;
- (void)setProgress:(double)arg1;

@end

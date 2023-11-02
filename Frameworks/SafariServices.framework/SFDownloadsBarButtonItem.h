
@interface SFDownloadsBarButtonItem : UIBarButtonItem {
    SFDownloadsBarButtonItemView * _buttonView;
    double  _progress;
}

@property (nonatomic) double progress;

- (void).cxx_destruct;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (double)progress;
- (void)pulse;
- (void)setEnabled:(bool)arg1;
- (void)setProgress:(double)arg1;

@end


@interface SFDownloadsUnifiedBarItem : SFUnifiedBarItem {
    SFDownloadsUnifiedBarItemView * _view;
}

@property (nonatomic) double progress;

- (void).cxx_destruct;
- (id)initWithAction:(id /* block */)arg1;
- (double)progress;
- (void)pulse;
- (void)setProgress:(double)arg1;
- (id)view;

@end

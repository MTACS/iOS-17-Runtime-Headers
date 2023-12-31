
@interface PULoadingIndicatorTileViewController : PUTileViewController {
    PUProgressIndicatorView * _indicatorView;
    long long  _style;
}

@property (nonatomic, retain) PUProgressIndicatorView *indicatorView;
@property (nonatomic) long long style;

+ (id)_createIndicatorViewForStyle:(long long)arg1;
+ (void)_destroyIndicatorView:(id)arg1;
+ (struct CGSize { double x1; double x2; })loadingIndicatorTileSizeForStyle:(long long)arg1;

- (void).cxx_destruct;
- (void)becomeReusable;
- (id)indicatorView;
- (void)setIndicatorView:(id)arg1;
- (void)setStyle:(long long)arg1;
- (void)setStyle:(long long)arg1 animated:(bool)arg2;
- (long long)style;

@end

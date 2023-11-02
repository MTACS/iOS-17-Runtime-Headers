
@interface PXCMMEngineDrivenLayoutConfiguration : NSObject {
    double  _bannerHeight;
    double  _headerHeight;
    long long  _layoutType;
    double  _sendBackFooterHeight;
    double  _statusFooterHeight;
}

@property (nonatomic) double bannerHeight;
@property (nonatomic) double headerHeight;
@property (nonatomic) long long layoutType;
@property (nonatomic) double sendBackFooterHeight;
@property (nonatomic) double statusFooterHeight;

- (double)bannerHeight;
- (double)headerHeight;
- (long long)layoutType;
- (double)sendBackFooterHeight;
- (void)setBannerHeight:(double)arg1;
- (void)setHeaderHeight:(double)arg1;
- (void)setLayoutType:(long long)arg1;
- (void)setSendBackFooterHeight:(double)arg1;
- (void)setStatusFooterHeight:(double)arg1;
- (double)statusFooterHeight;

@end

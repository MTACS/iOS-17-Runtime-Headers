
@interface PKPaymentHeroImageController : NSObject {
    <PKPaymentHeroImageControllerDelegate> * _delegate;
    NSArray * _featuredImages;
    PKPaymentHeroImageManifest * _manifest;
    NSString * _primaryImageIdentifier;
    long long  _watchSize;
    PKPaymentWebService * _webService;
}

@property (nonatomic) <PKPaymentHeroImageControllerDelegate> *delegate;
@property (nonatomic, copy) NSArray *featuredImages;
@property (nonatomic, readonly) PKPaymentHeroImageManifest *manifest;
@property (nonatomic, copy) NSString *primaryImageIdentifier;
@property (nonatomic) long long watchSize;

+ (struct CGSize { double x1; double x2; })cardArtSizeForWatchViewSize:(struct CGSize { double x1; double x2; })arg1;
+ (double)cardAspectRatio;
+ (id)defaultImages;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })cardArtSizeForSize:(struct CGSize { double x1; double x2; })arg1;
- (id)delegate;
- (void)downloadImages:(id)arg1;
- (id)featuredDefaultImages;
- (id)featuredImageIdentifiers;
- (id)featuredImages;
- (id)filterImages:(id)arg1;
- (id)initWithManifest:(id)arg1 webService:(id)arg2;
- (id)manifest;
- (id)primaryImageIdentifier;
- (void)setDelegate:(id)arg1;
- (void)setFeaturedImages:(id)arg1;
- (void)setPrimaryImageIdentifier:(id)arg1;
- (void)setWatchSize:(long long)arg1;
- (long long)watchSize;

@end

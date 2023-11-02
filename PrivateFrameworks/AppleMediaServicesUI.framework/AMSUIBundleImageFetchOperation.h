
@interface AMSUIBundleImageFetchOperation : AMSUIAssetFetchOperation {
    NSArray * _bundlesToSearch;
    NSString * _imageName;
    UITraitCollection * _traitCollection;
}

@property (nonatomic, retain) NSArray *bundlesToSearch;
@property (nonatomic, retain) NSString *imageName;
@property (nonatomic, retain) UITraitCollection *traitCollection;

- (void).cxx_destruct;
- (id)bundlesToSearch;
- (id)imageName;
- (id)initWithImageName:(id)arg1 searchBundles:(id)arg2 compatibleWithTraitCollection:(id)arg3;
- (bool)isLowLatency;
- (void)main;
- (void)setBundlesToSearch:(id)arg1;
- (void)setImageName:(id)arg1;
- (void)setTraitCollection:(id)arg1;
- (id)traitCollection;

@end


@interface MTCoreMaterialDefaultPlatformConfiguration : NSObject <MTCoreMaterialPlatformConfiguring> {
    NSURL * _overrideRecipeBundleURL;
}

@property (nonatomic, readonly, copy) NSString *blurEdgesOptimization;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDitherOptimizationSupported, nonatomic, readonly) bool ditherOptimizationSupported;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSURL *overrideRecipeBundleURL;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)blurEdgesOptimization;
- (id)overrideRecipeBundleURL;
- (void)setOverrideRecipeBundleURL:(id)arg1;

@end

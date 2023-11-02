
@interface PBUIPosterActiveVariantImageProvider : NSObject <PBUIFakeBlurImageProviding> {
    PBUIPosterWallpaperViewController * _rootObject;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PBUIPosterWallpaperViewController *rootObject;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)imageForWallpaperStyle:(inout long long*)arg1 variant:(long long)arg2 traitCollection:(id)arg3;
- (id)initWithRootObject:(id)arg1;
- (id)newImageProviderView;
- (bool)parallaxEnabledForVariant:(long long)arg1;
- (double)parallaxFactorForVariant:(long long)arg1;
- (id)rootObject;
- (bool)updateImageProviderView:(id)arg1 withImage:(id)arg2;
- (double)zoomFactorForVariant:(long long)arg1;

@end

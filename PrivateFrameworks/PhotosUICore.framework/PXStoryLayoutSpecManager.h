
@interface PXStoryLayoutSpecManager : PXFeatureSpecManager {
    PXSharedLibraryStatusProvider * _sharedLibraryStatusProvider;
    unsigned long long  _storyConfigurationOptions;
}

@property (nonatomic, readonly) <PXStoryLayoutSpec> *layoutSpec;
@property (nonatomic, readonly) unsigned long long storyConfigurationOptions;

- (void).cxx_destruct;
- (void)_observeSharedLibraryStatusIfNeeded;
- (id)createSpec;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2 storyConfigurationOptions:(unsigned long long)arg3;
- (id)layoutSpec;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (Class)specClass;
- (unsigned long long)storyConfigurationOptions;

@end

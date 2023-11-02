
@interface PXStoryViewLayoutSpecManager : PXFeatureSpecManager {
    unsigned long long  _storyConfigurationOptions;
}

@property (nonatomic) unsigned long long storyConfigurationOptions;
@property (nonatomic, readonly) <PXStoryViewLayoutSpec> *viewLayoutSpec;

- (id)createSpec;
- (void)setStoryConfigurationOptions:(unsigned long long)arg1;
- (Class)specClass;
- (unsigned long long)storyConfigurationOptions;
- (id)viewLayoutSpec;

@end

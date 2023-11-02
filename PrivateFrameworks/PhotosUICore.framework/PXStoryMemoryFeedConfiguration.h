
@interface PXStoryMemoryFeedConfiguration : PXFeedConfiguration {
    PHPhotoLibrary * _photoLibrary;
}

@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;

+ (void)_handleContentSeenForDataSource:(id)arg1;
+ (id)_photoKitMediaProviderWithPhotoLibrary:(id)arg1;

- (void).cxx_destruct;
- (id)_defaultSpecManagerWithLayoutKind:(long long)arg1 extendedTraitCollection:(id)arg2;
- (bool)_shouldEmbedContentLayoutForLayoutKind:(long long)arg1;
- (bool)allowsPopOnEmptyBehavior;
- (id)copyForFullFeed;
- (id)copyWithLayoutKind:(long long)arg1;
- (id)createSeeAllViewController;
- (id)gadgetAccessoryButtonLocalizedTitle;
- (unsigned long long)gadgetAccessoryButtonType;
- (id)gadgetLocalizedTitle;
- (unsigned long long)gadgetType;
- (void)handleContentSeen;
- (long long)horizontalGadgetStyle;
- (id)initWithDataSourceManagerPromise:(id /* block */)arg1 layoutKind:(long long)arg2 photoLibrary:(id)arg3 viewControllerSetupBlock:(id /* block */)arg4;
- (id)initWithMemoriesInPhotoLibrary:(id)arg1 layoutKind:(long long)arg2 viewControllerSetupBlock:(id /* block */)arg3;
- (id)initWithMemoriesInPhotoLibrary:(id)arg1 layoutKind:(long long)arg2 viewControllerSetupBlock:(id /* block */)arg3 visibleRectChangeObserver:(id /* block */)arg4;
- (id)initWithMemoryForYouDataSourceManager:(id)arg1 layoutKind:(long long)arg2;
- (id)initWithSyntheticSectionCount:(long long)arg1 numberOfItemsPerSection:(long long)arg2 photoLibrary:(id)arg3 layoutKind:(long long)arg4;
- (id)objectReferenceForDestination:(id)arg1;
- (id)photoLibrary;
- (id)viewControllerTitle;
- (bool)wantsEmbeddedScrollView;
- (bool)wantsMultilineGadgetTitle;

@end

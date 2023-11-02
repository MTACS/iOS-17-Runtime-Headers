
@interface PXStoryOneUpViewModel : PXObservable <PXChangeObserver> {
    PXAssetsDataSourceManager * _assetsDataSourceManager;
    PXAssetReference * _hiddenAssetReference;
    long long  _hiddenClipIdentifier;
    PXAssetReference * _initialAssetReference;
    long long  _initialClipIdentifier;
    PXUIMediaProvider * _mediaProvider;
    PXOneUpPresentation * _oneUpPresentation;
    PXStoryResourcesDataSourceManager * _resourcesDataSourceManager;
    <PXStoryClipSpriteReferencesProvider> * _spriteReferencesProvider;
    struct { 
        bool spriteReferenceForClipWithIdentifier; 
    }  _spriteReferencesProviderRespondsTo;
    <PXStoryTimeline> * _timeline;
    PXUpdater * _updater;
    PXAssetReference * _visibleAssetReference;
    long long  _visibleClipIdentifier;
}

@property (nonatomic, retain) PXAssetsDataSourceManager *assetsDataSourceManager;
@property (nonatomic, readonly) bool canPresentOneUp;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PXAssetReference *hiddenAssetReference;
@property (nonatomic, readonly) long long hiddenClipIdentifier;
@property (nonatomic, retain) PXAssetReference *initialAssetReference;
@property (nonatomic, readonly) long long initialClipIdentifier;
@property (nonatomic, readonly) PXUIMediaProvider *mediaProvider;
@property (nonatomic, readonly) PXOneUpPresentation *oneUpPresentation;
@property (nonatomic, readonly) PXStoryResourcesDataSourceManager *resourcesDataSourceManager;
@property (nonatomic) <PXStoryClipSpriteReferencesProvider> *spriteReferencesProvider;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <PXStoryTimeline> *timeline;
@property (nonatomic, readonly) PXUpdater *updater;
@property (nonatomic, retain) PXAssetReference *visibleAssetReference;
@property (nonatomic, readonly) long long visibleClipIdentifier;

- (void).cxx_destruct;
- (long long)_clipIdentifierForAssetReference:(id)arg1 failureHandler:(id /* block */)arg2;
- (void)_invalidateAssetsDataSourceManager;
- (void)_invalidateHiddenClipIdentifier;
- (void)_invalidateInitialAssetReference;
- (void)_invalidateVisibleClipIdentifier;
- (void)_setNeedsUpdate;
- (void)_updateAssetsDataSourceManager;
- (void)_updateHiddenClipIdentifier;
- (void)_updateInitialAssetReference;
- (void)_updateVisibleClipIdentifier;
- (id)assetsDataSourceManager;
- (bool)canPresentOneUp;
- (void)didPerformChanges;
- (id)hiddenAssetReference;
- (long long)hiddenClipIdentifier;
- (id)init;
- (id)initWithResourcesDataSourceManager:(id)arg1 mediaProvider:(id)arg2;
- (id)initialAssetReference;
- (long long)initialClipIdentifier;
- (id)mediaProvider;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)oneUpPresentation;
- (void)performChanges:(id /* block */)arg1;
- (id)resourcesDataSourceManager;
- (void)setAssetsDataSourceManager:(id)arg1;
- (void)setHiddenAssetReference:(id)arg1;
- (void)setHiddenClipIdentifier:(long long)arg1;
- (void)setInitialAssetReference:(id)arg1;
- (void)setInitialClipIdentifier:(long long)arg1;
- (void)setOneUpPresentation:(id)arg1;
- (void)setSpriteReferencesProvider:(id)arg1;
- (void)setTimeline:(id)arg1;
- (void)setVisibleAssetReference:(id)arg1;
- (void)setVisibleClipIdentifier:(long long)arg1;
- (id)spriteReferenceForAssetReference:(id)arg1;
- (id)spriteReferencesProvider;
- (id)timeline;
- (id)updater;
- (id)visibleAssetReference;
- (long long)visibleClipIdentifier;

@end


@interface PXStoryMemoryFeedViewLayoutSpecManager : PXFeedViewLayoutSpecManager <PXChangeObserver> {
    long long  _layoutKind;
    PXMemoriesSpecManager * _memoriesSpecManager;
    PXUpdater * _updater;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long layoutKind;
@property (nonatomic, readonly) PXMemoriesSpecManager *memoriesSpecManager;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PXUpdater *updater;

- (void).cxx_destruct;
- (void)_invalidateSpec;
- (void)_setNeedsUpdate;
- (void)_updateSpec;
- (void)didPerformChanges;
- (id)init;
- (id)initWithLayoutKind:(long long)arg1 extendedTraitCollection:(id)arg2;
- (long long)layoutKind;
- (id)memoriesSpecManager;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)updater;

@end

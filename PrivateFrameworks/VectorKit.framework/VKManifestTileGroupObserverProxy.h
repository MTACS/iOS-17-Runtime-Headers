
@interface VKManifestTileGroupObserverProxy : NSObject <GEOExperimentConfigurationObserver, GEOResourceManifestTileGroupObserver> {
    struct function<void (GEOResourceManifestManager *, GEOActiveTileGroup *, GEOActiveTileGroup *)>="__f_"{__value_func<void (GEOResourceManifestManager *, GEOActiveTileGroup *, GEOActiveTileGroup *)>="__buf_"{type="__lx"[24C] {}  _didChangeActiveTileGroup;
    struct function<void (GEOExperimentConfiguration *)>="__f_"{__value_func<void (GEOExperimentConfiguration *)>="__buf_"{type="__lx"[24C] {}  _experimentConfigurationDidChange;
    struct function<void (GEOResourceManifestManager *)>="__f_"{__value_func<void (GEOResourceManifestManager *)>="__buf_"{type="__lx"[24C] {}  _willChangeActiveTileGroup;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property /* Warning: unhandled struct encoding: '{function<void (GEOResourceManifestManager *' */ struct  didChangeActiveTileGroup; /* unknown property attribute:  GEOActiveTileGroup *)>={type=[24C]}^v}} */
@property struct function<void (GEOExperimentConfiguration *)>={__value_func<void (GEOExperimentConfiguration *)>={type=[24C] {} experimentConfigurationDidChange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property struct function<void (GEOResourceManifestManager *)>={__value_func<void (GEOResourceManifestManager *)>={type=[24C] {} willChangeActiveTileGroup;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (struct function<void (GEOResourceManifestManager *, GEOActiveTileGroup *, GEOActiveTileGroup *)>={__value_func<void (GEOResourceManifestManager *, GEOActiveTileGroup *, GEOActiveTileGroup *)>={type=[24C] {})didChangeActiveTileGroup;
- (struct function<void (GEOExperimentConfiguration *)>={__value_func<void (GEOExperimentConfiguration *)>={type=[24C] {})experimentConfigurationDidChange;
- (void)experimentConfigurationDidChange:(id)arg1;
- (id)initWithQueue:(id)arg1;
- (void)resourceManifestManager:(id)arg1 didChangeActiveTileGroup:(id)arg2 fromOldTileGroup:(id)arg3;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (void)setDidChangeActiveTileGroup:(struct function<void (GEOResourceManifestManager *, GEOActiveTileGroup *, GEOActiveTileGroup *)>={__value_func<void (GEOResourceManifestManager *, GEOActiveTileGroup *, GEOActiveTileGroup *)>={type=[24C] {})arg1;
- (void)setExperimentConfigurationDidChange:(struct function<void (GEOExperimentConfiguration *)>={__value_func<void (GEOExperimentConfiguration *)>={type=[24C] {})arg1;
- (void)setWillChangeActiveTileGroup:(struct function<void (GEOResourceManifestManager *)>={__value_func<void (GEOResourceManifestManager *)>={type=[24C] {})arg1;
- (struct function<void (GEOResourceManifestManager *)>={__value_func<void (GEOResourceManifestManager *)>={type=[24C] {})willChangeActiveTileGroup;

@end

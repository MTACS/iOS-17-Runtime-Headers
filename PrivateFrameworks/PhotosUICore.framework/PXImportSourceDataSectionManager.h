
@interface PXImportSourceDataSectionManager : PXDataSectionManager <PXImportSourcesManagerChangeObserver> {
    NSArray * _importSources;
    PXImportSourcesManager * _importSourcesManager;
    bool  _limitToSingleImportSource87746235;
    PHPhotoLibrary * _photoLibrary;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *importSources;
@property (nonatomic, readonly) PXImportSourcesManager *importSourcesManager;
@property (nonatomic) bool limitToSingleImportSource87746235;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)auxiliaryObjectForKey:(id)arg1 dataSectionObject:(id)arg2 hintIndex:(long long)arg3;
- (id)createDataSection;
- (id)importSources;
- (id)importSourcesManager;
- (void)importSourcesManager:(id)arg1 didUpdateImportSource:(id)arg2;
- (id)initWithChildDataSectionManagers:(id)arg1;
- (id)initWithPhotoLibrary:(id)arg1;
- (bool)limitToSingleImportSource87746235;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)photoLibrary;
- (void)setImportSources:(id)arg1;
- (void)setLimitToSingleImportSource87746235:(bool)arg1;

@end

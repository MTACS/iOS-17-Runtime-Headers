
@interface PGBirthdayContextualRule : NSObject <PGContextualRule> {
    NSArray * _availablePersons;
    PGCurationManager * _curationManager;
    PGGraph * _graph;
    NSObject<OS_os_log> * _loggingConnection;
    NSMutableDictionary * _personNodeByLocalIdentifier;
    PHPhotoLibrary * _photoLibrary;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_bestAssetInCuratedAssets:(id)arg1 forPerson:(id)arg2 contextualScore:(out double*)arg3;
- (id)_bestBirthdayCelebrationAssetForHighlightNode:(id)arg1 assetCollection:(id)arg2 curationContext:(id)arg3;
- (id)_fetchCuratedAssetsForHighlightItem:(id)arg1 intersectingAssets:(id)arg2;
- (id)_filterCuratedAssets:(id)arg1 forHighlightItem:(id)arg2;
- (bool)canProvideContextualKeyAssetsWithOptions:(id)arg1;
- (void)enumerateContextualKeyAssetsForYearHighlight:(id)arg1 sharingFilter:(unsigned short)arg2 withOptions:(id)arg3 modelReader:(id)arg4 curationContext:(id)arg5 usingBlock:(id /* block */)arg6;
- (id)initWithGraph:(id)arg1 photoLibrary:(id)arg2 curationManager:(id)arg3 loggingConnection:(id)arg4;

@end

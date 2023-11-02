
@interface PGGraphPetIdentityProcessor : NSObject {
    PGGraphPetIdentityProcessorCache * _cache;
    short  _detectionType;
    PGGraph * _graph;
    NSObject<OS_os_log> * _loggingConnection;
    bool  _petPrintClusteringEnabled;
    PHPhotoLibrary * _photoLibrary;
}

@property (nonatomic, readonly) PGGraphPetIdentityProcessorCache *cache;
@property (nonatomic) short detectionType;
@property (nonatomic) PGGraph *graph;
@property (nonatomic, retain) NSObject<OS_os_log> *loggingConnection;
@property (nonatomic) bool petPrintClusteringEnabled;
@property (nonatomic) PHPhotoLibrary *photoLibrary;

+ (id)fetchInterestingEligiblePetsForWallpaperWithWorkingContext:(id)arg1 curationContext:(id)arg2;
+ (id)fetchPetPersonsWithDetectionType:(short)arg1 photoLibrary:(id)arg2;
+ (id)fetchPetPersonsWithNoKeyFaceAndDetectionType:(short)arg1 photoLibrary:(id)arg2;
+ (unsigned long long)petFaceClusterMinSize;
+ (double)petFaceClusteringThreshold;
+ (unsigned long long)petFaceClusteringType;

- (void).cxx_destruct;
- (id)_createClustersFromPetFaces:(id)arg1 withErrors:(id)arg2 progressBlock:(id /* block */)arg3;
- (id)_fetchPetFaceGroups;
- (void)_sortFaceClusters:(id)arg1;
- (bool)_updateKeyFacesForPetPersonsWithError:(id*)arg1;
- (id)cache;
- (short)detectionType;
- (id)fetchPetPersons;
- (id)graph;
- (id)initWithDetectionType:(short)arg1 photoLibrary:(id)arg2 graph:(id)arg3 loggingConnection:(id)arg4 cache:(id)arg5;
- (id)loggingConnection;
- (id)momentNodesForFaces:(id)arg1;
- (id)petFacesAtHome;
- (bool)petPrintClusteringEnabled;
- (id)photoLibrary;
- (id)removeClusterMatchingPetEntityFaceSet:(id)arg1 fromFaceClustersAtHome:(id)arg2;
- (void)setDetectionType:(short)arg1;
- (void)setGraph:(id)arg1;
- (void)setLoggingConnection:(id)arg1;
- (void)setPetPrintClusteringEnabled:(bool)arg1;
- (void)setPhotoLibrary:(id)arg1;
- (bool)updateFacesNameSourceToSourceGraphIfNeeded:(id)arg1 error:(id*)arg2;
- (bool)updatePetFaceGroupsForFaceClusters:(id)arg1 error:(id*)arg2;
- (bool)updatePetIdentityWithError:(id*)arg1 progressBlock:(id /* block */)arg2;
- (bool)updatePetPersonsForFaceClusters:(id)arg1 error:(id*)arg2;

@end

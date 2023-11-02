
@interface VCPPersonBuilder : NSObject {
    VCPPhotosFaceProcessingContext * _context;
    VCPFaceClusterer * _faceClusterer;
    unsigned long long  _lastMinimumFaceGroupSizeForCreatingMergeCandidates;
    VCPPhotosPersistenceDelegate * _persistenceDelegate;
    bool  _personBuilderMergeCandidatesEnabled;
    PHPhotoLibrary * _photoLibrary;
    NSMutableDictionary * _state;
}

- (void).cxx_destruct;
- (void)_readFaceAnalysisState;
- (bool)_setAllFaceGroupsNeedPersonBuilding;
- (void)_setFaceAnalysisStateValue:(id)arg1 forKey:(id)arg2;
- (id)initWithPhotoLibrary:(id)arg1 andFaceClusterer:(id)arg2 andContext:(id)arg3;
- (bool)performPersonBuildingWithCancelOrExtendTimeoutBlock:(id /* block */)arg1 error:(id*)arg2;
- (void)setLastMinimumFaceGroupSizeForCreatingMergeCandidate:(unsigned long long)arg1;
- (void)setPersonBuilderMergeCandidatesEnabled:(bool)arg1;

@end

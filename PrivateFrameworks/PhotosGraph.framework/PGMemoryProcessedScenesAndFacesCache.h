
@interface PGMemoryProcessedScenesAndFacesCache : NSObject {
    NSMutableDictionary * _facesAreProcessedEnoughByYear;
    PGGraphMomentNodeCollection * _momentNodesWithEnoughFacesProcessed;
    PGGraphMomentNodeCollection * _momentNodesWithEnoughScenesProcessed;
    NSNumber * _petVIPModelExistsAsNumber;
    PHPhotoLibrary * _photoLibrary;
    NSMutableDictionary * _scenesAreProcessedEnoughByYear;
    NSMutableDictionary * _scenesAreProcessedWithMinimumSceneAnalysisVersion;
}

- (void).cxx_destruct;
- (bool)allMomentNodesHaveScenesProcessed:(id)arg1 inGraph:(id)arg2;
- (bool)allMomentNodesInCollectionHaveFacesProcessed:(id)arg1;
- (bool)allMomentNodesInCollectionHaveScenesProcessed:(id)arg1;
- (id)initWithPhotoLibrary:(id)arg1;
- (bool)libraryHasEnoughScenesProcessed:(bool)arg1 andProcessedFaces:(bool)arg2;
- (bool)libraryHasEnoughScenesProcessed:(bool)arg1 andProcessedFaces:(bool)arg2 forYear:(long long)arg3 inGraph:(id)arg4;
- (bool)libraryHasEnoughScenesProcessedWithMinimumSceneAnalysisVersion:(unsigned long long)arg1;
- (id)momentNodesWithEnoughFacesProcessedInGraph:(id)arg1;
- (id)momentNodesWithEnoughScenesProcessedInGraph:(id)arg1;
- (bool)petVIPModelExists;
- (void)setFacesAreProcessedEnoughInYear:(id)arg1;
- (void)setScenesAreProcessedEnoughInYear:(id)arg1;

@end

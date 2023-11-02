
@interface VCPPhotosFaceProcessingContext : NSObject {
    unsigned long long  _advancedStatusMergeCandidateLimit;
    unsigned long long  _advancedStatusVerifiedPersonLimit;
    bool  _clusterIncludeTorsoOnlyFaces;
    float  _faceClusteringAgeThreshold;
    bool  _faceClusteringDisabled;
    float  _faceClusteringJunkThreshold;
    float  _faceClusteringThreshold;
    float  _faceMergeFaceprintDistanceThreshold;
    float  _facePrimarySuggestionsThreshold;
    unsigned long long  _maxFaceCountForClustering;
    unsigned long long  _minFaceCountToTriggerClustering;
    unsigned long long  _minimumFaceGroupSizeForCreatingMergeCandidates;
    unsigned long long  _minimumSuggestionSize;
    bool  _personBuilderMergeCandidatesDisabled;
    bool  _personBuildingDisabled;
    int  _processingVersion;
    bool  _quarantineTwinsOnAssetEnabled;
    int  _skipGallerySyncing;
    bool  _suggestionsLogEnabled;
}

@property unsigned long long advancedStatusMergeCandidateLimit;
@property unsigned long long advancedStatusVerifiedPersonLimit;
@property bool clusterIncludeTorsoOnlyFaces;
@property float faceClusteringAgeThreshold;
@property bool faceClusteringDisabled;
@property float faceClusteringJunkThreshold;
@property float faceClusteringThreshold;
@property float faceMergeFaceprintDistanceThreshold;
@property float facePrimarySuggestionsThreshold;
@property unsigned long long maxFaceCountForClustering;
@property unsigned long long minFaceCountToTriggerClustering;
@property unsigned long long minimumFaceGroupSizeForCreatingMergeCandidates;
@property unsigned long long minimumSuggestionSize;
@property bool personBuilderMergeCandidatesDisabled;
@property bool personBuildingDisabled;
@property int processingVersion;
@property bool quarantineTwinsOnAssetEnabled;
@property int skipGallerySyncing;
@property bool suggestionsLogEnabled;

+ (bool)_includeTorsoOnlyFaces;
+ (id)contextWithPhotoLibrary:(id)arg1;

- (unsigned long long)advancedStatusMergeCandidateLimit;
- (unsigned long long)advancedStatusVerifiedPersonLimit;
- (bool)clusterIncludeTorsoOnlyFaces;
- (float)faceClusteringAgeThreshold;
- (bool)faceClusteringDisabled;
- (float)faceClusteringJunkThreshold;
- (float)faceClusteringThreshold;
- (float)faceMergeFaceprintDistanceThreshold;
- (float)facePrimarySuggestionsThreshold;
- (id)initWithPhotoLibrary:(id)arg1;
- (unsigned long long)maxFaceCountForClustering;
- (unsigned long long)minFaceCountToTriggerClustering;
- (unsigned long long)minimumFaceGroupSizeForCreatingMergeCandidates;
- (unsigned long long)minimumSuggestionSize;
- (bool)personBuilderMergeCandidatesDisabled;
- (bool)personBuildingDisabled;
- (int)processingVersion;
- (bool)quarantineTwinsOnAssetEnabled;
- (void)setAdvancedStatusMergeCandidateLimit:(unsigned long long)arg1;
- (void)setAdvancedStatusVerifiedPersonLimit:(unsigned long long)arg1;
- (void)setClusterIncludeTorsoOnlyFaces:(bool)arg1;
- (void)setFaceClusteringAgeThreshold:(float)arg1;
- (void)setFaceClusteringDisabled:(bool)arg1;
- (void)setFaceClusteringJunkThreshold:(float)arg1;
- (void)setFaceClusteringThreshold:(float)arg1;
- (void)setFaceMergeFaceprintDistanceThreshold:(float)arg1;
- (void)setFacePrimarySuggestionsThreshold:(float)arg1;
- (void)setMaxFaceCountForClustering:(unsigned long long)arg1;
- (void)setMinFaceCountToTriggerClustering:(unsigned long long)arg1;
- (void)setMinimumFaceGroupSizeForCreatingMergeCandidates:(unsigned long long)arg1;
- (void)setMinimumSuggestionSize:(unsigned long long)arg1;
- (void)setPersonBuilderMergeCandidatesDisabled:(bool)arg1;
- (void)setPersonBuildingDisabled:(bool)arg1;
- (void)setProcessingVersion:(int)arg1;
- (void)setQuarantineTwinsOnAssetEnabled:(bool)arg1;
- (void)setSkipGallerySyncing:(int)arg1;
- (void)setSuggestionsLogEnabled:(bool)arg1;
- (int)skipGallerySyncing;
- (bool)suggestionsLogEnabled;

@end

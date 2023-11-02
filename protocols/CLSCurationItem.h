
@protocol CLSCurationItem <NSObject, PLRegionsClusteringItem, CLSSimilarlyStackableItem>

@required

- (double)clsAestheticScore;
- (double)clsAutoplaySuggestionScore;
- (bool)clsAvoidIfPossibleAsKeyItemForMemories:(bool)arg1 allowGuestAsset:(bool)arg2;
- (bool)clsAvoidIfPossibleAsKeyItemForMemories:(bool)arg1 allowGuestAsset:(bool)arg2 reason:(id*)arg3;
- (NSArray *)clsConsolidatedPersonLocalIdentifiers;
- (double)clsContentScore;
- (double)clsDuration;
- (double)clsExposureScore;
- (double)clsFaceScore;
- (bool)clsHasCustomPlaybackVariation;
- (bool)clsHasInterestingAudioClassification;
- (bool)clsHasInterestingScenes;
- (bool)clsHasPoorResolution;
- (double)clsHighlightVisibilityScore;
- (double)clsIconicScore;
- (NSString *)clsIdentifier;
- (bool)clsIsAestheticallyPrettyGood;
- (bool)clsIsBlurry;
- (bool)clsIsInSharedLibrary;
- (bool)clsIsInhabited;
- (bool)clsIsInterestingHDR;
- (bool)clsIsInterestingLivePhoto;
- (bool)clsIsInterestingPanorama;
- (bool)clsIsInterestingReframe;
- (bool)clsIsInterestingSDOF;
- (bool)clsIsInterestingVideo;
- (bool)clsIsLongExposure;
- (bool)clsIsLoopOrBounce;
- (bool)clsIsNonMemorable;
- (bool)clsIsScreenshotOrScreenRecording;
- (bool)clsIsUtility;
- (CLLocation *)clsLocation;
- (unsigned long long)clsPeopleCount;
- (NSArray *)clsPersonAndPetLocalIdentifiers;
- (NSArray *)clsPersonLocalIdentifiers;
- (NSArray *)clsPetLocalIdentifiers;
- (long long)clsPlayCount;
- (NSSet *)clsSceneClassifications;
- (VNSceneprint *)clsSceneprint;
- (long long)clsShareCount;
- (double)clsSharpnessScore;
- (double)clsSquareCropScore;
- (NSArray *)clsUnprefetchedPersonLocalIdentifiers;
- (long long)clsViewCount;
- (NSDate *)cls_localDate;
- (NSDate *)cls_universalDate;
- (CLSCurationModel *)curationModel;
- (bool)isFavorite;
- (bool)isVideo;
- (CLLocation *)location;
- (double)scoreInContext:(CLSAssetScoringContext *)arg1;

@end

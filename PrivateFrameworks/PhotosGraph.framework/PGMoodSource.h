
@interface PGMoodSource : NSObject {
    PHAssetCollection * _assetCollection;
    PGEnrichedMemory * _enrichedMemory;
    NSDictionary * _moodSourceDictionary;
    PGMoodVector * _negativeVector;
    PGMoodGeneratorOptions * _options;
    PHPhotoLibrary * _photoLibrary;
    PGMoodVector * _positiveVector;
}

@property (readonly) PHAssetCollection *assetCollection;
@property (readonly) PGEnrichedMemory *enrichedMemory;
@property (readonly) NSDictionary *moodSourceDictionary;
@property (retain) PGMoodVector *negativeVector;
@property (readonly) PGMoodGeneratorOptions *options;
@property (readonly) PHPhotoLibrary *photoLibrary;
@property (retain) PGMoodVector *positiveVector;

+ (id)_plistName;

- (void).cxx_destruct;
- (void)_combineMoodVectorsWithGraph:(id)arg1;
- (id)_moodVectorForMoodIdentifier:(id)arg1;
- (id)_moodVectorsWithGraph:(id)arg1;
- (id)_plistMoodIdentifiersWithGraph:(id)arg1;
- (unsigned long long)_sourceInputCount;
- (id)assetCollection;
- (id)enrichedMemory;
- (id)initWithAssetCollection:(id)arg1 photoLibrary:(id)arg2 options:(id)arg3;
- (id)initWithEnrichedMemory:(id)arg1 photoLibrary:(id)arg2 options:(id)arg3;
- (id)moodSourceDictionary;
- (id)negativeVector;
- (id)negativeVectorWithGraph:(id)arg1;
- (id)options;
- (id)photoLibrary;
- (id)positiveVector;
- (id)positiveVectorWithGraph:(id)arg1;
- (void)setNegativeVector:(id)arg1;
- (void)setPositiveVector:(id)arg1;
- (double)weight;

@end


@interface PGSceneAssetFilter : NSObject <PGAssetFilter> {
    NSMutableDictionary * _confidenceThresholdByNegativeSceneIdentifierBySceneModelIdentifier;
    NSMutableDictionary * _confidenceThresholdByPositiveDominantSceneIdentifierBySceneModelIdentifier;
    NSMutableDictionary * _confidenceThresholdByPositiveSceneIdentifierBySceneModelIdentifier;
    NSMutableDictionary * _confidenceThresholdBySecondaryPositiveSceneIdentifierBySceneModelIdentifier;
    NSMutableDictionary * _indexedConfidenceThresholdOfScenesBySceneModelIdentifier;
    NSSet * _negativeScenes;
    CLSSceneConfidenceThresholdHelper * _negativeScenesHelper;
    id /* block */  _positiveDominantSceneCustomSignalModelBlock;
    NSSet * _positiveDominantScenes;
    CLSSceneConfidenceThresholdHelper * _positiveDominantScenesHelper;
    id /* block */  _positiveSceneCustomSignalModelBlock;
    NSSet * _positiveScenes;
    CLSSceneConfidenceThresholdHelper * _positiveScenesHelper;
    NSSet * _positiveSemDevSceneIdentifiers;
    NSSet * _positiveSemDevScenes;
    bool  _requireDominantPositiveScenes;
    NSSet * _secondaryPositiveScenes;
    CLSSceneConfidenceThresholdHelper * _secondaryPositiveScenesHelper;
    BOOL * _typeOfSceneClassification;
    bool  _useEntityNet;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSSet *negativeScenes;
@property (nonatomic, readonly) NSSet *positiveDominantScenes;
@property (nonatomic, readonly) NSSet *positiveScenes;
@property (nonatomic, retain) NSSet *positiveSemDevSceneIdentifiers;
@property (nonatomic, readonly) NSSet *positiveSemDevScenes;
@property (nonatomic, readonly) NSSet *secondaryPositiveScenes;
@property (readonly) Class superclass;

+ (id)name;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_allSceneNamesAreValid:(id)arg1;
- (void)_buildIndexWithConfidenceThresholds:(id)arg1 sceneClassificationType:(BOOL)arg2 curationModel:(id)arg3;
- (void)_commonInitWithPositiveScenes:(id)arg1 positiveSceneCustomSignalModelBlock:(id /* block */)arg2 secondaryPositiveScenes:(id)arg3 positiveDominantScenes:(id)arg4 positiveDominantSceneCustomSignalModelBlock:(id /* block */)arg5 positiveSemDevScenes:(id)arg6 negativeScenes:(id)arg7 sceneTaxonomy:(id)arg8 useEntityNet:(bool)arg9;
- (id)_consolidatedConfidenceThresholdBySceneIdentifiers:(id)arg1 customSignalModel:(id)arg2;
- (bool)_validateSceneNames:(id)arg1 withSceneTaxonomy:(id)arg2;
- (id)confidenceThresholdByNegativeSceneIdentifierWithCurationModel:(id)arg1;
- (id)confidenceThresholdByPositiveDominantSceneIdentifierWithCurationModel:(id)arg1;
- (id)confidenceThresholdByPositiveSceneIdentifierWithCurationModel:(id)arg1;
- (id)confidenceThresholdBySecondaryPositiveSceneIdentifierWithCurationModel:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)filteredAssetsFromAssets:(id)arg1;
- (id)initForEntityNetWithSceneNames:(id)arg1 negativeScenes:(id)arg2 sceneTaxonomy:(id)arg3;
- (id)initForEntityNetWithSceneNames:(id)arg1 positiveSceneCustomSignalModelBlock:(id /* block */)arg2 secondaryPositiveScenes:(id)arg3 positiveDominantScenes:(id)arg4 positiveDominantSceneCustomSignalModelBlock:(id /* block */)arg5 positiveSemDevScenes:(id)arg6 negativeScenes:(id)arg7 sceneTaxonomy:(id)arg8;
- (id)initWithCoder:(id)arg1;
- (id)initWithPositiveScenes:(id)arg1 negativeScenes:(id)arg2 sceneTaxonomy:(id)arg3;
- (id)initWithPositiveScenes:(id)arg1 positiveSceneCustomSignalModelBlock:(id /* block */)arg2 secondaryPositiveScenes:(id)arg3 positiveDominantScenes:(id)arg4 positiveDominantSceneCustomSignalModelBlock:(id /* block */)arg5 positiveSemDevScenes:(id)arg6 negativeScenes:(id)arg7 sceneTaxonomy:(id)arg8;
- (bool)isEqual:(id)arg1;
- (bool)label:(id)arg1 isSemDevClassificationWithIdentifier:(unsigned int*)arg2;
- (id)negativeScenes;
- (bool)passesWithAsset:(id)arg1;
- (id)positiveDominantScenes;
- (id)positiveScenes;
- (id)positiveSemDevSceneIdentifiers;
- (id)positiveSemDevScenes;
- (id)secondaryPositiveScenes;
- (void)setPositiveSemDevSceneIdentifiers:(id)arg1;

@end

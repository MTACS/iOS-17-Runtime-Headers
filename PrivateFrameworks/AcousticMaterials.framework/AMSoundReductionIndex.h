
@interface AMSoundReductionIndex : NSObject {
    NSNumber * _averageSoundReductionIndex;
    NSArray * _frequencyBands;
    NSNumber * _materialDepth;
    NSString * _materialDescription;
    NSString * _materialName;
    NSArray * _numDataPointsReferenceData;
    NSArray * _soundReductionIndexReferenceData;
    NSArray * _soundReductionIndexUserData;
    int  _totalNumDataSetsReferenceData;
    NSNumber * _uncertaintyMaterialDepth;
    NSArray * _uncertaintyReferenceData;
}

@property (readonly) NSNumber *averageSoundReductionIndex;
@property (readonly) NSArray *frequencyBands;
@property (readonly) NSNumber *materialDepth;
@property (readonly) NSString *materialDescription;
@property (readonly) NSString *materialName;
@property (readonly) NSArray *numDataPointsReferenceData;
@property (readonly) NSArray *soundReductionIndexReferenceData;
@property (copy) NSArray *soundReductionIndexUserData;
@property (readonly) int totalNumDataSetsReferenceData;
@property (readonly) NSNumber *uncertaintyMaterialDepth;
@property (readonly) NSArray *uncertaintyReferenceData;

- (void).cxx_destruct;
- (id)averageSoundReductionIndex;
- (id)frequencyBands;
- (id)initWithMaterialName:(id)arg1;
- (id)initWithValues:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)materialDepth;
- (id)materialDescription;
- (id)materialName;
- (id)numDataPointsReferenceData;
- (void)setSoundReductionIndexUserData:(id)arg1;
- (id)soundReductionIndexReferenceData;
- (id)soundReductionIndexUserData;
- (int)totalNumDataSetsReferenceData;
- (id)uncertaintyMaterialDepth;
- (id)uncertaintyReferenceData;
- (bool)validatedWithoutError:(id*)arg1;

@end


@interface AMAbsorption : NSObject {
    NSArray * _absorptionReferenceData;
    NSArray * _absorptionUserData;
    NSArray * _frequencyBands;
    NSString * _materialDescription;
    NSString * _materialName;
    NSArray * _numDataPointsReferenceData;
    int  _totalNumDataSetsReferenceData;
    NSArray * _uncertaintyReferenceData;
}

@property (readonly) NSArray *absorptionReferenceData;
@property (copy) NSArray *absorptionUserData;
@property (readonly) NSArray *frequencyBands;
@property (readonly) NSString *materialDescription;
@property (readonly) NSString *materialName;
@property (readonly) NSArray *numDataPointsReferenceData;
@property (readonly) int totalNumDataSetsReferenceData;
@property (readonly) NSArray *uncertaintyReferenceData;

- (void).cxx_destruct;
- (id)absorptionReferenceData;
- (id)absorptionUserData;
- (id)frequencyBands;
- (id)initWithMaterialName:(id)arg1;
- (id)initWithValues:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)materialDescription;
- (id)materialName;
- (id)numDataPointsReferenceData;
- (void)setAbsorptionUserData:(id)arg1;
- (int)totalNumDataSetsReferenceData;
- (id)uncertaintyReferenceData;
- (bool)validatedWithoutError:(id*)arg1;

@end

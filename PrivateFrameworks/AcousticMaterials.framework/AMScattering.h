
@interface AMScattering : NSObject {
    NSArray * _frequencyBands;
    NSString * _materialDescription;
    NSString * _materialName;
    NSArray * _numDataPointsReferenceData;
    NSArray * _scatteringReferenceData;
    NSArray * _scatteringUserData;
    int  _totalNumDataSetsReferenceData;
    NSArray * _uncertaintyReferenceData;
}

@property (readonly) NSArray *frequencyBands;
@property (readonly) NSString *materialDescription;
@property (readonly) NSString *materialName;
@property (readonly) NSArray *numDataPointsReferenceData;
@property (readonly) NSArray *scatteringReferenceData;
@property (copy) NSArray *scatteringUserData;
@property (readonly) int totalNumDataSetsReferenceData;
@property (readonly) NSArray *uncertaintyReferenceData;

- (void).cxx_destruct;
- (id)frequencyBands;
- (id)initWithMaterialName:(id)arg1;
- (id)initWithValues:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)materialDescription;
- (id)materialName;
- (id)numDataPointsReferenceData;
- (id)scatteringReferenceData;
- (id)scatteringUserData;
- (void)setScatteringUserData:(id)arg1;
- (int)totalNumDataSetsReferenceData;
- (id)uncertaintyReferenceData;
- (bool)validatedWithoutError:(id*)arg1;

@end

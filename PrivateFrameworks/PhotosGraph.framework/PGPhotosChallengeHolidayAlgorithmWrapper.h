
@interface PGPhotosChallengeHolidayAlgorithmWrapper : NSObject {
    PGGraph * _graph;
    PHPhotoLibrary * _photoLibrary;
}

@property (nonatomic, readonly) PGGraph *graph;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;

- (void).cxx_destruct;
- (id)debugInformationForHolidayName:(id)arg1 assetUUID:(id)arg2;
- (id)graph;
- (id)initWithEvaluationContext:(id)arg1;
- (id)photoLibrary;
- (unsigned short)predictedQuestionStateForAssetUUID:(id)arg1 holidayName:(id)arg2;

@end

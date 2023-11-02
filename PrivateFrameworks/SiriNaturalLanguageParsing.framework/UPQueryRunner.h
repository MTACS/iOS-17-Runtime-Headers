
@interface UPQueryRunner : NSObject {
    UPCalibration * __calibration;
    UPContextualizer * __contextualizer;
    UPDialogActConverter * __dialogActConverter;
    UPParserModel * _coreModel;
    NSSet * _domainModelBundles;
}

@property (nonatomic, readonly) UPCalibration *_calibration;
@property (nonatomic, readonly) UPContextualizer *_contextualizer;
@property (nonatomic, readonly) UPDialogActConverter *_dialogActConverter;
@property (nonatomic, readonly) UPParserModel *coreModel;
@property (nonatomic, readonly) NSSet *domainModelBundles;

- (void).cxx_destruct;
- (id)_calibration;
- (id)_contextualizer;
- (id)_dialogActConverter;
- (id)combinedResultFromResults:(id)arg1;
- (id)coreModel;
- (id)dialogActFromQuery:(id)arg1;
- (id)domainModelBundles;
- (id)initWithCoreModel:(id)arg1 domainModelBundles:(id)arg2;
- (id)initWithCoreModel:(id)arg1 domainModels:(id)arg2;
- (id)multiTurnPredictionFromQuery:(id)arg1 modelIdentifierToDomainResults:(id)arg2 dialogAct:(id)arg3 error:(id*)arg4;
- (id)predictionFromProtobufQuery:(id)arg1 error:(id*)arg2;
- (id)predictionFromQuery:(id)arg1 error:(id*)arg2;
- (id)singleTurnPredictionFromDomainResults:(id)arg1;

@end

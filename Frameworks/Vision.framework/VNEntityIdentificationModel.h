
@interface VNEntityIdentificationModel : NSObject {
    VNEntityIdentificationModelConfiguration * _configuration;
    <VNEntityIdentificationModelDataSource> * _dataSource_DO_NOT_ACCESS_DIRECTLY;
    struct { 
        unsigned int willTrain : 1; 
        unsigned int didTrain : 1; 
        unsigned int failedTraining : 1; 
        unsigned int willDropTrainingData : 1; 
        unsigned int didDropTrainingData : 1; 
    }  _delegateFlags;
    <VNEntityIdentificationModelDelegate> * _delegate_DO_NOT_ACCESS_DIRECTLY;
    unsigned long long  _lastDataChangeSequenceNumber;
    VNEntityIdentificationModelTrainedModel * _trainedModel_DO_NOT_ACCESS_DIRECTLY;
}

@property (readonly, copy) VNEntityIdentificationModelAlgorithm *algorithm;
@property (readonly, copy) VNEntityIdentificationModelConfiguration *configuration;
@property <VNEntityIdentificationModelDelegate> *delegate;
@property (readonly, copy) VNEntityIdentificationModelInformation *information;

+ (bool)canCreateModelOfClass:(Class)arg1 withObjects:(id)arg2 error:(id*)arg3;
+ (id)informationForModelWithData:(id)arg1 error:(id*)arg2;
+ (id)informationForModelWithURL:(id)arg1 error:(id*)arg2;
+ (bool)isReadOnly;
+ (id)modelConfigurationForVersion:(unsigned long long)arg1 modelObjects:(id)arg2 error:(id*)arg3;
+ (id)modelFromData:(id)arg1 options:(id)arg2 error:(id*)arg3;
+ (id)modelFromStream:(id)arg1 options:(id)arg2 error:(id*)arg3;
+ (id)modelFromURL:(id)arg1 options:(id)arg2 error:(id*)arg3;
+ (id)modelWithConfiguration:(id)arg1 dataSource:(id)arg2 error:(id*)arg3;
+ (id)newModelForVersion:(unsigned long long)arg1 modelObjects:(id)arg2 error:(id*)arg3;
+ (bool)readObjectForVersion1Tag:(unsigned int)arg1 fromInputStream:(id)arg2 intoObjectDictionary:(id)arg3 md5Context:(struct CC_MD5state_st { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7[16]; int x8; }*)arg4 error:(id*)arg5;
+ (id)supportedReadVersions;
+ (id)supportedRequestSpecifiers;
+ (id)supportedWriteVersions;
+ (bool)validateAceptableObservation:(id)arg1 forEntityPrintOriginatingRequestSpecifier:(id)arg2 error:(id*)arg3;
+ (bool)validateConfiguration:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)algorithm;
- (id)configuration;
- (bool)convertToAlgorithm:(id)arg1 error:(id*)arg2;
- (id)dataWithOptions:(id)arg1 error:(id*)arg2;
- (id)delegate;
- (bool)dropTrainedModelAndReturnError:(id*)arg1;
- (unsigned long long)entityCount;
- (id)entityPredictionsForObservation:(id)arg1 limit:(unsigned long long)arg2 canceller:(id)arg3 error:(id*)arg4;
- (id)entityUniqueIdentifiers;
- (id)information;
- (id)initWithConfiguration:(id)arg1 dataSource:(id)arg2;
- (unsigned long long)observationCountForEntityWithUniqueIdentifier:(id)arg1;
- (id)observationCountsForAllEntities;
- (id)observationCountsForEntitiesWithUniqueIdentifiers:(id)arg1;
- (id)observationsForEntityWithUniqueIdentifier:(id)arg1 error:(id*)arg2;
- (void)setDelegate:(id)arg1;
- (id)trainedModelWithCanceller:(id)arg1 error:(id*)arg2;
- (id)trainingObservationsForEntityWithUniqueIdentifier:(id)arg1 canceller:(id)arg2 error:(id*)arg3;
- (id)trainingPrintsForEntityWithUniqueIdentifier:(id)arg1 canceller:(id)arg2 error:(id*)arg3;
- (id)uniqueIdentifierForEntityAtIndex:(unsigned long long)arg1;
- (bool)validateWithCanceller:(id)arg1 error:(id*)arg2;
- (bool)writeReadOnlyVersion1ToOutputStream:(id)arg1 options:(id)arg2 md5Context:(struct CC_MD5state_st { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7[16]; int x8; }*)arg3 error:(id*)arg4;
- (bool)writeToStream:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (bool)writeToURL:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (bool)writeVersion1ToOutputStream:(id)arg1 options:(id)arg2 md5Context:(struct CC_MD5state_st { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7[16]; int x8; }*)arg3 error:(id*)arg4;

@end

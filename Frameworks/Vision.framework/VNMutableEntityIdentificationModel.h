
@interface VNMutableEntityIdentificationModel : VNEntityIdentificationModel <VNEntityIdentificationModelTrainingDataDelegate> {
    VNEntityIdentificationModelTrainingData * _trainingData;
}

+ (bool)canCreateModelOfClass:(Class)arg1 withObjects:(id)arg2 error:(id*)arg3;
+ (id)modelFromPersonsModel:(id)arg1 error:(id*)arg2;
+ (id)modelWithConfiguration:(id)arg1 dataSource:(id)arg2 error:(id*)arg3;
+ (id)modelWithConfiguration:(id)arg1 error:(id*)arg2;
+ (id)newModelForVersion:(unsigned long long)arg1 modelObjects:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (bool)addAllPersonsFromPersonsModel:(id)arg1 error:(id*)arg2;
- (bool)addObservations:(id)arg1 toEntityWithUniqueIdentifier:(id)arg2 error:(id*)arg3;
- (bool)addPersonWithUniqueIdentifier:(id)arg1 fromPersonsModel:(id)arg2 error:(id*)arg3;
- (void)entityIdentificationModelTrainingDataWasModified:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (bool)removeAllObservationsFromEntityWithUniqueIdentifier:(id)arg1 error:(id*)arg2;
- (bool)removeEntityWithUniqueIdentifier:(id)arg1 error:(id*)arg2;
- (bool)removeObservations:(id)arg1 fromEntityWithUniqueIdentifier:(id)arg2 error:(id*)arg3;
- (bool)validateWithCanceller:(id)arg1 error:(id*)arg2;

@end

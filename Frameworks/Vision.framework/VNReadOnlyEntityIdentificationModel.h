
@interface VNReadOnlyEntityIdentificationModel : VNEntityIdentificationModel <VNEntityIdentificationModelDataSource> {
    VNEntityIdentificationModelTrainedModel * _trainedModel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)isReadOnly;
+ (id)newModelForVersion:(unsigned long long)arg1 modelObjects:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (bool)dropTrainedModelAndReturnError:(id*)arg1;
- (unsigned long long)entityIdentificationModel:(id)arg1 indexOfEntityWithUniqueIdentifier:(id)arg2;
- (unsigned long long)entityIdentificationModel:(id)arg1 numberOfObservationsForEntityAtIndex:(unsigned long long)arg2;
- (id)entityIdentificationModel:(id)arg1 observationAtIndex:(unsigned long long)arg2 forEntityAtIndex:(unsigned long long)arg3;
- (id)entityIdentificationModel:(id)arg1 uniqueIdentifierOfEntityAtIndex:(unsigned long long)arg2;
- (id)initWithConfiguration:(id)arg1 trainedModel:(id)arg2;
- (unsigned long long)numberOfEntitiesInEntityIdentificationModel:(id)arg1;
- (unsigned long long)observationCountForEntityWithUniqueIdentifier:(id)arg1;
- (id)observationCountsForAllEntities;
- (id)observationCountsForEntitiesWithUniqueIdentifiers:(id)arg1;
- (id)observationsForEntityWithUniqueIdentifier:(id)arg1 error:(id*)arg2;
- (id)trainedModelWithCanceller:(id)arg1 error:(id*)arg2;

@end

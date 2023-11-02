
@interface _VNEntityIdentificationModelDataSourceBasedTrainedModelDataProvider : NSObject <VNEntityIdentificationModelTrainedModelDataProvider> {
    <VNEntityIdentificationModelDataSource> * _dataSource;
    VNEntityIdentificationModel * _entityIdentificationModel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithEntityIdentificationModel:(id)arg1 dataSource:(id)arg2;
- (unsigned long long)trainedModelEntityCount;
- (unsigned long long)trainedModelIndexOfEntityWithUniqueIdentifier:(id)arg1;
- (unsigned long long)trainedModelNumberOfObservationsForEntityAtIndex:(unsigned long long)arg1;
- (id)trainedModelObservationAtIndex:(unsigned long long)arg1 forEntityAtIndex:(unsigned long long)arg2;
- (id)trainedModelUniqueIdentifierOfEntityAtIndex:(unsigned long long)arg1;

@end

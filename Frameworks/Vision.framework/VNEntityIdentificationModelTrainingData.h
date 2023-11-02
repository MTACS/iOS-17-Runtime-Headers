
@interface VNEntityIdentificationModelTrainingData : NSObject <VNEntityIdentificationModelDataSource, VNEntityIdentificationModelTrainedModelDataProvider> {
    NSMutableIndexSet * _availableSerialNumbers;
    <VNEntityIdentificationModelTrainingDataDelegate> * _delegate;
    VNRequestSpecifier * _entityPrintOriginatingRequestSpecifier;
    NSMutableArray * _entityUniqueIdentifiers;
    unsigned long long  _lastDataChangeSequenceNumber;
    NSDate * _lastModificationDate;
    unsigned long long  _maximumEntities;
    NSMutableDictionary * _observationsForSerialNumber;
    NSMutableDictionary * _serialNumberForEntityUniqueIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property <VNEntityIdentificationModelTrainingDataDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly, copy) VNRequestSpecifier *entityPrintOriginatingRequestSpecifier;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSDate *lastModificationDate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)addObservations:(id)arg1 toEntityWithUniqueIdentifier:(id)arg2 error:(id*)arg3;
- (id)delegate;
- (unsigned long long)entityCount;
- (unsigned long long)entityIdentificationModel:(id)arg1 indexOfEntityWithUniqueIdentifier:(id)arg2;
- (unsigned long long)entityIdentificationModel:(id)arg1 numberOfObservationsForEntityAtIndex:(unsigned long long)arg2;
- (id)entityIdentificationModel:(id)arg1 observationAtIndex:(unsigned long long)arg2 forEntityAtIndex:(unsigned long long)arg3;
- (id)entityIdentificationModel:(id)arg1 uniqueIdentifierOfEntityAtIndex:(unsigned long long)arg2;
- (id)entityPrintOriginatingRequestSpecifier;
- (unsigned long long)indexOfEntityWithUniqueIdentifier:(id)arg1;
- (id)initWithModelConfiguration:(id)arg1;
- (unsigned long long)lastDataChangeSequenceNumberForEntityIdentificationModel:(id)arg1;
- (id)lastModificationDate;
- (id)lastModificationDateForEntityIdentificationModel:(id)arg1;
- (unsigned long long)numberOfEntitiesInEntityIdentificationModel:(id)arg1;
- (id)observationAtIndex:(unsigned long long)arg1 forEntityAtIndex:(unsigned long long)arg2;
- (unsigned long long)observationCountForEntityAtIndex:(unsigned long long)arg1;
- (bool)removeAllObservationsFromEntityWithUniqueIdentifier:(id)arg1 error:(id*)arg2;
- (bool)removeEntityWithUniqueIdentifier:(id)arg1 error:(id*)arg2;
- (bool)removeObservations:(id)arg1 fromEntityWithUniqueIdentifier:(id)arg2 error:(id*)arg3;
- (void)setDelegate:(id)arg1;
- (unsigned long long)trainedModelEntityCount;
- (unsigned long long)trainedModelIndexOfEntityWithUniqueIdentifier:(id)arg1;
- (unsigned long long)trainedModelNumberOfObservationsForEntityAtIndex:(unsigned long long)arg1;
- (id)trainedModelObservationAtIndex:(unsigned long long)arg1 forEntityAtIndex:(unsigned long long)arg2;
- (id)trainedModelUniqueIdentifierOfEntityAtIndex:(unsigned long long)arg1;
- (id)uniqueIdentifierOfEntityAtIndex:(unsigned long long)arg1;
- (bool)validateWithCanceller:(id)arg1 error:(id*)arg2;

@end

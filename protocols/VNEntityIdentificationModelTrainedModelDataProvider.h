
@protocol VNEntityIdentificationModelTrainedModelDataProvider <NSObject>

@required

- (unsigned long long)trainedModelEntityCount;
- (unsigned long long)trainedModelIndexOfEntityWithUniqueIdentifier:(id <NSObject><NSCopying><NSSecureCoding>)arg1;
- (unsigned long long)trainedModelNumberOfObservationsForEntityAtIndex:(unsigned long long)arg1;
- (VNObservation<VNEntityIdentificationModelObservation> *)trainedModelObservationAtIndex:(unsigned long long)arg1 forEntityAtIndex:(unsigned long long)arg2;
- (<NSObject><NSCopying><NSSecureCoding> *)trainedModelUniqueIdentifierOfEntityAtIndex:(unsigned long long)arg1;

@end


@protocol VNEntityIdentificationModelDataSource <NSObject>

@required

- (unsigned long long)entityIdentificationModel:(VNEntityIdentificationModel *)arg1 indexOfEntityWithUniqueIdentifier:(id <NSObject><NSCopying><NSSecureCoding>)arg2;
- (unsigned long long)entityIdentificationModel:(VNEntityIdentificationModel *)arg1 numberOfObservationsForEntityAtIndex:(unsigned long long)arg2;
- (VNObservation<VNEntityIdentificationModelObservation> *)entityIdentificationModel:(VNEntityIdentificationModel *)arg1 observationAtIndex:(unsigned long long)arg2 forEntityAtIndex:(unsigned long long)arg3;
- (<NSObject><NSCopying><NSSecureCoding> *)entityIdentificationModel:(VNEntityIdentificationModel *)arg1 uniqueIdentifierOfEntityAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfEntitiesInEntityIdentificationModel:(VNEntityIdentificationModel *)arg1;

@optional

- (unsigned long long)lastDataChangeSequenceNumberForEntityIdentificationModel:(VNEntityIdentificationModel *)arg1;
- (NSDate *)lastModificationDateForEntityIdentificationModel:(VNEntityIdentificationModel *)arg1;

@end

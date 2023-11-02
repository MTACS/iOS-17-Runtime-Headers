
@protocol VNPersonsModelDataSource <NSObject>

@required

- (unsigned long long)numberOfPersonsInPersonsModel:(VNPersonsModel *)arg1;
- (VNFaceObservation *)personsModel:(VNPersonsModel *)arg1 faceObservationAtIndex:(unsigned long long)arg2 forPersonAtIndex:(unsigned long long)arg3;
- (unsigned long long)personsModel:(VNPersonsModel *)arg1 indexOfPersonWithUniqueIdentifier:(id <NSObject><NSCopying><NSSecureCoding>)arg2;
- (unsigned long long)personsModel:(VNPersonsModel *)arg1 numberOfFaceObservationsForPersonAtIndex:(unsigned long long)arg2;
- (<NSObject><NSCopying><NSSecureCoding> *)personsModel:(VNPersonsModel *)arg1 uniqueIdentifierOfPersonAtIndex:(unsigned long long)arg2;

@optional

- (unsigned long long)lastDataChangeSequenceNumberForPersonsModel:(VNPersonsModel *)arg1;

@end

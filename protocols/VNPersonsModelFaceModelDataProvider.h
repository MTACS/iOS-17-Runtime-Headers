
@protocol VNPersonsModelFaceModelDataProvider <NSObject>

@required

- (VNFaceObservation *)faceModelFaceObservationAtIndex:(unsigned long long)arg1 forPersonAtIndex:(unsigned long long)arg2;
- (unsigned long long)faceModelIndexOfPersonWithUniqueIdentifier:(id <NSObject><NSCopying><NSSecureCoding>)arg1;
- (unsigned long long)faceModelNumberOfFaceObservationsForPersonAtIndex:(unsigned long long)arg1;
- (unsigned long long)faceModelPersonsCount;
- (<NSObject><NSCopying><NSSecureCoding> *)faceModelUniqueIdentifierOfPersonAtIndex:(unsigned long long)arg1;

@end

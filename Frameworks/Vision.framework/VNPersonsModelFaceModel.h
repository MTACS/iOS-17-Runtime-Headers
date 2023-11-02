
@interface VNPersonsModelFaceModel : NSObject <NSSecureCoding>

+ (bool)getStoredRepresentationTag:(unsigned int*)arg1 forModelVersion:(unsigned long long)arg2 error:(id*)arg3;
+ (id)modelBuiltFromConfiguration:(id)arg1 dataProvider:(id)arg2 canceller:(id)arg3 error:(id*)arg4;
+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)faceCountForPersonWithUniqueIdentifier:(id)arg1;
- (id)faceCountsForAllPersons;
- (id)faceCountsForPersonsWithUniqueIdentifiers:(id)arg1;
- (unsigned long long)faceprintRequestRevision;
- (id)initWithCoder:(id)arg1;
- (bool)isCompatibleWithConfiguration:(id)arg1;
- (unsigned long long)personCount;
- (id)personPredictionsForFace:(id)arg1 withDescriptor:(const void*)arg2 limit:(unsigned long long)arg3 canceller:(id)arg4 error:(id*)arg5;
- (id)personUniqueIdentifiers;
- (id)trainingFaceprintsForPersonWithUniqueIdentifier:(id)arg1 error:(id*)arg2;

@end

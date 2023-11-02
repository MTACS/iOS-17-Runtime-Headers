
@interface VNReadOnlyPersonsModel : VNPersonsModel <VNPersonsModelDataSource>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)isReadOnly;
+ (id)newModelFromVersion:(unsigned long long)arg1 objects:(id)arg2 error:(id*)arg3;

- (bool)dropCurrentFaceModelAndReturnError:(id*)arg1;
- (unsigned long long)faceCountForPersonWithUniqueIdentifier:(id)arg1;
- (id)faceCountsForAllPersons;
- (id)faceCountsForPersonsWithUniqueIdentifiers:(id)arg1;
- (id)faceObservationsForPersonWithUniqueIdentifier:(id)arg1 error:(id*)arg2;
- (id)initWithConfiguration:(id)arg1 faceModel:(id)arg2;
- (unsigned long long)numberOfPersonsInPersonsModel:(id)arg1;
- (unsigned long long)personCount;
- (id)personUniqueIdentifiers;
- (id)personsModel:(id)arg1 faceObservationAtIndex:(unsigned long long)arg2 forPersonAtIndex:(unsigned long long)arg3;
- (unsigned long long)personsModel:(id)arg1 indexOfPersonWithUniqueIdentifier:(id)arg2;
- (unsigned long long)personsModel:(id)arg1 numberOfFaceObservationsForPersonAtIndex:(unsigned long long)arg2;
- (id)personsModel:(id)arg1 uniqueIdentifierOfPersonAtIndex:(unsigned long long)arg2;
- (id)upToDateFaceModelWithCanceller:(id)arg1 error:(id*)arg2;

@end

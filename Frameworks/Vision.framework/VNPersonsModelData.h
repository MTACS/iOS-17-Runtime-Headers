
@interface VNPersonsModelData : NSObject <VNPersonsModelDataSource, VNPersonsModelFaceModelDataProvider> {
    NSMutableIndexSet * _availablePersonSerialNumbers;
    <VNPersonsModelDataDelegate> * _delegate;
    unsigned long long  _faceprintRequestRevision;
    NSDate * _lastModificationDate;
    unsigned long long  _maximumIdentities;
    NSMutableDictionary * _personUniqueIdentifierToSerialNumberMapping;
    NSMutableArray * _personUniqueIdentifiers;
    NSMutableDictionary * _serialNumberToFaceObservationsMapping;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VNPersonsModelDataDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long faceprintRequestRevision;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDate *lastModificationDate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_accessToMutableFaceObservationsForPersonAtIndex:(unsigned long long)arg1;
- (bool)_addUniqueFaceObservations:(id)arg1 toPersonWithUniqueIdentifier:(id)arg2 error:(id*)arg3;
- (void)_modelWasModified;
- (void)_removeAllFaceObservationsFromIdentityWithSerialNumber:(id)arg1;
- (void)_removeExistingFaceObservations:(id)arg1 fromIdentityWithSerialNumber:(id)arg2;
- (void)_removeExistingFaceObservations:(id)arg1 fromPersonWithUniqueIdentifier:(id)arg2;
- (void)_removePersonWithUniqueIdentifier:(id)arg1;
- (id)_requestNewIdentitySerialNumberAndReturnError:(id*)arg1;
- (id)_uniqueFaceObservationsWithRegistrationState:(bool)arg1 forFaceObservations:(id)arg2 withExpectedFaceprintRequestRevision:(unsigned long long)arg3 ofPersonWithUniqueIdentifier:(id)arg4 error:(id*)arg5;
- (bool)addFaceObservations:(id)arg1 toPersonWithUniqueIdentifier:(id)arg2 error:(id*)arg3;
- (id)delegate;
- (id)faceModelFaceObservationAtIndex:(unsigned long long)arg1 forPersonAtIndex:(unsigned long long)arg2;
- (unsigned long long)faceModelIndexOfPersonWithUniqueIdentifier:(id)arg1;
- (unsigned long long)faceModelNumberOfFaceObservationsForPersonAtIndex:(unsigned long long)arg1;
- (unsigned long long)faceModelPersonsCount;
- (id)faceModelUniqueIdentifierOfPersonAtIndex:(unsigned long long)arg1;
- (unsigned long long)faceprintRequestRevision;
- (id)initWithConfiguration:(id)arg1;
- (id)lastModificationDate;
- (unsigned long long)numberOfPersonsInPersonsModel:(id)arg1;
- (id)personsModel:(id)arg1 faceObservationAtIndex:(unsigned long long)arg2 forPersonAtIndex:(unsigned long long)arg3;
- (unsigned long long)personsModel:(id)arg1 indexOfPersonWithUniqueIdentifier:(id)arg2;
- (unsigned long long)personsModel:(id)arg1 numberOfFaceObservationsForPersonAtIndex:(unsigned long long)arg2;
- (id)personsModel:(id)arg1 uniqueIdentifierOfPersonAtIndex:(unsigned long long)arg2;
- (bool)removeAllFaceObservationsFromPersonWithUniqueIdentifier:(id)arg1 error:(id*)arg2;
- (bool)removeFaceObservations:(id)arg1 fromPersonWithUniqueIdentifier:(id)arg2 error:(id*)arg3;
- (bool)removePersonWithUniqueIdentifier:(id)arg1 error:(id*)arg2;
- (void)setDelegate:(id)arg1;

@end

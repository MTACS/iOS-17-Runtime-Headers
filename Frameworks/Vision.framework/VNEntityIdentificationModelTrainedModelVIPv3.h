
@interface VNEntityIdentificationModelTrainedModelVIPv3 : VNEntityIdentificationModelTrainedModel {
    NSArray * _entityPrintCounts;
    VNRequestSpecifier * _entityPrintOriginatingRequestSpecifier;
    NSArray * _entityUniqueIdentifiers;
    struct shared_ptr<vision::mod::FaceID3Model> { 
        struct FaceID3Model {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _faceIDModel;
}

+ (bool)getStoredRepresentationTag:(unsigned int*)arg1 forModelVersion:(unsigned long long)arg2 error:(id*)arg3;
+ (bool)supportsSecureCoding;
+ (id)trainedModelBuiltFromConfiguration:(id)arg1 dataProvider:(id)arg2 canceller:(id)arg3 error:(id*)arg4;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)entityCount;
- (id)entityPrintOriginatingRequestSpecifier;
- (id)entityUniqueIdentifiers;
- (unsigned long long)indexOfEntityWithUniqueIdentifier:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFaceIDModel:(struct shared_ptr<vision::mod::FaceID3Model> { struct FaceID3Model {} *x1; struct __shared_weak_count {} *x2; })arg1 entityPrintOriginatingRequestSpecifier:(id)arg2 entityUniqueIdentifiers:(id)arg3 entityPrintCounts:(id)arg4;
- (id)predictionsForObservation:(id)arg1 limit:(unsigned long long)arg2 canceller:(id)arg3 error:(id*)arg4;
- (unsigned long long)printCountForEntityWithUniqueIdentifier:(id)arg1;
- (id)printCountsForAllEntities;
- (id)printCountsForEntitiesWithUniqueIdentifiers:(id)arg1;
- (id)trainingEntityPrintsForEntityWithUniqueIdentifier:(id)arg1 error:(id*)arg2;
- (id)uniqueIdentifierOfEntityAtIndex:(unsigned long long)arg1;

@end

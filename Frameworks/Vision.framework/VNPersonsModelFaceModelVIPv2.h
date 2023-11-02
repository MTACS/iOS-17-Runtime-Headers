
@interface VNPersonsModelFaceModelVIPv2 : VNPersonsModelFaceModel {
    NSDictionary * _cachedPersonUniqueIdentifierToFaceprintCountMapping;
    struct shared_ptr<vision::mod::FaceIDModel> { 
        struct FaceIDModel {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _faceIDModel;
    unsigned long long  _faceprintRequestRevision;
    int  _maximumElementsPerID;
    NSMapTable * _serialNumberToPersonUniqueIdentifierMapTable;
}

+ (struct shared_ptr<vision::mod::ImageDescriptorBufferFloat32> { struct ImageDescriptorBufferFloat32 {} *x1; struct __shared_weak_count {} *x2; })_concatenateFaceprintImageDescriptorBuffer:(struct shared_ptr<vision::mod::ImageDescriptorBufferFloat32> { struct ImageDescriptorBufferFloat32 {} *x1; struct __shared_weak_count {} *x2; })arg1 withFaceprints:(id)arg2 forIdentityWithSerialNumber:(int)arg3 faceprintLabels:(void*)arg4;
+ (bool)getStoredRepresentationTag:(unsigned int*)arg1 forModelVersion:(unsigned long long)arg2 error:(id*)arg3;
+ (id)modelBuiltFromConfiguration:(id)arg1 dataProvider:(id)arg2 canceller:(id)arg3 error:(id*)arg4;
+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)_getSerialNumber:(int*)arg1 forPersonUniqueIdentifier:(id)arg2 error:(id*)arg3;
- (id)_personPredictionsForFace:(id)arg1 withDescriptor:(const void*)arg2 limit:(unsigned long long)arg3 faceIDCanceller:(struct CVMLCanceller { int (**x1)(); bool x2; int x3; }*)arg4 error:(id*)arg5;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)faceCountForPersonWithUniqueIdentifier:(id)arg1;
- (id)faceCountsForAllPersons;
- (id)faceCountsForPersonsWithUniqueIdentifiers:(id)arg1;
- (unsigned long long)faceprintRequestRevision;
- (id)initWithCoder:(id)arg1;
- (id)initWithFaceIDModel:(struct shared_ptr<vision::mod::FaceIDModel> { struct FaceIDModel {} *x1; struct __shared_weak_count {} *x2; })arg1 faceprintRequestRevision:(unsigned long long)arg2 maximumElementsPerID:(unsigned long long)arg3 personUniqueIdentifierToSerialNumberMapping:(id)arg4;
- (unsigned long long)personCount;
- (id)personPredictionsForFace:(id)arg1 withDescriptor:(const void*)arg2 limit:(unsigned long long)arg3 canceller:(id)arg4 error:(id*)arg5;
- (id)personUniqueIdentifiers;
- (id)trainingFaceprintsForPersonWithUniqueIdentifier:(id)arg1 error:(id*)arg2;

@end

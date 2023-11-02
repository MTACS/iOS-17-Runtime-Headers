
@interface VCPFaceCropManager : NSObject {
    VCPPhotosFaceProcessingContext * _context;
    PHPhotoLibrary * _photoLibrary;
}

+ (bool)_allowANE;

- (void).cxx_destruct;
- (id)_associateFace:(id)arg1 withFaceCrop:(id)arg2 error:(id*)arg3;
- (id)_bestFaceForFacePrintRequest:(id)arg1 withRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)_bestObservationInAnimalObservations:(id)arg1 withRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (bool)_clearDirtyStateOnFaceCrop:(id)arg1 error:(id*)arg2;
- (id)_faceAssociatedWithFaceCrop:(id)arg1;
- (id)_faceFromFaceCrop:(id)arg1 error:(id*)arg2;
- (bool)_generateAndAssociateFaceprintedFaceForFaceCrop:(id)arg1 faceCropFaceLocalIdentifier:(id*)arg2 error:(id*)arg3;
- (bool)_persistGeneratedFaceCrops:(id)arg1 forAsset:(id)arg2 error:(id*)arg3;
- (bool)_processDirtyFaceCrop:(id)arg1 faceCropFaceLocalIdentifier:(id*)arg2 error:(id*)arg3;
- (bool)_recordNeedToPersonBuildOnFaceGroupContainingFace:(id)arg1 error:(id*)arg2;
- (bool)_updateFace:(id)arg1 withFaceCrop:(id)arg2 error:(id*)arg3;
- (bool)_updateFaceprint:(id)arg1 forFace:(id)arg2 error:(id*)arg3;
- (id)_vcpAnimalFaceWithFaceCrop:(id)arg1 animalFaceObservations:(id)arg2 animalBodyObservations:(id)arg3 animalprintRequest:(id)arg4 normalizedFaceCropBoundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 faceCropImageDimension:(struct CGSize { double x1; double x2; })arg6 error:(id*)arg7;
- (id)_vcpFaceCropFromPHFaceCrop:(id)arg1;
- (id)_vcpHumanFaceWithFaceCrop:(id)arg1 imageRequestHandler:(id)arg2 faceDetectionRequest:(id)arg3 normalizedFaceCropBoundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 faceCropImageDimension:(struct CGSize { double x1; double x2; })arg5 faceprintRequest:(id)arg6 error:(id*)arg7;
- (bool)generateAndPersistFaceCropsForFaces:(id)arg1 withAsset:(id)arg2 resource:(id)arg3 resourceURL:(id)arg4 error:(id*)arg5;
- (id)initWithPhotoLibrary:(id)arg1 andContext:(id)arg2;
- (int)processDirtyFaceCrops:(unsigned long long*)arg1 withCancelBlock:(id /* block */)arg2 andExtendTimeoutBlock:(id /* block */)arg3;

@end

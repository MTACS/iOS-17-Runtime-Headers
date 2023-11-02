
@interface PLPhotoEditPersistenceManager : NSObject

// Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices

+ (unsigned int)renderTypeForAdjustmentData:(id)arg1 formatIdentifier:(id)arg2 formatVersion:(id)arg3;
+ (bool)validateAdjustmentData:(id)arg1 formatIdentifier:(id)arg2 formatVersion:(id)arg3 error:(id*)arg4;

- (id)dataFromCompositionController:(id)arg1 outFormatIdentifier:(id*)arg2 outFormatVersion:(id*)arg3 exportProperties:(id)arg4;
- (id)debugDescriptionForAdjustmentData:(id)arg1;
- (id)debugDescriptionForPhotoEditData:(id)arg1 formatIdentifier:(id)arg2 formatVersion:(id)arg3;
- (id)loadCompositionFrom:(id)arg1 formatIdentifier:(id)arg2 formatVersion:(id)arg3 error:(id*)arg4;
- (void)loadMasterDimensionsFromPhotoEditData:(id)arg1 outMasterWidth:(long long*)arg2 outMasterHeight:(long long*)arg3;
- (id)loadPhotoEditData:(id)arg1 formatIdentifier:(id)arg2 formatVersion:(id)arg3 importProperties:(id)arg4 error:(id*)arg5;

// Image: /System/Library/Frameworks/Photos.framework/Photos

+ (id)compositionControllerWithAdjustmentData:(id)arg1 asset:(id)arg2 outMasterWidth:(long long*)arg3 outMasterHeight:(long long*)arg4;

@end

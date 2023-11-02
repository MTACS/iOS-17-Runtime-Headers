
@interface PGPeopleUtilities : NSObject

+ (bool)_hasMomentsForPersonLocalIdentifiers:(id)arg1 inGraph:(id)arg2 photoLibrary:(id)arg3 usePersonMoments:(bool)arg4;
+ (id)_validPersonLocalIdentifiersFromSocialGroups:(id)arg1 withPhotoLibrary:(id)arg2;
+ (id)validateKeyedSocialGroups:(id)arg1 withPhotoLibrary:(id)arg2 graph:(id)arg3;
+ (id)validateSocialGroups:(id)arg1 withPhotoLibrary:(id)arg2 graph:(id)arg3;
+ (id)validateSocialGroups:(id)arg1 withPhotoLibrary:(id)arg2 graph:(id)arg3 usePersonMoments:(bool)arg4;

@end

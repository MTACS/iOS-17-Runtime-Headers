
@interface PNPersonPromoterEvaluation : NSObject

+ (id)_peopleClustersDictionaryForPeople:(id)arg1 withPhotoLibrary:(id)arg2;
+ (bool)createDirectoryIfNotExitAtURL:(id)arg1;
+ (bool)exportPhotoLibrary:(id)arg1 toURL:(id)arg2 forPeople:(id)arg3 error:(id*)arg4;
+ (bool)exportPhotoLibrary:(id)arg1 toURL:(id)arg2 forPeopleType:(unsigned long long)arg3 error:(id*)arg4;
+ (id)openPhotoLibraryAtURL:(id)arg1;
+ (void)peopleClusteringWithParameter:(id)arg1 photoLibrary:(id)arg2 directoryURL:(id)arg3 delegate:(id)arg4;

@end

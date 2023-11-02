
@interface SearchUIPhotosUtilities : NSObject

+ (id)fetchOptionsForLibrary:(id)arg1;
+ (id)fetchResultForPersonIdentifiers:(id)arg1 isSyndicated:(bool)arg2;
+ (id)fetchResultForPhotoIdentifiers:(id)arg1 isSyndicated:(bool)arg2;
+ (id)sharedPhotoLibraryIsSyndicated:(bool)arg1;

@end

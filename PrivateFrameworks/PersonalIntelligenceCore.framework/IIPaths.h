
@interface IIPaths : NSObject

+ (id)filename:(id)arg1 createIfNeeded:(bool)arg2;
+ (id)resourcesDirectory;
+ (id)subdirectory:(id)arg1 createIfNeeded:(bool)arg2;
+ (id)suggestionsDirectory;
+ (id)suggestionsDirectoryAfterCreatingIfNeeded:(bool)arg1;
+ (id)suggestionsDirectoryFile:(id)arg1;
+ (id)suggestionsDirectoryFile:(id)arg1 creatingSuggestionsDirectoryIfNeeded:(bool)arg2;
+ (id)suggestionsSubdirectory:(id)arg1;
+ (id)suggestionsSubdirectory:(id)arg1 creatingDirectoriesIfNeeded:(bool)arg2;
+ (id)topDirectory;
+ (id)topDirectoryCreateIfNeeded:(bool)arg1;
+ (id)topDirectoryWithName:(id)arg1 createIfNeeded:(bool)arg2;

@end

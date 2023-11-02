
@interface HVPathsBase : NSObject

+ (id)filename:(id)arg1;
+ (id)filename:(id)arg1 createIfNeeded:(bool)arg2;
+ (id)filename:(id)arg1 subdirectory:(id)arg2;
+ (id)filename:(id)arg1 subdirectory:(id)arg2 createIfNeeded:(bool)arg3;
+ (id)subdirectory:(id)arg1;
+ (id)subdirectory:(id)arg1 createIfNeeded:(bool)arg2;
+ (id)topDirectory;
+ (id)topDirectoryCreateIfNeeded:(bool)arg1;
+ (id)topDirectoryWithName:(id)arg1 createIfNeeded:(bool)arg2;

@end

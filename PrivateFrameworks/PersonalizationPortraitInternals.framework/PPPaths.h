
@interface PPPaths : NSObject

+ (id)defaultAssetPathForNamespaceId:(unsigned int)arg1 factorName:(id)arg2;
+ (id)filename:(id)arg1 logSubdirectory:(id)arg2;
+ (id)filename:(id)arg1 subdirectory:(id)arg2;
+ (id)logDirectory;
+ (id)logSubdirectory:(id)arg1;
+ (id)resourcesDirectory;
+ (id)subdirectory:(id)arg1;
+ (id)topDirectory;

@end

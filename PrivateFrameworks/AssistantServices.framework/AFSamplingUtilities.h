
@interface AFSamplingUtilities : NSObject

+ (id)component;
+ (id)createSamplingDirectory;
+ (void)deleteAllSamplingData;
+ (id)deleteItemAtFilePath:(id)arg1;
+ (id)sampledCachesSubDirectoryPath;
+ (id)sampledCurrentSamplingDateKey;
+ (id)sampledLibraryDirectoryPath;
+ (id)sampledPlistFileName;
+ (id)sampledSubDirectoryNameFormat;
+ (id)sampledSubDirectoryPath;
+ (id)samplingDateAsString;
+ (id)timezone;

@end

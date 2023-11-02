
@interface SHClusterImporterUtils : NSObject

+ (id)buildTemporaryClusterURLWithError:(id*)arg1;
+ (id)cachesDirectory;
+ (bool)clearTemporaryDatabaseFileAtURL:(id)arg1 withError:(id*)arg2;
+ (bool)copyDatabaseFromURL:(id)arg1 toDatabaseDestinationURL:(id)arg2 error:(id*)arg3;
+ (id)importerForFile:(id)arg1;

@end

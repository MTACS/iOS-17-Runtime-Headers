
@interface SNFileUtils : NSObject

+ (bool)addPurgeablePropertyToURL:(id)arg1 error:(id*)arg2;
+ (id)contentsOfDirectoryAtURL:(id)arg1 error:(id*)arg2;
+ (id)expandURLsForRelativePaths:(id)arg1 fromURL:(id)arg2;
+ (id)fileAttributesForPath:(id)arg1 attributeKey:(id)arg2 error:(id*)arg3;
+ (id)fileAttributesForPath:(id)arg1 error:(id*)arg2;
+ (id)fileAttributesForURL:(id)arg1 attributeKey:(id)arg2 error:(id*)arg3;
+ (id)fileAttributesForURL:(id)arg1 error:(id*)arg2;
+ (id)fileCreationDateForPath:(id)arg1 error:(id*)arg2;
+ (id)fileCreationDateForURL:(id)arg1 error:(id*)arg2;
+ (id)fileResourceIdentifierForPath:(id)arg1 error:(id*)arg2;
+ (id)fileResourceIdentifierForURL:(id)arg1 error:(id*)arg2;
+ (id)fileSizeBytesForPath:(id)arg1 error:(id*)arg2;
+ (id)fileSizeBytesForURL:(id)arg1 error:(id*)arg2;
+ (id)prefixLastOfPathComponents:(id)arg1 withString:(id)arg2 error:(id*)arg3;
+ (id)prefixLastOfPathComponentsForURL:(id)arg1 withString:(id)arg2 error:(id*)arg3;
+ (id)readJSONFromURL:(id)arg1 jsonReadingOptions:(unsigned long long)arg2 error:(id*)arg3;
+ (id)resourceURLAtPath:(id)arg1 inBundleContainingClass:(Class)arg2;
+ (id)resourcesURLForBundleContainingClass:(Class)arg1;
+ (id)temporaryDirectoryURL;
+ (id)toSetCollectFileResourceIdentifiersForURLs:(id)arg1 error:(id*)arg2;
+ (id)urlInTemporaryDirectoryToPath:(id)arg1;
+ (bool)validateURLIsFileURL:(id)arg1 error:(id*)arg2;
+ (bool)writeJSONToURL:(id)arg1 object:(id)arg2 jsonWritingOptions:(unsigned long long)arg3 createIntermediateDirectories:(bool)arg4 overwrite:(bool)arg5 error:(id*)arg6;
+ (bool)writeToFileAtURL:(id)arg1 createIntermediateDirectories:(bool)arg2 overwrite:(bool)arg3 data:(id)arg4 error:(id*)arg5;

- (id)init;

@end

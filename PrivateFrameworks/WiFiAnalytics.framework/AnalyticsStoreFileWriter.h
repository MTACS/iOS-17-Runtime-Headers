
@interface AnalyticsStoreFileWriter : NSObject {
    AnalyticsStoreMOHandler * _managedObjectHandler;
}

@property (nonatomic, retain) AnalyticsStoreMOHandler *managedObjectHandler;

- (void).cxx_destruct;
- (id)analyticsStoreFileWriterDirectory;
- (id)analyticsStoreFileWriterFilePath;
- (id)batchedWriteAnalyticsStoreToFile:(unsigned long long)arg1 maxAge:(unsigned long long)arg2;
- (id)batchedWriteAnalyticsStoreToFileWithBatchSize:(unsigned long long)arg1 maxAge:(unsigned long long)arg2;
- (id)init;
- (id)initWithAnalyticsStore:(id)arg1;
- (id)managedObjectHandler;
- (id)relationshipKeyPathsForPrefetching:(id)arg1;
- (void)setManagedObjectHandler:(id)arg1;
- (void)stringifyManagedObjectsArray:(id)arg1 titleString:(id*)arg2 dataStringsArray:(id*)arg3;
- (id)stringifyObjectWithPadding:(id)arg1 padding:(id)arg2 padToLength:(unsigned long long)arg3;
- (id)stringifyRelationship:(id)arg1 name:(id*)arg2;
- (id)stringifyValueArray:(id)arg1;
- (id)writeAnalyticsStoreToFile;
- (id)writeArrayToJSONFile:(id)arg1;
- (id)writeDeploymentGraphToFile;
- (id)writeDictionaryToJSONFile:(id)arg1 network:(id)arg2;

@end

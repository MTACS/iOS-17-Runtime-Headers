
@interface DBGDataSourceConnectionDocument : NSObject <DBGDataSourceConnection> {
    NSArray * _dateOrderedDirectoryContents;
    <DBGDataSourceConnectionDelegate> * _delegate;
    NSURL * _directoryURL;
}

@property (retain) NSArray *dateOrderedDirectoryContents;
@property (readonly, copy) NSString *debugDescription;
@property float debugHierarchyVersion;
@property <DBGDataSourceConnectionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (retain) NSURL *directoryURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)connectionForDocumentDirectoryAtURL:(id)arg1;
+ (Class)matchingDataCoordinatorClass;

- (void).cxx_destruct;
- (void)closeConnection;
- (id)dataForFetchAtIndex:(long long)arg1;
- (id)dateOrderedDirectoryContents;
- (id)dateOrdererdContentsOfDirectory:(id)arg1;
- (float)debugHierarchyVersion;
- (id)delegate;
- (id)directoryURL;
- (id)initWithDirectoryURL:(id)arg1;
- (void)performRequest:(id)arg1;
- (void)retrieveDebugHierarchyConfiguration:(id /* block */)arg1;
- (void)setDateOrderedDirectoryContents:(id)arg1;
- (void)setDebugHierarchyVersion:(float)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDirectoryURL:(id)arg1;
- (void)simulateInitialDataFetch;
- (void)simulateSecondaryDataFetch;
- (void)simulateTertiaryDataFetch;
- (void)simulateTotalDataFetchForRequest:(id)arg1;

@end

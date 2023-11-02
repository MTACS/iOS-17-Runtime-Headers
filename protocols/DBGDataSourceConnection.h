
@protocol DBGDataSourceConnection <NSObject>

@required

+ (Class)matchingDataCoordinatorClass;

- (void)closeConnection;
- (float)debugHierarchyVersion;
- (<DBGDataSourceConnectionDelegate> *)delegate;
- (void)performRequest:(DebugHierarchyRequest *)arg1;
- (void)retrieveDebugHierarchyConfiguration:(void *)arg1; // needs 1 arg types, found 9: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <DBGDataSourceConnection> *, bool, bool, NSString *, void*
- (void)setDelegate:(id <DBGDataSourceConnectionDelegate>)arg1;

@end

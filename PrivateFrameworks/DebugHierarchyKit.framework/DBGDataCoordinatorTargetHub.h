
@interface DBGDataCoordinatorTargetHub : DBGDataCoordinator {
    NSMutableDictionary * _pendingChildNodes;
}

@property (retain) NSMutableDictionary *pendingChildNodes;

- (void).cxx_destruct;
- (void)_addNodeToMatchingRootLevelGroup:(id)arg1;
- (id)_createNodeWithDict:(id)arg1;
- (id)_decompressedDataForRequestResponseData:(id)arg1;
- (void)_processFetchResults:(id)arg1 forRequest:(id)arg2;
- (void)_processRequestLogs:(id)arg1 forRequest:(id)arg2;
- (void)_updateComputedPropertiesOfNode:(id)arg1;
- (void)_updateGroup:(id)arg1 withDict:(id)arg2;
- (void)_updateNode:(id)arg1 withDict:(id)arg2;
- (void)_updatePropertiesWithDicts:(id)arg1 onNode:(id)arg2;
- (void)_updateProperty:(id)arg1 withDict:(id)arg2;
- (void)_updateSnapshotWithResponse:(id)arg1 forRequest:(id)arg2;
- (void)_updateSubHierarchyOfProperty:(id)arg1;
- (void)_updateSubpropertiesWithDicts:(id)arg1 onProperty:(id)arg2;
- (void)_writeRequestResponseToDiskIfNecessary:(id)arg1 request:(id)arg2 compressedSize:(unsigned long long)arg3;
- (id)compatibility_modernizedPropertyDescription:(id)arg1 targetVersion:(float)arg2;
- (void)didReceiveData:(id)arg1 forRequest:(id)arg2;
- (id)pendingChildNodes;
- (void)processDebugHierarchyObjectDict:(id)arg1 inGroup:(id)arg2 isDirectChildGroup:(bool)arg3;
- (void)processGroupDict:(id)arg1 isDirectChildGroup:(bool)arg2 parentNode:(id)arg3;
- (void)setPendingChildNodes:(id)arg1;

@end

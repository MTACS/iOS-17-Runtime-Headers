
@interface MNTraceLoader : NSObject {
    MNTrace * _trace;
}

- (void).cxx_destruct;
- (id)_errorWithCode:(long long)arg1 errorDescriptionFormat:(id)arg2;
- (bool)_executeQuery:(id)arg1 rowHandler:(id /* block */)arg2;
- (id)_handleUpdateError;
- (bool)_loadAnnotatedUserBehaviorTable;
- (bool)_loadAnnotatedUserEnvironmentTable;
- (bool)_loadCompassHeadingDataTable;
- (bool)_loadDirectionsTableAllowDeprecatedProtocol:(bool)arg1 outError:(out id*)arg2;
- (bool)_loadETAUpdatesTable;
- (bool)_loadEVDataTable;
- (bool)_loadInfoTable;
- (bool)_loadLocationsTable:(bool)arg1;
- (bool)_loadMiscInfo;
- (bool)_loadMotionDataTable;
- (bool)_loadNavigationEventsTable;
- (bool)_loadNavigationUpdatesTable;
- (bool)_loadNetworkEvents;
- (bool)_loadTraceVersion;
- (bool)_loadVehicleDataTable;
- (bool)_tableExists:(id)arg1;
- (bool)_updateTraceFromVersion:(unsigned long long)arg1 outError:(id*)arg2;
- (bool)loadExtraData;
- (id)loadTraceWithPath:(id)arg1 options:(unsigned long long)arg2 outError:(out id*)arg3;
- (id)loadTraceWithPath:(id)arg1 outError:(out id*)arg2;
- (id)trace;

@end

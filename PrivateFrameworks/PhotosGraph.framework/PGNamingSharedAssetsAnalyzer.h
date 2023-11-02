
@interface PGNamingSharedAssetsAnalyzer : NSObject <PGNamingAnalyzer> {
    NSObject<OS_os_log> * _loggingConnection;
    PHPhotoLibrary * _photoLibrary;
    PGGraphNamingProcessor * _processor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)findSharedAssetMatchesFromSharingRecords:(id)arg1 personLocalIdentifiersByAssetUUID:(id)arg2 graph:(id)arg3 withProgressBlock:(id /* block */)arg4;
- (id)initWithNamingProcessor:(id)arg1;
- (id)initWithNamingProcessor:(id)arg1 photoLibrary:(id)arg2 loggingConnection:(id)arg3;
- (id)name;
- (void)runAnalysisWithProgressBlock:(id /* block */)arg1;

@end

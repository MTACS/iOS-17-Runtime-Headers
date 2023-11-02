
@interface PGNamingCMMAnalyzer : NSObject <PGNamingAnalyzer> {
    NSObject<OS_os_log> * _loggingConnection;
    PHPhotoLibrary * _photoLibrary;
    PGGraphNamingProcessor * _processor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)findCMMMatchesFromSharingRecords:(id)arg1 graph:(id)arg2 withProgressBlock:(id /* block */)arg3;
- (id)initWithNamingProcessor:(id)arg1;
- (id)initWithNamingProcessor:(id)arg1 photoLibrary:(id)arg2 loggingConnection:(id)arg3;
- (id)name;
- (void)runAnalysisWithProgressBlock:(id /* block */)arg1;

@end

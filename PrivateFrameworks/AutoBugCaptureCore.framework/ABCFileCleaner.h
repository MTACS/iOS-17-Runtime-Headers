
@interface ABCFileCleaner : NSObject <NetDiagnosticsShimDelegate> {
    <SymptomsFileCleanerDelegate> * _delegate;
    NSArray * _filesToDelete;
    NetDiagnosticsShim * _netDiags;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (retain) <SymptomsFileCleanerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (retain) NSArray *filesToDelete;
@property (readonly) unsigned long long hash;
@property (retain) NetDiagnosticsShim *netDiags;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cleanupFiles:(id)arg1;
- (id)delegate;
- (id)filesToDelete;
- (id)initWithQueue:(id)arg1;
- (void)netDiagnosticTaskStatusChangedFor:(id)arg1 toStatus:(int)arg2;
- (id)netDiags;
- (id)queue;
- (void)setDelegate:(id)arg1;
- (void)setFilesToDelete:(id)arg1;
- (void)setNetDiags:(id)arg1;
- (void)setQueue:(id)arg1;

@end


@interface EKDiagnosticsCollector : NSObject <EKCancellableRemoteOperation> {
    <EKDiagnosticsCollectionDelegate> * _delegate;
    bool  _determinedOutputFiles;
    NSMutableDictionary * _files;
    bool  _finished;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _redactLogs;
    EKEventStore * _store;
    int  _token;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <EKDiagnosticsCollectionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *files;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool redactLogs;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cancel;
- (void)cancelDiagnosticsCollection;
- (void)collectDiagnostics;
- (id)delegate;
- (void)disconnected;
- (id)files;
- (id)initWithEventStore:(id)arg1 delegate:(id)arg2;
- (void)receivedBatchResultsFromServer:(id)arg1 finished:(bool)arg2;
- (bool)redactLogs;
- (void)setRedactLogs:(bool)arg1;

@end

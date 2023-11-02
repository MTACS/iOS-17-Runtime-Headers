
@interface _PXTapToRadarDiagnosticCollectionOperation : NSObject <PXTapToRadarDiagnosticCollectionOperation> {
    NSObject<OS_dispatch_group> * _completionGroup;
    bool  _ended;
    NSError * _error;
    NSString * _name;
    bool  _success;
    bool  _timedOut;
}

@property (nonatomic, readonly) NSString *name;

- (void).cxx_destruct;
- (void)_timedOut;
- (void)endWithSuccess:(bool)arg1 error:(id)arg2;
- (id)initWithName:(id)arg1 timeout:(double)arg2;
- (void)installCompletionHandler:(id /* block */)arg1;
- (id)name;

@end

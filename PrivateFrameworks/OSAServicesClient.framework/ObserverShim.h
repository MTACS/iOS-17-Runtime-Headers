
@interface ObserverShim : NSObject <OSADiagnosticEventObserver, OSADiagnosticWriteObserver> {
    <OSADiagnosticObserver> * _observer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <OSADiagnosticObserver> *observer;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)didReceiveDiagnosticLog:(id)arg1 ofType:(id)arg2 details:(id)arg3;
- (void)didWriteDiagnosticLog:(id)arg1 ofType:(id)arg2 toPath:(id)arg3;
- (void)failedToWriteDiagnosticLog:(id)arg1 ofType:(id)arg2 error:(id)arg3;
- (id)initWithObserver:(id)arg1;
- (bool)matches:(id)arg1;
- (id)observer;
- (void)willWriteDiagnosticLog:(id)arg1 ofType:(id)arg2;

@end

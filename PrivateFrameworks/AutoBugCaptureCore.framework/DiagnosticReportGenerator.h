
@interface DiagnosticReportGenerator : NSObject {
    id /* block */  _completionHandler;
    <DiagnosticReportGeneratorDelegate> * _delegate;
    DiagnosticCase * _diagCase;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _reportGenerated;
    double  _timeoutSeconds;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic) <DiagnosticReportGeneratorDelegate> *delegate;
@property (nonatomic, retain) DiagnosticCase *diagCase;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) bool reportGenerated;
@property (nonatomic) double timeoutSeconds;

- (void).cxx_destruct;
- (id /* block */)completionHandler;
- (id)delegate;
- (id)diagCase;
- (bool)generateReportForCase:(id)arg1 reportName:(id)arg2;
- (bool)generateReportForCase:(id)arg1 reportName:(id)arg2 completion:(id /* block */)arg3;
- (id)initWithQueue:(id)arg1;
- (id)queue;
- (bool)reportGenerated;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setDefaults;
- (void)setDelegate:(id)arg1;
- (void)setDiagCase:(id)arg1;
- (void)setReportGenerated:(bool)arg1;
- (void)setTimeoutSeconds:(double)arg1;
- (bool)startReportGeneration;
- (double)timeoutSeconds;

@end

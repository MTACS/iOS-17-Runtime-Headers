
@interface CADDiagnosticsDiagnosticDatabaseCollector : NSObject <CADDiagnosticLogCollector> {
    NSURL * _outputURL;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)collect:(id)arg1;
- (bool)collectDiagnosticsDatabase:(id)arg1;
- (void)determineExpectedOutputFiles:(id)arg1;

@end

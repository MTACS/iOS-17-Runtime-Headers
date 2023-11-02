
@protocol CADDiagnosticLogCollector <NSObject>

@required

- (void)collect:(id <CADDiagnosticLogContext>)arg1;
- (void)determineExpectedOutputFiles:(id <CADDiagnosticLogContext>)arg1;

@end

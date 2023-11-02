
@interface CRKShareTargetBrowserTransportFactory : NSObject

- (id)makeInstructordTransportProvider;
- (void)makeInstructordTransportWithCompletion:(id /* block */)arg1;
- (id)makeStudentdTransportProvider;
- (void)makeStudentdTransportWithCompletion:(id /* block */)arg1;

@end

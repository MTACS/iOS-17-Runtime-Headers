
@protocol _PFUbiquityRecordImportOperationDelegate

@required

- (void)operation:(_PFUbiquityRecordImportOperation *)arg1 failedWithError:(NSError *)arg2;
- (void)operationDidFinish:(_PFUbiquityRecordImportOperation *)arg1;
- (void)operationWasInterruptedDuringImport:(_PFUbiquityRecordImportOperation *)arg1;

@end

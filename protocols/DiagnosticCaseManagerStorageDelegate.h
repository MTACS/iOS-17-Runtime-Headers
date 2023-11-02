
@protocol DiagnosticCaseManagerStorageDelegate <NSObject>

@required

- (void)didSaveDiagnosticCases;
- (void)purgeAttachmentsAtPaths:(NSArray *)arg1;

@end


@interface PXImportDiagnosticsService : PXDiagnosticsService

+ (void)simulateFakeImportSource;

- (bool)canPerformAction;
- (void)performAction;
- (id)title;

@end

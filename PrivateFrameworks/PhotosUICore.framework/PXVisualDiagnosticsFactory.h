
@interface PXVisualDiagnosticsFactory : NSObject

+ (void)_dismissProgressIndicator:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)_presentProgressIndicatorFromViewController:(id)arg1 completionHandler:(id /* block */)arg2;
+ (id)debugQuickLookObjectWithRootProvider:(id)arg1;
+ (void)requestVisualDiagnosticsPDFDocumentURLWithConfiguration:(id)arg1 resultHandler:(id /* block */)arg2;
+ (void)requestVisualDiagnosticsPDFDocumentWithConfiguration:(id)arg1 resultHandler:(id /* block */)arg2;
+ (void)showVisualDiagnosticsWithConfiguration:(id)arg1 fromViewController:(id)arg2 completionHandler:(id /* block */)arg3;

@end

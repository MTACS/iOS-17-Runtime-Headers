
@protocol CADDiagnosticInterface <NSObject>

@required

- (void)CADDiagnosticsCancelCollectionWithToken:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: unsigned int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)CADDiagnosticsCollectWithToken:(void *)arg1 options:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: unsigned int, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*

@end

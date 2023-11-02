
@protocol EMDiagnosticInfoProviding <NSObject>

@required

- (void)provideDiagnosticsAt:(void *)arg1 options:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSURL *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, NSError *, void*
- (EMObjectID *)providerObjectID;

@end

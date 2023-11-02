
@interface DiagnosticCaseStorageAnalytics : ObjectAnalytics

- (id)allDiagnosticCasesStorage;
- (id)allDiagnosticCasesStorageDictionariesWithProperties:(id)arg1;
- (id)diagnosticCaseDictionaryKeys;
- (id)diagnosticCaseStorageDictionaryForIdentifier:(id)arg1 properties:(id)arg2;
- (id)diagnosticCaseStorageWithId:(id)arg1;
- (id)diagnosticCaseStorageWithIdentifier:(id)arg1;
- (id)historicalDiagnosticCaseStorageDictionaryFromIdentifier:(id)arg1 withEvents:(bool)arg2 count:(unsigned long long)arg3;
- (id)historicalDiagnosticCaseStorageFromIdentifier:(id)arg1 count:(unsigned long long)arg2;
- (id)init;
- (id)initWithWorkspace:(id)arg1 withCache:(bool)arg2;
- (long long)removeAllDiagnosticCaseStorages;

@end

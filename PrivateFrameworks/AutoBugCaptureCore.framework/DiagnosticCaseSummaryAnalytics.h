
@interface DiagnosticCaseSummaryAnalytics : ObjectAnalytics

+ (void)extractPbAttachmentsFromString:(id)arg1 completion:(id /* block */)arg2;
+ (id)listCaseSummaryProperties;
+ (id)listSummaryItemFromCaseSummaryDictionary:(id)arg1;
+ (id)pbRequestForCases:(id)arg1;
+ (id)stringRepresentationOfAttachmentsWithSize:(id)arg1;

- (id)diagnosticCaseSummaryDictionaryForIdentifier:(id)arg1 properties:(id)arg2;
- (id)fetchCaseSummariesOfType:(id)arg1 fromIdentifier:(id)arg2 count:(unsigned long long)arg3;
- (id)fetchCaseSummariesWithIdentifiers:(id)arg1;
- (id)init;
- (id)initWithWorkspace:(id)arg1 withCache:(bool)arg2;
- (void)insertEntityForDiagnosticCase:(id)arg1;
- (long long)removeAllDiagnosticCaseSummaries;
- (long long)removeDiagnosticCaseSummariesWithState:(short)arg1 olderThan:(unsigned long long)arg2;
- (void)updateSubmittedCases:(id)arg1;

@end

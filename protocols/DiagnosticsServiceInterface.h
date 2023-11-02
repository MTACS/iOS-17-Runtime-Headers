
@protocol DiagnosticsServiceInterface <NSObject>

@required

- (void)addSignatureContentForSession:(void *)arg1 key:(void *)arg2 content:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 9: NSString *, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)addToSession:(void *)arg1 event:(void *)arg2 payload:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 9: NSString *, NSDictionary *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)addToSession:(void *)arg1 events:(void *)arg2 payload:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 9: NSString *, NSArray *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)cancelSession:(NSString *)arg1;
- (void)cloudKitUploadDecisionForCaseIdentifiers:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)endSession:(NSString *)arg1;
- (void)getAutoBugCaptureConfiguration:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)getCasesListFromIdentifier:(void *)arg1 count:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: NSString *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)getDiagnosticPayloadsForSignatures:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)getExpertSystemsStatus:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)getSessionStatisticsWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)homeKitResidentDevicesIDSIdentifiersWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)listCaseSummariesOfType:(void *)arg1 fromIdentifier:(void *)arg2 count:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 9: NSString *, NSString *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)listCaseSummariesWithIdentifiers:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)purgeAutoBugCaptureFilesWithSubPaths:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)requestGroupCaseIdentifierForSignature:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)resetAllWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)resetDiagnosticCaseStorageWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)resetDiagnosticCaseUsageWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)snapshotWithSignature:(void *)arg1 delay:(void *)arg2 events:(void *)arg3 payload:(void *)arg4 actions:(void *)arg5 wantsRemoteCase:(void *)arg6 reply:(void *)arg7; // needs 7 arg types, found 12: NSDictionary *, unsigned long long, NSArray *, NSDictionary *, NSDictionary *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)startSessionWithSignature:(void *)arg1 duration:(void *)arg2 events:(void *)arg3 payload:(void *)arg4 actions:(void *)arg5 wantsRemoteCase:(void *)arg6 reply:(void *)arg7; // needs 7 arg types, found 12: NSDictionary *, unsigned long long, NSArray *, NSDictionary *, NSDictionary *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)submitRecentCaseSummariesWithCount:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (void)submitRecentCaseSummariesWithIdentifiers:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (void)triggerRemoteSessionForSignature:(void *)arg1 groupIdentifier:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: NSDictionary *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)uploadCasesWithIdentifiersToCloudKit:(NSArray *)arg1;
- (void)uploadRecentCases:(unsigned long long)arg1;

@end

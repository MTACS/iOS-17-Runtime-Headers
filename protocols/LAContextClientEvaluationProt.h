
@protocol LAContextClientEvaluationProt

@required

- (void)credentialOfType:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*
- (void)evaluateACL:(void *)arg1 operation:(void *)arg2 options:(void *)arg3 uiDelegate:(void *)arg4 reply:(void *)arg5; // needs 5 arg types, found 11: NSData *, id, NSDictionary *, <LAUIDelegate> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)evaluatePolicy:(void *)arg1 options:(void *)arg2 uiDelegate:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 10: long long, NSDictionary *, <LAUIDelegate> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)invalidateWithReply:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)isCredentialSet:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)optionsForInternalOperation:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, NSError *, void*
- (void)setCredential:(void *)arg1 type:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: NSData *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)setOptions:(void *)arg1 forInternalOperation:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: id, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)verifyFileVaultUser:(void *)arg1 volumeUuid:(void *)arg2 options:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 10: NSUUID *, NSUUID *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end

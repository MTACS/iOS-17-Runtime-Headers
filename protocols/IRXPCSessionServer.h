
@protocol IRXPCSessionServer <NSObject>

@required

- (void)_addEvent:(IREvent *)arg1 forCandidateIdentifier:(NSString *)arg2;
- (void)_createServiceWithParameters:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: IRServiceParameters *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, IRServiceToken *, NSError *, void*
- (void)_databaseExportwithReply:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)_deleteCandidate:(IRCandidate *)arg1;
- (void)_deleteDatabaseWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)_deleteService:(IRServiceToken *)arg1;
- (void)_getServiceTokensWithReply:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)_invalidate;
- (void)_requestCurrentContext;
- (void)_runWithConfiguration:(IRConfiguration *)arg1;
- (void)_updateCandidates:(NSSet *)arg1;

@end

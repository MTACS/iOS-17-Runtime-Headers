
@interface SEFidoKeyService : NSObject

+ (id)shared;

- (id)checkFidoKeyPresence:(id)arg1 usingSession:(id)arg2 withSessionSEID:(id)arg3 error:(id*)arg4;
- (id)checkMultipleFidoKeyPresence:(id)arg1 usingSession:(id)arg2 withSessionSEID:(id)arg3 error:(id*)arg4;
- (id)createFidoKeyForRelyingParty:(id)arg1 relyingPartyAccountHash:(id)arg2 challenge:(id)arg3 usingSession:(id)arg4 withSessionSEID:(id)arg5 error:(id*)arg6;
- (id)createFidoKeyForRelyingParty:(id)arg1 relyingPartyAccountHash:(id)arg2 challenge:(id)arg3 usingSession:(id)arg4 withSessionSEID:(id)arg5 externalizedAuth:(id)arg6 error:(id*)arg7;
- (bool)deleteFidoKeyFor:(id)arg1 usingSession:(id)arg2 withSessionSEID:(id)arg3 error:(id*)arg4;
- (id)signMultipleWithFidoKeysFor:(id)arg1 challenges:(id)arg2 forEndpointIdentifiers:(id)arg3 usingSession:(id)arg4 withSessionSEID:(id)arg5 externalizedAuth:(id)arg6 error:(id*)arg7;
- (id)signWithFidoKeyFor:(id)arg1 challenge:(id)arg2 forNFCKeyWithIdentifier:(id)arg3 usingSession:(id)arg4 withSessionSEID:(id)arg5 externalizedAuth:(id)arg6 error:(id*)arg7;
- (id)verifyWithFidoKeyFor:(id)arg1 signedChallenge:(id)arg2 usingSession:(id)arg3 withSessionSEID:(id)arg4 error:(id*)arg5;

@end

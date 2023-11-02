
@protocol AKCustodianDaemonProtocol

@required

- (void)fetchCustodianDataRecoveryKeyWithContext:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: AKCustodianContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)fetchCustodianRecoveryCodeConfigurationWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)fetchCustodianRecoveryTokenWithContext:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: AKCustodianContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)finalizeCustodianSetupWithContext:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: AKCustodianContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)initiateCustodianSetupWithContext:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: AKCustodianContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AKCustodianSetupResult *, NSError *, void*
- (void)performTrustedContactsDataSync:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: AKCustodianContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AKTrustedContactsSyncResult *, NSError *, void*
- (void)revokeCustodianWithContext:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: AKCustodianContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)sendEmbargoEndNotificationFeedbackWithContext:(void *)arg1 urlKey:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: AKCustodianContext *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)startCustodianRecoveryRequestWithContext:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: AKCustodianContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)startCustodianRecoveryTransactionWithContext:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: AKCustodianContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)updateCustodianRecoveryKeyWithContext:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: AKCustodianContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end

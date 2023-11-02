
@protocol HDHealthRecordsIngestionServiceInterface

@required

- (void)remote_addCardToWalletForRecord:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: HKSignedClinicalDataRecord *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_didUpdateSignedClinicalDataRecord:(HKSignedClinicalDataRecord *)arg1;
- (void)remote_handleSignedClinicalDataFeature:(void *)arg1 context:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: HKClinicalGatewayFeature *, HKClinicalIngestionContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HKSignedClinicalDataParsingResult *, NSError *, void*
- (void)remote_parseSignedClinicalData:(void *)arg1 options:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: HKSignedClinicalDataSource *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HKSignedClinicalDataParsingResult *, NSError *, void*
- (void)remote_processOriginalSignedClinicalDataRecords:(void *)arg1 options:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSArray *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HKSignedClinicalDataParsingResult *, NSError *, void*
- (void)remote_reverifySignatureForRecord:(void *)arg1 options:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: HDHRSOriginalSignedClinicalDataRecord *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HKSignedClinicalDataParsingResult *, NSError *, void*
- (void)remote_triggerDownloadIssuerRegistryForCatalogURL:(void *)arg1 shouldPersist:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 10: NSURL *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSNumber *, NSError *, void*
- (void)remote_triggerDownloadPublicKeysForCatalogURL:(void *)arg1 shouldPersist:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 10: NSURL *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSNumber *, NSError *, void*
- (void)remote_willDeleteSignedClinicalDataRecordWithSyncIdentifier:(NSUUID *)arg1;

@end

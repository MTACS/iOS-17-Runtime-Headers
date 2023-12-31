
@interface CKDPCSCacheShareFetchOperation : CKDPCSCacheFetchOperation

@property (nonatomic, readonly) CKRecordID *shareID;
@property (nonatomic, retain) CKDSharePCSData *sharePCSData;

- (bool)_decryptPCS;
- (bool)_fetchPCSDataFromDatabase;
- (bool)_fetchPCSDataFromServer;
- (void)_handlePCSDataFetched:(id)arg1 withError:(id)arg2;
- (bool)_savePCSDataToCache;
- (bool)hasAllPCSData;
- (id)itemTypeName;
- (void)setSharePCSData:(id)arg1;
- (id)shareID;
- (id)sharePCSData;

@end

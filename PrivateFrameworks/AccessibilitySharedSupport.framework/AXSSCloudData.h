
@interface AXSSCloudData : NSObject {
    NSObject<OS_os_transaction> * _openTransaction;
    NSArray * _recordIDsToDelete;
    NSArray * _recordsToUpdate;
    CKServerChangeToken * _serverChangeToken;
}

@property (nonatomic, retain) NSObject<OS_os_transaction> *openTransaction;
@property (nonatomic, retain) NSArray *recordIDsToDelete;
@property (nonatomic, retain) NSArray *recordsToUpdate;
@property (nonatomic, retain) CKServerChangeToken *serverChangeToken;

- (void).cxx_destruct;
- (id)openTransaction;
- (id)recordIDsToDelete;
- (id)recordsToUpdate;
- (id)serverChangeToken;
- (void)setOpenTransaction:(id)arg1;
- (void)setRecordIDsToDelete:(id)arg1;
- (void)setRecordsToUpdate:(id)arg1;
- (void)setServerChangeToken:(id)arg1;

@end

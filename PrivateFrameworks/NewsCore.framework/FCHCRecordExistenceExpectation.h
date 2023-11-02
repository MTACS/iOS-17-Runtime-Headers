
@interface FCHCRecordExistenceExpectation : NSObject <FCHCExpectation> {
    CKDatabase * _database;
    CKRecordID * _recordID;
    bool  _shouldExist;
}

@property (nonatomic, retain) CKDatabase *database;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) CKRecordID *recordID;
@property (nonatomic) bool shouldExist;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)database;
- (id)recordID;
- (void)setDatabase:(id)arg1;
- (void)setRecordID:(id)arg1;
- (void)setShouldExist:(bool)arg1;
- (bool)shouldExist;
- (void)validate;

@end

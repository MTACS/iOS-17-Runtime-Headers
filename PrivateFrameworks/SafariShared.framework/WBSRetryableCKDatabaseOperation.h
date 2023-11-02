
@interface WBSRetryableCKDatabaseOperation : WBSRetryableCKOperation {
    CKDatabase * _database;
}

@property (nonatomic, retain) CKDatabase *database;

- (void).cxx_destruct;
- (void)_setUpOperation:(id)arg1;
- (id)database;
- (void)setDatabase:(id)arg1;

@end


@interface CKSQLiteCacheTableEntry : CKSQLiteTableEntry {
    NSDate * _expirationDate;
}

@property (nonatomic, retain) NSDate *expirationDate;

- (void).cxx_destruct;
- (id)expirationDate;
- (void)setExpirationDate:(id)arg1;

@end

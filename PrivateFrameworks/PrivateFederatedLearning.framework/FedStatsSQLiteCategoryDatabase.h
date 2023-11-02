
@interface FedStatsSQLiteCategoryDatabase : NSObject {
    unsigned long long  _dimensionality;
    FedStatsSQLiteDatabase * _sqliteDB;
}

@property (readonly) unsigned long long dimensionality;
@property (readonly) FedStatsSQLiteDatabase *sqliteDB;

+ (id)categoryDatabaseAt:(id)arg1 withCategories:(id)arg2 error:(id*)arg3;
+ (id)databaseWithFileURL:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)decode:(unsigned long long)arg1 error:(id*)arg2;
- (unsigned long long)dimensionality;
- (id)encode:(id)arg1 error:(id*)arg2;
- (id)initWithSQLiteDatabase:(id)arg1 dimensionality:(unsigned long long)arg2;
- (id)sqliteDB;

@end

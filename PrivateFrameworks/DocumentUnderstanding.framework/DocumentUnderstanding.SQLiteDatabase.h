
@interface DocumentUnderstanding.SQLiteDatabase : NSObject {
    void dbPath;
    void internalSQLiteDB;
    void isFrozen;
    void migrationsList;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  temporaryURL;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end

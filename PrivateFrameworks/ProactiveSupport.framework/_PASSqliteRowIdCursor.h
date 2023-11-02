
@interface _PASSqliteRowIdCursor : _PASSqliteCollectionsCursor

+ (bool)hasRowId;
+ (const char *)sqliteCreateTableStatement;

- (bool)currentIndexEof;
- (unsigned long long)currentIndexedRowId;
- (unsigned long long)outputRowId;

@end


@interface _PASSqliteKeyValueCursor : _PASSqliteCollectionsCursor

+ (bool)hasKey;
+ (const char *)sqliteCreateTableStatement;

- (bool)currentIndexEof;
- (id)currentIndexedKey;
- (id)outputKey;

@end

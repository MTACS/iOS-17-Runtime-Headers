
@interface SFSQLiteStatement : NSObject <SFSQLiteRow> {
    NSString * _SQL;
    SFSQLite * _SQLite;
    struct sqlite3_stmt { } * _handle;
    NSDictionary * _indexesByColumnName;
    bool  _reset;
    NSMutableArray * _temporaryBoundObjects;
}

@property (nonatomic, readonly) NSString *SQL;
@property (nonatomic, readonly) SFSQLite *SQLite;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct sqlite3_stmt { }*handle;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDictionary *indexesByColumnName;
@property (getter=isReset, nonatomic) bool reset;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableArray *temporaryBoundObjects;

- (void).cxx_destruct;
- (id)SQL;
- (id)SQLite;
- (id)allObjects;
- (id)allObjectsByColumnName;
- (void)bindBlob:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)bindDouble:(double)arg1 atIndex:(unsigned long long)arg2;
- (void)bindInt64:(long long)arg1 atIndex:(unsigned long long)arg2;
- (void)bindInt:(int)arg1 atIndex:(unsigned long long)arg2;
- (void)bindNullAtIndex:(unsigned long long)arg1;
- (void)bindText:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)bindValue:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)bindValues:(id)arg1;
- (id)blobAtIndex:(unsigned long long)arg1;
- (unsigned long long)columnCount;
- (id)columnNameAtIndex:(unsigned long long)arg1;
- (int)columnTypeAtIndex:(unsigned long long)arg1;
- (double)doubleAtIndex:(unsigned long long)arg1;
- (void)enumerateColumnsUsingBlock:(id /* block */)arg1;
- (void)finalizeStatement;
- (struct sqlite3_stmt { }*)handle;
- (unsigned long long)indexForColumnName:(id)arg1;
- (id)indexesByColumnName;
- (id)initWithSQLite:(id)arg1 SQL:(id)arg2 handle:(struct sqlite3_stmt { }*)arg3;
- (long long)int64AtIndex:(unsigned long long)arg1;
- (int)intAtIndex:(unsigned long long)arg1;
- (bool)isReset;
- (id)objectAtIndex:(unsigned long long)arg1;
- (void)reset;
- (void)resetAfterStepError;
- (id)retainedTemporaryBoundObject:(id)arg1;
- (void)setIndexesByColumnName:(id)arg1;
- (void)setReset:(bool)arg1;
- (void)setTemporaryBoundObjects:(id)arg1;
- (bool)step;
- (id)temporaryBoundObjects;
- (id)textAtIndex:(unsigned long long)arg1;

@end


@interface EFSQLRow : NSObject {
    unsigned long long  _columnCount;
    NSDictionary * _columns;
    bool  _namedColumnsInitialized;
    EFSQLPreparedStatement * _preparedStatement;
    struct sqlite3_stmt { } * _statement;
}

@property (nonatomic) unsigned long long columnCount;
@property (nonatomic, readonly) NSDictionary *columns;
@property (nonatomic) bool namedColumnsInitialized;
@property (nonatomic, retain) EFSQLPreparedStatement *preparedStatement;
@property (nonatomic, readonly) struct sqlite3_stmt { }*statement;

- (void).cxx_destruct;
- (id)_queryString;
- (unsigned long long)columnCount;
- (bool)columnExistsAtIndex:(unsigned long long)arg1;
- (bool)columnExistsWithName:(id)arg1;
- (id)columnNames;
- (id)columns;
- (id)debugDescription;
- (id)initWithColumns:(id)arg1;
- (id)initWithPreparedStatement:(id)arg1;
- (id)initWithSQLiteStatement:(struct sqlite3_stmt { }*)arg1;
- (bool)namedColumnsInitialized;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)preparedStatement;
- (void)setColumnCount:(unsigned long long)arg1;
- (void)setNamedColumnsInitialized:(bool)arg1;
- (void)setPreparedStatement:(id)arg1;
- (struct sqlite3_stmt { }*)statement;

@end

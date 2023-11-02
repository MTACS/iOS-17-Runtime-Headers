
@interface _bmFMResultSet : NSObject {
    NSMutableDictionary * _columnNameToIndexMap;
    _bmFMDatabase * _parentDB;
    NSString * _query;
    bool  _shouldAutoClose;
    _bmFMStatement * _statement;
}

@property (nonatomic, readonly) int columnCount;
@property (readonly) NSMutableDictionary *columnNameToIndexMap;
@property (nonatomic, retain) _bmFMDatabase *parentDB;
@property (retain) NSString *query;
@property (nonatomic, readonly) NSDictionary *resultDictionary;
@property (nonatomic) bool shouldAutoClose;
@property (retain) _bmFMStatement *statement;

+ (id)resultSetWithStatement:(id)arg1 usingParentDatabase:(id)arg2 shouldAutoClose:(bool)arg3;

- (void).cxx_destruct;
- (const char *)UTF8StringForColumn:(id)arg1;
- (const char *)UTF8StringForColumnIndex:(int)arg1;
- (const char *)UTF8StringForColumnName:(id)arg1;
- (bool)bindWithArray:(id)arg1;
- (bool)bindWithArray:(id)arg1 orDictionary:(id)arg2 orVAList:(char *)arg3;
- (bool)bindWithDictionary:(id)arg1;
- (bool)boolForColumn:(id)arg1;
- (bool)boolForColumnIndex:(int)arg1;
- (void)close;
- (int)columnCount;
- (int)columnIndexForName:(id)arg1;
- (bool)columnIndexIsNull:(int)arg1;
- (bool)columnIsNull:(id)arg1;
- (id)columnNameForIndex:(int)arg1;
- (id)columnNameToIndexMap;
- (id)dataForColumn:(id)arg1;
- (id)dataForColumnIndex:(int)arg1;
- (id)dataNoCopyForColumn:(id)arg1;
- (id)dataNoCopyForColumnIndex:(int)arg1;
- (id)dateForColumn:(id)arg1;
- (id)dateForColumnIndex:(int)arg1;
- (void)dealloc;
- (double)doubleForColumn:(id)arg1;
- (double)doubleForColumnIndex:(int)arg1;
- (bool)hasAnotherRow;
- (int)intForColumn:(id)arg1;
- (int)intForColumnIndex:(int)arg1;
- (int)internalStepWithError:(id*)arg1;
- (void)kvcMagic:(id)arg1;
- (long long)longForColumn:(id)arg1;
- (long long)longForColumnIndex:(int)arg1;
- (long long)longLongIntForColumn:(id)arg1;
- (long long)longLongIntForColumnIndex:(int)arg1;
- (bool)next;
- (bool)nextWithError:(id*)arg1;
- (id)objectAtIndexedSubscript:(int)arg1;
- (id)objectForColumn:(id)arg1;
- (id)objectForColumnIndex:(int)arg1;
- (id)objectForColumnName:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)parentDB;
- (id)query;
- (id)resultDict;
- (id)resultDictionary;
- (void)setParentDB:(id)arg1;
- (void)setQuery:(id)arg1;
- (void)setShouldAutoClose:(bool)arg1;
- (void)setStatement:(id)arg1;
- (bool)shouldAutoClose;
- (id)statement;
- (bool)step;
- (bool)stepWithError:(id*)arg1;
- (id)stringForColumn:(id)arg1;
- (id)stringForColumnIndex:(int)arg1;
- (unsigned long long)unsignedLongLongIntForColumn:(id)arg1;
- (unsigned long long)unsignedLongLongIntForColumnIndex:(int)arg1;

@end


@interface MSVSQLRowEnumerator : NSEnumerator <NSObject> {
    MSVSQLStatement * _statement;
}

@property (nonatomic, readonly) long long columnCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addRow:(id)arg1 toTable:(id)arg2;
- (id)_markdownTable;
- (bool)boolValueAtColumnIndex:(long long)arg1;
- (long long)columnCount;
- (id)columnNameAtIndex:(long long)arg1;
- (id)dataValueAtColumnIndex:(long long)arg1;
- (id)dateValueAtColumnIndex:(long long)arg1;
- (id)description;
- (double)doubleValueAtColumnIndex:(long long)arg1;
- (float)floatValueAtColumnIndex:(long long)arg1;
- (long long)int64ValueAtColumnIndex:(long long)arg1;
- (bool)isNullValueAtColumnIndex:(long long)arg1;
- (id)jsonDataAtColumnIndex:(long long)arg1;
- (id)jsonValueAtColumnIndex:(long long)arg1 error:(id*)arg2;
- (id)markdownTable;
- (id)markdownTableHeader;
- (id)markdownTableRow;
- (id)nextObject;
- (id)nextObjectWithError:(id*)arg1;
- (id)objectValueAtColumnIndex:(long long)arg1;
- (id)stringValueAtColumnIndex:(long long)arg1;
- (unsigned long long)uint64ValueAtColumnIndex:(long long)arg1;

@end

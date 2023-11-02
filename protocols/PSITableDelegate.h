
@protocol PSITableDelegate

@required

- (void)bindMatchingIds:(struct __CFSet { }*)arg1;
- (void)bindMatchingIds:(const long long*)arg1 numberOfMatchingIds:(unsigned long long)arg2;
- (void)bindMatchingIds:(struct __CFArray { }*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)executeStatement:(PSIStatement *)arg1;
- (void)executeStatement:(void *)arg1 withResultEnumerationBlock:(void *)arg2; // needs 2 arg types, found 8: PSIStatement *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PSIStatement *, bool*, void*
- (void)executeStatementFromString:(NSString *)arg1;
- (void)executeStatementFromString:(void *)arg1 withResultEnumerationBlock:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PSIStatement *, bool*, void*
- (long long)lastInsertedRowID;
- (void)prepareForNumberOfMatchingIds:(unsigned long long)arg1;
- (PSIStatement *)statementFromString:(NSString *)arg1;
- (void)unbindMatchingIds;
- (void)unprepareMatchingIds;

@end


@protocol SFSQLiteRow <NSObject>

@required

- (NSArray *)allObjects;
- (NSDictionary *)allObjectsByColumnName;
- (NSData *)blobAtIndex:(unsigned long long)arg1;
- (unsigned long long)columnCount;
- (NSString *)columnNameAtIndex:(unsigned long long)arg1;
- (int)columnTypeAtIndex:(unsigned long long)arg1;
- (double)doubleAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexForColumnName:(NSString *)arg1;
- (long long)int64AtIndex:(unsigned long long)arg1;
- (int)intAtIndex:(unsigned long long)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (NSString *)textAtIndex:(unsigned long long)arg1;

@end

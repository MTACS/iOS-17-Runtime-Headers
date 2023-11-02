
@protocol HDSQLiteEntity <HDSQLiteEntitySchema>

@required

- (NSUUID *)UUIDForProperty:(NSString *)arg1 database:(HDSQLiteDatabase *)arg2;
- (bool)booleanForProperty:(NSString *)arg1 database:(HDSQLiteDatabase *)arg2;
- (NSDate *)dateForProperty:(NSString *)arg1 database:(HDSQLiteDatabase *)arg2;
- (bool)deleteFromDatabase:(HDSQLiteDatabase *)arg1 error:(id*)arg2;
- (bool)getValuesForProperties:(void *)arg1 database:(void *)arg2 error:(void *)arg3 handler:(void *)arg4; // needs 4 arg types, found 10: NSArray *, HDSQLiteDatabase *, id*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, struct HDSQLiteRow { }*, void*
- (bool)getValuesForProperties:(void *)arg1 database:(void *)arg2 handler:(void *)arg3; // needs 3 arg types, found 9: NSArray *, HDSQLiteDatabase *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, struct HDSQLiteRow { }*, void*
- (NSNumber *)numberForProperty:(NSString *)arg1 database:(HDSQLiteDatabase *)arg2;
- (NSString *)stringForProperty:(NSString *)arg1 database:(HDSQLiteDatabase *)arg2;
- (id)valueForProperty:(NSString *)arg1 database:(HDSQLiteDatabase *)arg2;
- (void)willDeleteFromDatabase:(HDSQLiteDatabase *)arg1;

@end

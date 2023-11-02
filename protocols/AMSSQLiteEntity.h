
@protocol AMSSQLiteEntity <NSObject>

@required

+ (NSString *)databaseTable;
+ (NSString *)disambiguatedSQLForProperty:(NSString *)arg1;
+ (NSString *)foreignDatabaseColumnForProperty:(NSString *)arg1;
+ (NSString *)foreignDatabaseTableForProperty:(NSString *)arg1;
+ (NSSet *)foreignDatabaseTablesToDelete;
+ (NSString *)foreignKeyColumnForTable:(NSString *)arg1;
+ (NSString *)joinClauseForProperty:(NSString *)arg1;

- (bool)deleteFromDatabase;
- (NSDictionary *)getValuesForProperties:(NSArray *)arg1;
- (id)objectForKeyedSubscript:(NSString *)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(NSString *)arg2;
- (bool)setValue:(id)arg1 forProperty:(NSString *)arg2;
- (bool)setValuesWithDictionary:(NSDictionary *)arg1;
- (id)valueForProperty:(NSString *)arg1;

@end

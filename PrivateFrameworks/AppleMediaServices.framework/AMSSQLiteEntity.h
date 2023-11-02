
@interface AMSSQLiteEntity : NSObject <AMSSQLiteEntity> {
    AMSSQLiteConnection * _connection;
    long long  _persistentID;
}

@property (nonatomic, readonly) AMSSQLiteConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool existsInDatabase;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long persistentID;
@property (readonly) Class superclass;

+ (id)_aggregateValueForProperty:(id)arg1 function:(id)arg2 predicate:(id)arg3 onConnection:(id)arg4;
+ (bool)_insertValues:(id)arg1 intoTable:(id)arg2 withPersistentID:(long long)arg3 onConnection:(id)arg4;
+ (id)anyOnConnection:(id)arg1 predicate:(id)arg2;
+ (id)countForProperty:(id)arg1 predicate:(id)arg2 onConnection:(id)arg3;
+ (id)databaseTable;
+ (id)disambiguatedSQLForProperty:(id)arg1;
+ (id)foreignDatabaseColumnForProperty:(id)arg1;
+ (id)foreignDatabaseTableForProperty:(id)arg1;
+ (id)foreignDatabaseTablesToDelete;
+ (id)foreignKeyColumnForTable:(id)arg1;
+ (id)joinClauseForProperty:(id)arg1;
+ (id)maxValueForProperty:(id)arg1 predicate:(id)arg2 onConnection:(id)arg3;
+ (Class)memoryEntityClass;
+ (id)minValueForProperty:(id)arg1 predicate:(id)arg2 onConnection:(id)arg3;
+ (id)queryOnConnection:(id)arg1 predicate:(id)arg2;
+ (id)queryOnConnection:(id)arg1 predicate:(id)arg2 orderingProperties:(id)arg3;

- (void).cxx_destruct;
- (id)_copyTableClusteredValuesWithValues:(id)arg1;
- (bool)_deleteRowFromTable:(id)arg1 usingColumn:(id)arg2;
- (id)connection;
- (bool)deleteFromDatabase;
- (bool)existsInDatabase;
- (id)getValuesForProperties:(id)arg1;
- (id)initWithPersistentID:(long long)arg1 onConnection:(id)arg2;
- (id)initWithPropertyValues:(id)arg1 onConnection:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (long long)persistentID;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (bool)setValue:(id)arg1 forProperty:(id)arg2;
- (bool)setValuesWithDictionary:(id)arg1;
- (id)valueForProperty:(id)arg1;

@end


@interface HDRaceRouteLocationSeriesEntity : HDSQLiteSchemaEntity <HDHealthEntitySchema>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)createRoutePointsFromWorkout:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
+ (id)createTableSQLWithBehavior:(id)arg1;
+ (id)databaseTable;
+ (bool)deleteSeriesDataWithIdentifier:(long long)arg1 transaction:(id)arg2 error:(id*)arg3;
+ (bool)enumerateRoutePointsForSeries:(long long)arg1 timestampAnchor:(double)arg2 limit:(unsigned long long)arg3 startDuration:(double)arg4 finishDuration:(double)arg5 transaction:(id)arg6 error:(id*)arg7 handler:(id /* block */)arg8;
+ (bool)enumerateRoutePointsForSeries:(long long)arg1 timestampAnchor:(double)arg2 limit:(unsigned long long)arg3 transaction:(id)arg4 error:(id*)arg5 handler:(id /* block */)arg6;
+ (bool)hasROWID;
+ (id)indicesWithBehavior:(id)arg1;
+ (bool)insertCodableRoutePoints:(id)arg1 seriesKey:(long long)arg2 transaction:(id)arg3 error:(id*)arg4;
+ (id)insertCodableRoutePoints:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
+ (id)primaryKeyColumns;
+ (long long)protectionClass;
+ (id)triggersWithBehavior:(id)arg1;

@end

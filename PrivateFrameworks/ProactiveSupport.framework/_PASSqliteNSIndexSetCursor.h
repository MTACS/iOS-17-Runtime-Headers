
@interface _PASSqliteNSIndexSetCursor : _PASSqliteRowIdIndexSetCursor

@property (nonatomic, retain) NSIndexSet *collection;

+ (double)baseEstimatedCost;
+ (double)baseEstimatedRows;
+ (bool)canOrderByValue:(bool)arg1;
+ (id)planningInfoForValueConstraint:(int)arg1;
+ (const char *)sqliteCreateTableStatement;
+ (const char *)sqliteMethodName;

- (void)applyConstraint:(int)arg1 withArgument:(id)arg2;
- (void)applyValueSort:(bool)arg1;
- (id)currentIndexedValue;
- (void)setCollection:(id)arg1;

@end

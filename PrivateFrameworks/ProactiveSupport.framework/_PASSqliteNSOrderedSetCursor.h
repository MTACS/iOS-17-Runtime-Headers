
@interface _PASSqliteNSOrderedSetCursor : _PASSqliteRowIdIndexSetCursor

@property (nonatomic, retain) NSOrderedSet *collection;

+ (id)planningInfoForValueConstraint:(int)arg1;
+ (const char *)sqliteCreateTableStatement;
+ (const char *)sqliteMethodName;

- (void)applyConstraint:(int)arg1 withArgument:(id)arg2;
- (id)currentIndexedValue;
- (void)setCollection:(id)arg1;

@end

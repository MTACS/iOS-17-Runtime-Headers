
@interface _PASSqliteNSSetCursor : _PASSqliteCollectionsCursor {
    id  _currentValue;
    NSSet * _set;
    NSEnumerator * _valuesEnumerator;
}

@property (nonatomic, retain) NSSet *collection;

+ (id)planningInfoForValueConstraint:(int)arg1;
+ (const char *)sqliteCreateTableStatement;
+ (const char *)sqliteMethodName;

- (void).cxx_destruct;
- (void)applyConstraint:(int)arg1 withArgument:(id)arg2;
- (bool)currentIndexEof;
- (bool)currentIndexedRowSatisfiesConstraints;
- (id)currentIndexedValue;
- (void)finalizeConstraints;
- (void)setCollection:(id)arg1;
- (void)stepIndexedRow;

@end

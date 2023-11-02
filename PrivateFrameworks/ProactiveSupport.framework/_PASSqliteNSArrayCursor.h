
@interface _PASSqliteNSArrayCursor : _PASSqliteRowIdIndexSetCursor {
    id  _equalTo;
}

@property (nonatomic, retain) NSArray *collection;

+ (id)planningInfoForValueConstraint:(int)arg1;
+ (const char *)sqliteMethodName;

- (void).cxx_destruct;
- (void)applyConstraint:(int)arg1 withArgument:(id)arg2;
- (bool)currentIndexedRowSatisfiesConstraints;
- (id)currentIndexedValue;
- (id)init;
- (void)setCollection:(id)arg1;

@end

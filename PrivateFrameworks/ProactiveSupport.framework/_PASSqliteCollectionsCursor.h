
@interface _PASSqliteCollectionsCursor : NSObject {
    id  _collection;
    bool  _eof;
    bool  _foundOutputRow;
}

@property (nonatomic, retain) id collection;

+ (double)baseEstimatedCost;
+ (double)baseEstimatedRows;
+ (bool)canOrderByKey:(bool)arg1;
+ (bool)canOrderByRowId:(bool)arg1;
+ (bool)canOrderByValue:(bool)arg1;
+ (bool)hasKey;
+ (bool)hasRowId;
+ (id)planningInfoForKeyConstraint:(int)arg1;
+ (id)planningInfoForRowIdConstraint:(int)arg1;
+ (id)planningInfoForValueConstraint:(int)arg1;
+ (const char *)sqliteCreateTableStatement;
+ (const char *)sqliteMethodName;

- (void).cxx_destruct;
- (void)applyConstraint:(int)arg1 withArgument:(id)arg2;
- (void)applyKeyConstraint:(int)arg1 withArgument:(id)arg2;
- (void)applyKeySort:(bool)arg1;
- (void)applyRowIdConstraint:(int)arg1 withArgument:(id)arg2;
- (void)applyRowIdSort:(bool)arg1;
- (void)applyValueSort:(bool)arg1;
- (id)collection;
- (bool)currentIndexEof;
- (bool)currentIndexedRowSatisfiesConstraints;
- (id)currentIndexedValue;
- (void)finalizeConstraints;
- (id)init;
- (id)outputKey;
- (unsigned long long)outputRowId;
- (void)setCollection:(id)arg1;
- (void)stepIndexedRow;

@end

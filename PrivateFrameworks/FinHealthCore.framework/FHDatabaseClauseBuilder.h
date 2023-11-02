
@interface FHDatabaseClauseBuilder : NSObject {
    NSMutableArray * _dynamicClauseList;
}

@property (nonatomic, readonly) NSMutableArray *dynamicClauseList;

- (void).cxx_destruct;
- (void)addDateClause:(id)arg1 fieldName:(id)arg2 expression:(id)arg3;
- (void)addDecimalNumberClause:(id)arg1 fieldName:(id)arg2 expression:(id)arg3;
- (void)addDoubleClause:(id)arg1 fieldName:(id)arg2 expression:(double)arg3;
- (void)addIntegerClause:(id)arg1 fieldName:(id)arg2 expression:(long long)arg3;
- (void)addNumberClause:(id)arg1 fieldName:(id)arg2 expression:(id)arg3;
- (void)addStringClause:(id)arg1 fieldName:(id)arg2 expression:(id)arg3;
- (id)dynamicClauseList;
- (id)init;

@end

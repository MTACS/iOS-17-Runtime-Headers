
@interface FHDatabaseInsertOrUpdateBuilder : NSObject {
    NSMutableArray * _dynamicFieldValuePairList;
}

@property (nonatomic, readonly) NSMutableArray *dynamicFieldValuePairList;

- (void).cxx_destruct;
- (void)addDateValueForField:(id)arg1 fieldValue:(id)arg2;
- (void)addDecimalNumberValueForField:(id)arg1 fieldValue:(id)arg2;
- (void)addDoubleValueForField:(id)arg1 fieldValue:(double)arg2;
- (void)addIntegerValueForField:(id)arg1 fieldValue:(long long)arg2;
- (void)addNumberValueForField:(id)arg1 fieldValue:(id)arg2;
- (void)addStringValueForField:(id)arg1 fieldValue:(id)arg2;
- (id)dynamicFieldValuePairList;
- (id)init;

@end

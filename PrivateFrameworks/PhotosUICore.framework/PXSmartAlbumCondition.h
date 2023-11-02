
@interface PXSmartAlbumCondition : NSObject {
    NSArray * _comparatorValues;
    long long  _conditionType;
    <PXSmartAlbumConditionDelegate> * _delegate;
    <PXSmartAlbumEditingContext> * _editingContext;
    PLSingleQuery * _singleQuery;
}

@property (nonatomic, readonly) long long comparatorParameterType;
@property (nonatomic, retain) PXLabeledValue *comparatorValue;
@property (nonatomic, readonly) NSArray *comparatorValues;
@property (nonatomic, readonly) long long conditionType;
@property (nonatomic) <PXSmartAlbumConditionDelegate> *delegate;
@property (nonatomic, readonly) <PXSmartAlbumEditingContext> *editingContext;
@property (nonatomic, readonly) PLSingleQuery *singleQuery;

+ (id)_conditionWithSingleQuery:(id)arg1 editingContext:(id)arg2;
+ (id)conditionWithConditionType:(long long)arg1 editingContext:(id)arg2;
+ (id)conditionsForQuery:(id)arg1 editingContext:(id)arg2 error:(id*)arg3;
+ (id)defaultSingleQueryForEditingContext:(id)arg1;

- (void).cxx_destruct;
- (int)_comparatorType;
- (id)_initWithConditionType:(long long)arg1 singleQuery:(id)arg2 editingContext:(id)arg3;
- (long long)comparatorMode;
- (long long)comparatorParameterType;
- (id)comparatorValue;
- (id)comparatorValues;
- (long long)conditionType;
- (id)delegate;
- (id)editingContext;
- (id)init;
- (void)setComparatorValue:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)singleQuery;

@end

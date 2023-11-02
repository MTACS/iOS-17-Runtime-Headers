
@interface FHDatabaseClause : NSObject {
    NSString * _comparisonOperator;
    NSString * _expression;
    NSString * _fieldName;
}

@property (nonatomic, copy) NSString *comparisonOperator;
@property (nonatomic, copy) NSString *expression;
@property (nonatomic, copy) NSString *fieldName;

- (void).cxx_destruct;
- (id)comparisonOperator;
- (id)description;
- (id)expression;
- (id)fieldName;
- (id)initWithQuoteWrapOption:(id)arg1 fieldName:(id)arg2 expression:(id)arg3 quoteWrapExpression:(bool)arg4;
- (void)setComparisonOperator:(id)arg1;
- (void)setExpression:(id)arg1;
- (void)setFieldName:(id)arg1;

@end

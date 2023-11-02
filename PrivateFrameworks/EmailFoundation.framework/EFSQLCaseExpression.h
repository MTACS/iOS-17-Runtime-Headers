
@interface EFSQLCaseExpression : NSObject <EFSQLValueExpressable> {
    <EFSQLValueExpressable> * _baseExpression;
    <EFSQLValueExpressable> * _elseExpression;
    NSMapTable * _whenExpressions;
}

@property (nonatomic, readonly) <EFSQLValueExpressable> *baseExpression;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *ef_SQLExpression;
@property (nonatomic, retain) <EFSQLValueExpressable> *elseExpression;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSMapTable *whenExpressions;

- (void).cxx_destruct;
- (id)baseExpression;
- (id)ef_SQLExpression;
- (id)ef_SQLIsolatedExpression;
- (void)ef_renderSQLExpressionInto:(id)arg1;
- (id)elseExpression;
- (id)init;
- (id)initWithBaseExpression:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setElseExpression:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)whenExpressions;

@end

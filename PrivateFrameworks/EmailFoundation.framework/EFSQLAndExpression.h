
@interface EFSQLAndExpression : NSObject <EFSQLCompoundExpression> {
    NSArray * _expressions;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *ef_SQLExpression;
@property (nonatomic, readonly, copy) NSArray *expressions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)combined:(id)arg1;

- (void).cxx_destruct;
- (id)ef_SQLExpression;
- (id)ef_SQLIsolatedExpression;
- (void)ef_renderSQLExpressionInto:(id)arg1;
- (id)expressions;
- (id)initWithExpressions:(id)arg1;

@end

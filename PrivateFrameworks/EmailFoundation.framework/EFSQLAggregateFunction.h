
@interface EFSQLAggregateFunction : NSObject <EFSQLValueExpressable> {
    NSArray * _arguments;
    NSString * _name;
}

@property (nonatomic, readonly, copy) NSArray *arguments;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *ef_SQLExpression;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *name;
@property (readonly) Class superclass;

+ (id)avg:(id)arg1;
+ (id)avgDistinct:(id)arg1;
+ (id)count:(id)arg1;
+ (id)countDistinct:(id)arg1;
+ (id)groupConcat:(id)arg1 separator:(id)arg2;
+ (id)max:(id)arg1;
+ (id)maxDistinct:(id)arg1;
+ (id)min:(id)arg1;
+ (id)minDistinct:(id)arg1;
+ (id)sum:(id)arg1;
+ (id)sumDistinct:(id)arg1;
+ (id)total:(id)arg1;
+ (id)totalDistinct:(id)arg1;

- (void).cxx_destruct;
- (id)arguments;
- (id)ef_SQLExpression;
- (id)ef_SQLIsolatedExpression;
- (void)ef_renderSQLExpressionInto:(id)arg1;
- (id)initWithName:(id)arg1 arguments:(id)arg2;
- (id)name;

@end

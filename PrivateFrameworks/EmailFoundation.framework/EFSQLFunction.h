
@interface EFSQLFunction : NSObject <EFSQLValueExpressable> {
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

+ (id)abs:(id)arg1;
+ (id)char:(id)arg1;
+ (id)coalesce:(id)arg1;
+ (id)glob:(id)arg1 expression:(id)arg2;
+ (id)hex:(id)arg1;
+ (id)ifNull:(id)arg1 second:(id)arg2;
+ (id)inStr:(id)arg1 second:(id)arg2;
+ (id)length:(id)arg1;
+ (id)like:(id)arg1 expression:(id)arg2;
+ (id)like:(id)arg1 expression:(id)arg2 escape:(unsigned short)arg3;
+ (id)likely:(id)arg1;
+ (id)lower:(id)arg1;
+ (id)ltrim:(id)arg1 pattern:(id)arg2;
+ (id)max:(id)arg1;
+ (id)min:(id)arg1;
+ (id)nullIf:(id)arg1 second:(id)arg2;
+ (id)replace:(id)arg1 pattern:(id)arg2 replacement:(id)arg3;
+ (id)round:(id)arg1 digits:(id)arg2;
+ (id)rtrim:(id)arg1 pattern:(id)arg2;
+ (id)substr:(id)arg1 index:(id)arg2 length:(id)arg3;
+ (id)trim:(id)arg1 pattern:(id)arg2;
+ (id)typeOf:(id)arg1;
+ (id)unlikely:(id)arg1;
+ (id)upper:(id)arg1;

- (void).cxx_destruct;
- (id)arguments;
- (id)ef_SQLExpression;
- (id)ef_SQLIsolatedExpression;
- (void)ef_renderSQLExpressionInto:(id)arg1;
- (id)initWithName:(id)arg1 arguments:(id)arg2;
- (id)name;

@end

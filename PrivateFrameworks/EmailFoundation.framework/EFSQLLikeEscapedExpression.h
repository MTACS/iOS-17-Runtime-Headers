
@interface EFSQLLikeEscapedExpression : NSObject <EFSQLValueExpressable> {
    unsigned short  _escapeCharacter;
    unsigned long long  _pattern;
    NSString * _value;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *ef_SQLExpression;
@property (nonatomic, readonly) unsigned short escapeCharacter;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long pattern;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *value;

- (void).cxx_destruct;
- (id)ef_SQLExpression;
- (id)ef_SQLIsolatedExpression;
- (void)ef_renderSQLExpressionInto:(id)arg1;
- (unsigned short)escapeCharacter;
- (id)initWithValue:(id)arg1;
- (id)initWithValue:(id)arg1 pattern:(unsigned long long)arg2;
- (id)initWithValue:(id)arg1 pattern:(unsigned long long)arg2 escapeCharacter:(unsigned short)arg3;
- (unsigned long long)pattern;
- (id)value;

@end

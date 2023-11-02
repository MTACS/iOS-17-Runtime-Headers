
@interface _EFSQLCharacterExpression : NSObject <EFSQLValueExpressable> {
    unsigned short  _character;
}

@property (nonatomic, readonly) unsigned short character;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *ef_SQLExpression;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (unsigned short)character;
- (id)ef_SQLExpression;
- (id)ef_SQLIsolatedExpression;
- (void)ef_renderSQLExpressionInto:(id)arg1;
- (id)initWithCharacter:(unsigned short)arg1;

@end

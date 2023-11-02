
@protocol BMTableQueryExpression <NSSecureCoding>

@required

- (NSArray *)children;
- (BMTable *)queryTable:(BMTable *)arg1;
- (void)setChildren:(NSArray *)arg1;

@end

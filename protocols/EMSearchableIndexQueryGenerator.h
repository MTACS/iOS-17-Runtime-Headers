
@protocol EMSearchableIndexQueryGenerator <NSObject>

@required

- (EMSearchableIndexQueryExpression *)queryExpressionFromPredicate:(NSPredicate *)arg1 propertyMapper:(EFSearchableIndexObjectPropertyMapper *)arg2 languages:(NSArray *)arg3;

@end

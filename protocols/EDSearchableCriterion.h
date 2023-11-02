
@protocol EDSearchableCriterion <NSObject, EFPubliclyDescribable>

@required

- (bool)isFullTextSearchableCriterion;
- (EMSearchableIndexQueryExpression *)spotlightQueryExpression;

@end

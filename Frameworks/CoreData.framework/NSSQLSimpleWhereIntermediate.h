
@interface NSSQLSimpleWhereIntermediate : NSSQLWhereIntermediate {
    NSMutableArray * _comparisonPredicateScopedItem;
    NSExpression * _effectiveLeftExpression;
    NSExpression * _effectiveRightExpression;
}

- (id)_lastScopedItem;
- (void)dealloc;
- (id)generateSQLStringInContext:(id)arg1;
- (id)initWithPredicate:(id)arg1 inScope:(id)arg2;
- (bool)isWhereScoped;

@end

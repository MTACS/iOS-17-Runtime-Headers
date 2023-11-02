
@interface NSSQLCountRequestContext : NSSQLFetchRequestContext

- (id)_createStatement;
- (bool)executeRequestCore:(id*)arg1;

@end

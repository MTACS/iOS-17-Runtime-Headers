
@protocol _UIDiffableDataSourceUpdate <NSObject>

@required

- (long long)action;
- (id)destinationIdentifier;
- (bool)destinationIdentifierIsSectionIdentifier;
- (NSOrderedSet *)identifiers;
- (bool)isDeleteAll;
- (bool)isSectionOperation;
- (long long)relativePosition;
- (bool)shouldReconfigure;

@end

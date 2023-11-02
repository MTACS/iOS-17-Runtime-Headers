
@interface NSSQLAttribute : NSSQLColumn

- (id)attributeDescription;
- (void)dealloc;
- (id)initForReadOnlyFetchWithExpression:(id)arg1;
- (id)initWithEntity:(id)arg1 propertyDescription:(id)arg2;
- (bool)isFileBackedFuture;

@end

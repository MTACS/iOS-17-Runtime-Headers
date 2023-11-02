
@protocol TSKModel <NSObject>

@optional

- (void)acceptVisitor:(id <TSKModelVisitor>)arg1;
- (NSEnumerator *)childEnumerator;
- (NSString *)modelPathComponentForChild:(id <TSKModel>)arg1;

@end

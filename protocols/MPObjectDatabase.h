
@protocol MPObjectDatabase <NSObject>

@required

- (MPIdentifierSet *)identifiersMatchingIdentifierSet:(MPIdentifierSet *)arg1 propertySet:(MPPropertySet *)arg2 options:(unsigned long long)arg3 error:(id*)arg4;
- (MPModelGenericObject *)modelObjectMatchingIdentifierSet:(MPIdentifierSet *)arg1 propertySet:(MPPropertySet *)arg2 error:(id*)arg3;

@end
